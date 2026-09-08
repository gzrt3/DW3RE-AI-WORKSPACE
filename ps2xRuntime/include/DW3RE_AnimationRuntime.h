#pragma once

#include "DW3RE_MotionParser.h"
#include "DW3RE_CharacterAssembly.h"

#include <vector>
#include <string>
#include <array>
#include <cstdint>

namespace DW3RE {

struct EvaluatedFrame {
    uint32_t model_res_id = 0;
    std::string officer_name;
    uint32_t clip_index = 0;
    float frame_time = 0.0f;

    // Root trajectory
    AssemblyVector3 root_translation{0.0f, 0.0f, 0.0f};
    AssemblyVector3 root_rotation_rad{0.0f, 0.0f, 0.0f};
    AssemblyVector3 root_rotation_deg{0.0f, 0.0f, 0.0f};

    // 81-joint matrices
    std::vector<AssemblyMatrix4x4> m_local;
    std::vector<AssemblyMatrix4x4> m_world;

    // VU1 matrix slots (16 slots of 4x4 matrices)
    std::array<AssemblyMatrix4x4, 16> vu1_slots;

    // Deterministic state hash (FNV-1a 64-bit)
    uint64_t state_hash = 0;
};

class PrimaryAnimationRuntime {
public:
    static constexpr int TOTAL_JOINTS = 81;

    PrimaryAnimationRuntime();
    ~PrimaryAnimationRuntime() = default;

    // Evaluates motion clip at arbitrary frame time and constructs local transforms, FK hierarchy, and VU1 slots
    EvaluatedFrame Evaluate(const MotionClip& clip, float frame_time, const std::string& officer_name = "");

    // Computes deterministic FNV-1a 64-bit state hash of evaluated frame
    static uint64_t ComputeFrameHash(const EvaluatedFrame& frame);

    // Validates Frame 0 numerical parity against native Phase 41A / Phase 40 anchors
    // Anchors tested: Bone 1, Bone 7, Bone 23, Bone 50 (required error < 1e-5)
    static bool ValidateFrame0Anchors(uint32_t res_id, const EvaluatedFrame& frame, float& out_max_err);

private:
    std::array<int, TOTAL_JOINTS> m_parents;
    std::array<int, TOTAL_JOINTS> m_joint_to_vu1_slot;

    void InitHierarchy();
    void BuildLocalTransforms(const MotionClip& clip, float t, EvaluatedFrame& out_frame);
    void PropagateFK(EvaluatedFrame& out_frame);
    void MapVU1Slots(EvaluatedFrame& out_frame);
};

} // namespace DW3RE
