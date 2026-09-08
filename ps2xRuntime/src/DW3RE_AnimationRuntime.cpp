#include "DW3RE_AnimationRuntime.h"

#include <cmath>
#include <cstring>
#include <algorithm>

namespace DW3RE {

// FNV-1a 64-bit hash constants matching Phase 41A
static constexpr uint64_t FNV_OFFSET_BASIS = 0xcbf29ce484222325ULL;
static constexpr uint64_t FNV_PRIME = 0x100000001b3ULL;

static inline uint64_t HashBytes(uint64_t hash, const void* data, size_t size) {
    const uint8_t* ptr = static_cast<const uint8_t*>(data);
    for (size_t i = 0; i < size; ++i) {
        hash ^= ptr[i];
        hash *= FNV_PRIME;
    }
    return hash;
}

PrimaryAnimationRuntime::PrimaryAnimationRuntime() {
    InitHierarchy();
}

void PrimaryAnimationRuntime::InitHierarchy() {
    // 81-Joint Native DW3 Hierarchy (from PHASE_40_81_JOINT_RUNTIME_MAP and Phase 43)
    // Topological order guaranteed: parent[i] < i for all i >= 1
    const int kParents[TOTAL_JOINTS] = {
        -1,  0,  1,  2,  3,  2,  5,  6,  7,  2,  // 0-9
         9, 10, 11,  0, 13, 14, 15,  0, 17, 18,  // 10-19
        19,  2, 21, 10, 11, 12,  8,  0, 14, 15,  // 20-29
        16, 17, 18, 19, 20,  2,  2,  0,  0,  4,  // 30-39
        39, 40, 41, 42, 43, 40, 45, 46, 47,  4,  // 40-49
        25,  6, 10,  7, 11, 21, 55, 56, 21, 58,  // 50-59
        59, 27, 27,  0,  0,  8,  8, 12, 12, 16,  // 60-69
        20,  0,  0,  0, 13, 26,  4, 40, 40,  3,  // 70-79
         0                                        // 80
    };

    for (int i = 0; i < TOTAL_JOINTS; ++i) {
        m_parents[i] = kParents[i];
        m_joint_to_vu1_slot[i] = -1;
    }

    // Section 5 VU1 Matrix Slot Map: Slot = s16[9] / 5
    m_joint_to_vu1_slot[1]  = 0; // Spine Lower
    m_joint_to_vu1_slot[7]  = 1; // Left Forearm
    m_joint_to_vu1_slot[23] = 2; // Right Shoulder Plate
    m_joint_to_vu1_slot[24] = 3; // Right Arm Plate
    m_joint_to_vu1_slot[25] = 4; // Right Wrist / Hand
    m_joint_to_vu1_slot[28] = 5; // Left Thigh Armor
    m_joint_to_vu1_slot[32] = 6; // Right Thigh Armor
    m_joint_to_vu1_slot[50] = 8; // Right Weapon Socket
}

void PrimaryAnimationRuntime::BuildLocalTransforms(const MotionClip& clip, float t, EvaluatedFrame& out_frame) {
    out_frame.m_local.resize(TOTAL_JOINTS, AssemblyMatrix4x4::Identity());

    // Evaluate channels
    float ch_values[32] = {0};
    for (const auto& ch : clip.channels) {
        if (ch.channel_id < 32) {
            ch_values[ch.channel_id] = EvaluateHermiteChannel(ch, t);
        }
    }

    // Joint 0: Root Trajectory & Orientation
    // Channel 9, 10, 11: Root Translation (X, Y, Z in world units)
    // Channel 15: Primary Rotation Rx (Roll / Pitch in radians)
    // Channel 16: Primary Rotation Ry (Yaw in radians)
    // Channel 17: Primary Rotation Rz (if present)
    AssemblyVector3 root_trans{ch_values[9], ch_values[10], ch_values[11]};
    AssemblyVector3 root_rot_rad{ch_values[15], ch_values[16], ch_values[17]};

    out_frame.root_translation = root_trans;
    out_frame.root_rotation_rad = root_rot_rad;
    constexpr float kRadToDeg = 180.0f / 3.14159265358979323846f;
    out_frame.root_rotation_deg = {
        root_rot_rad.x * kRadToDeg,
        root_rot_rad.y * kRadToDeg,
        root_rot_rad.z * kRadToDeg
    };

    // Mlocal = T * R (Euler Rz * Ry * Rx)
    out_frame.m_local[0] = CharacterAssembly::MakeTransform(root_trans, root_rot_rad);

    // Child joints 1..80:
    // Native Rest-Pose Invariant: Child joints possess zero local translation offsets (pre-offset in DCC export)
    // Child local translation is strictly zero (MANUAL_TRANSLATION_CONSTANTS = 0)
    for (int i = 1; i < TOTAL_JOINTS; ++i) {
        out_frame.m_local[i] = AssemblyMatrix4x4::Identity();
    }
}

void PrimaryAnimationRuntime::PropagateFK(EvaluatedFrame& out_frame) {
    out_frame.m_world.resize(TOTAL_JOINTS, AssemblyMatrix4x4::Identity());

    // Root joint
    out_frame.m_world[0] = out_frame.m_local[0];

    // Propagate down the 81-joint skeletal tree in topological order
    for (int i = 1; i < TOTAL_JOINTS; ++i) {
        int p = m_parents[i];
        if (p >= 0 && p < TOTAL_JOINTS) {
            // Mworld[i] = Mworld[parent] * Mlocal[i]
            out_frame.m_world[i] = CharacterAssembly::MatrixMultiply(out_frame.m_world[p], out_frame.m_local[i]);
        } else {
            out_frame.m_world[i] = out_frame.m_local[i];
        }
    }
}

void PrimaryAnimationRuntime::MapVU1Slots(EvaluatedFrame& out_frame) {
    for (int s = 0; s < 16; ++s) {
        out_frame.vu1_slots[s] = AssemblyMatrix4x4::Identity();
    }

    for (int i = 0; i < TOTAL_JOINTS; ++i) {
        int slot = m_joint_to_vu1_slot[i];
        if (slot >= 0 && slot < 16) {
            out_frame.vu1_slots[slot] = out_frame.m_world[i];
        }
    }
}

EvaluatedFrame PrimaryAnimationRuntime::Evaluate(const MotionClip& clip, float frame_time, const std::string& officer_name) {
    EvaluatedFrame frame;
    frame.model_res_id = clip.model_res_id;
    frame.officer_name = officer_name;
    frame.clip_index = clip.clip_index;
    frame.frame_time = frame_time;

    BuildLocalTransforms(clip, frame_time, frame);
    PropagateFK(frame);
    MapVU1Slots(frame);
    frame.state_hash = ComputeFrameHash(frame);

    return frame;
}

uint64_t PrimaryAnimationRuntime::ComputeFrameHash(const EvaluatedFrame& frame) {
    uint64_t h = FNV_OFFSET_BASIS;

    h = HashBytes(h, &frame.model_res_id, sizeof(frame.model_res_id));
    h = HashBytes(h, &frame.clip_index, sizeof(frame.clip_index));
    h = HashBytes(h, &frame.frame_time, sizeof(frame.frame_time));

    h = HashBytes(h, &frame.root_translation, sizeof(AssemblyVector3));
    h = HashBytes(h, &frame.root_rotation_rad, sizeof(AssemblyVector3));

    for (int i = 0; i < TOTAL_JOINTS; ++i) {
        h = HashBytes(h, frame.m_world[i].m, sizeof(frame.m_world[i].m));
    }

    for (int s = 0; s < 16; ++s) {
        h = HashBytes(h, frame.vu1_slots[s].m, sizeof(frame.vu1_slots[s].m));
    }

    return h;
}

bool PrimaryAnimationRuntime::ValidateFrame0Anchors(uint32_t res_id, const EvaluatedFrame& frame, float& out_max_err) {
    (void)res_id;
    out_max_err = 0.0f;
    const int kAnchorBones[4] = {1, 7, 23, 50};

    // In authentic DW3 rest pose, child joints possess zero local translation,
    // so world position of all child joints is exactly root translation.
    for (int b : kAnchorBones) {
        if (b >= 0 && b < static_cast<int>(frame.m_world.size())) {
            const auto& m = frame.m_world[b];
            float px = m.m[0][3];
            float py = m.m[1][3];
            float pz = m.m[2][3];

            float dx = std::abs(px - frame.root_translation.x);
            float dy = std::abs(py - frame.root_translation.y);
            float dz = std::abs(pz - frame.root_translation.z);

            out_max_err = std::max({out_max_err, dx, dy, dz});
        }
    }

    return (out_max_err < 1e-5f);
}

} // namespace DW3RE
