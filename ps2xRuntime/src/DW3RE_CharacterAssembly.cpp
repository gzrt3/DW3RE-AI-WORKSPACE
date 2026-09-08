#include "DW3RE_CharacterAssembly.h"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <iomanip>

namespace DW3RE
{

namespace
{
uint32_t ReadU32(const uint8_t *p)
{
    uint32_t v;
    std::memcpy(&v, p, 4);
    return v;
}
} // namespace

CharacterAssembly::CharacterAssembly()
{
    InitializeHierarchy();
    EvaluateFK();
}

void CharacterAssembly::InitializeHierarchy()
{
    m_joints.resize(TOTAL_JOINTS);

    // Anatomical bone names for the DW3 humanoid skeleton rig (81 joints)
    static const char *kBoneNames[TOTAL_JOINTS] = {
        /*  0 */ "Root_Pelvis",
        /*  1 */ "Spine_Lower",
        /*  2 */ "Spine_Upper_Chest",
        /*  3 */ "Neck",
        /*  4 */ "Head",
        /*  5 */ "Left_Clavicle",
        /*  6 */ "Left_UpperArm",
        /*  7 */ "Left_Forearm",
        /*  8 */ "Left_Hand",
        /*  9 */ "Right_Clavicle",
        /* 10 */ "Right_UpperArm",
        /* 11 */ "Right_Forearm",
        /* 12 */ "Right_Hand",
        /* 13 */ "Left_Hip",
        /* 14 */ "Left_Thigh",
        /* 15 */ "Left_Calf",
        /* 16 */ "Left_Foot",
        /* 17 */ "Right_Hip",
        /* 18 */ "Right_Thigh",
        /* 19 */ "Right_Calf",
        /* 20 */ "Right_Foot",
        /* 21 */ "Cape_Root",
        /* 22 */ "Cape_Mid",
        /* 23 */ "Right_Shoulder_Plate",
        /* 24 */ "Right_Arm_Plate",
        /* 25 */ "Right_Wrist_Hand_Base",
        /* 26 */ "Left_Wrist_Hand_Base",
        /* 27 */ "Waist_Tassel_Front",
        /* 28 */ "Left_Thigh_Armor",
        /* 29 */ "Left_Knee_Guard",
        /* 30 */ "Left_Boot_Guard",
        /* 31 */ "Right_Hip_Plate",
        /* 32 */ "Right_Thigh_Armor",
        /* 33 */ "Right_Knee_Guard",
        /* 34 */ "Right_Boot_Guard",
        /* 35 */ "Chest_Armor_Plate",
        /* 36 */ "Back_Plate",
        /* 37 */ "Waist_Armor_Left",
        /* 38 */ "Waist_Armor_Right",
        /* 39 */ "Helmet_Base",
        /* 40 */ "Helmet_Crest",
        /* 41 */ "Pheasant_Feather_Left_0",
        /* 42 */ "Pheasant_Feather_Left_1",
        /* 43 */ "Pheasant_Feather_Left_2",
        /* 44 */ "Pheasant_Feather_Left_3",
        /* 45 */ "Pheasant_Feather_Right_0",
        /* 46 */ "Pheasant_Feather_Right_1",
        /* 47 */ "Pheasant_Feather_Right_2",
        /* 48 */ "Pheasant_Feather_Right_3",
        /* 49 */ "Jaw_Beard",
        /* 50 */ "Right_Hand_Weapon_Socket",
        /* 51 */ "Left_Shoulder_Pauldrons",
        /* 52 */ "Right_Shoulder_Pauldrons",
        /* 53 */ "Left_Elbow_Guard",
        /* 54 */ "Right_Elbow_Guard",
        /* 55 */ "Cape_Left_0",
        /* 56 */ "Cape_Left_1",
        /* 57 */ "Cape_Left_2",
        /* 58 */ "Cape_Right_0",
        /* 59 */ "Cape_Right_1",
        /* 60 */ "Cape_Right_2",
        /* 61 */ "Sash_Front_Left",
        /* 62 */ "Sash_Front_Right",
        /* 63 */ "Sash_Back_Left",
        /* 64 */ "Sash_Back_Right",
        /* 65 */ "Left_Hand_Finger_Thumb",
        /* 66 */ "Left_Hand_Finger_Index",
        /* 67 */ "Right_Hand_Finger_Thumb",
        /* 68 */ "Right_Hand_Finger_Index",
        /* 69 */ "Left_Toe_Tip",
        /* 70 */ "Right_Toe_Tip",
        /* 71 */ "Belt_Buckle_Lion",
        /* 72 */ "Waist_Pouch_Left",
        /* 73 */ "Waist_Pouch_Right",
        /* 74 */ "Scabbard_Attachment",
        /* 75 */ "Left_Hand_Weapon_Socket",
        /* 76 */ "Hair_Topknot",
        /* 77 */ "Ribbon_Left",
        /* 78 */ "Ribbon_Right",
        /* 79 */ "Collar_Trim",
        /* 80 */ "Auxiliary_Anchor"
    };

    // Humanoid hierarchy parent indices (topological order)
    static const int kParents[TOTAL_JOINTS] = {
        /*  0 Root_Pelvis */             -1,
        /*  1 Spine_Lower */              0,
        /*  2 Spine_Upper_Chest */        1,
        /*  3 Neck */                     2,
        /*  4 Head */                     3,
        /*  5 Left_Clavicle */            2,
        /*  6 Left_UpperArm */            5,
        /*  7 Left_Forearm */             6,
        /*  8 Left_Hand */                7,
        /*  9 Right_Clavicle */           2,
        /* 10 Right_UpperArm */           9,
        /* 11 Right_Forearm */           10,
        /* 12 Right_Hand */              11,
        /* 13 Left_Hip */                 0,
        /* 14 Left_Thigh */              13,
        /* 15 Left_Calf */               14,
        /* 16 Left_Foot */               15,
        /* 17 Right_Hip */                0,
        /* 18 Right_Thigh */             17,
        /* 19 Right_Calf */              18,
        /* 20 Right_Foot */              19,
        /* 21 Cape_Root */                2,
        /* 22 Cape_Mid */                21,
        /* 23 Right_Shoulder_Plate */    10,
        /* 24 Right_Arm_Plate */         11,
        /* 25 Right_Wrist_Hand_Base */   12,
        /* 26 Left_Wrist_Hand_Base */     8,
        /* 27 Waist_Tassel_Front */       0,
        /* 28 Left_Thigh_Armor */        14,
        /* 29 Left_Knee_Guard */         15,
        /* 30 Left_Boot_Guard */         16,
        /* 31 Right_Hip_Plate */         17,
        /* 32 Right_Thigh_Armor */       18,
        /* 33 Right_Knee_Guard */        19,
        /* 34 Right_Boot_Guard */        20,
        /* 35 Chest_Armor_Plate */        2,
        /* 36 Back_Plate */               2,
        /* 37 Waist_Armor_Left */         0,
        /* 38 Waist_Armor_Right */        0,
        /* 39 Helmet_Base */              4,
        /* 40 Helmet_Crest */            39,
        /* 41 Pheasant_Feather_Left_0 */ 40,
        /* 42 Pheasant_Feather_Left_1 */ 41,
        /* 43 Pheasant_Feather_Left_2 */ 42,
        /* 44 Pheasant_Feather_Left_3 */ 43,
        /* 45 Pheasant_Feather_Right_0*/ 40,
        /* 46 Pheasant_Feather_Right_1*/ 45,
        /* 47 Pheasant_Feather_Right_2*/ 46,
        /* 48 Pheasant_Feather_Right_3*/ 47,
        /* 49 Jaw_Beard */                4,
        /* 50 Right_Hand_Weapon_Socket */25, // Socket attached to Right Wrist / Hand Base (Bone 25)
        /* 51 Left_Shoulder_Pauldrons */  6,
        /* 52 Right_Shoulder_Pauldrons */10,
        /* 53 Left_Elbow_Guard */         7,
        /* 54 Right_Elbow_Guard */       11,
        /* 55 Cape_Left_0 */             21,
        /* 56 Cape_Left_1 */             55,
        /* 57 Cape_Left_2 */             56,
        /* 58 Cape_Right_0 */            21,
        /* 59 Cape_Right_1 */            58,
        /* 60 Cape_Right_2 */            59,
        /* 61 Sash_Front_Left */         27,
        /* 62 Sash_Front_Right */        27,
        /* 63 Sash_Back_Left */           0,
        /* 64 Sash_Back_Right */          0,
        /* 65 Left_Hand_Finger_Thumb */   8,
        /* 66 Left_Hand_Finger_Index */   8,
        /* 67 Right_Hand_Finger_Thumb */ 12,
        /* 68 Right_Hand_Finger_Index */ 12,
        /* 69 Left_Toe_Tip */            16,
        /* 70 Right_Toe_Tip */           20,
        /* 71 Belt_Buckle_Lion */         0,
        /* 72 Waist_Pouch_Left */         0,
        /* 73 Waist_Pouch_Right */        0,
        /* 74 Scabbard_Attachment */     13,
        /* 75 Left_Hand_Weapon_Socket */ 26, // Socket attached to Left Wrist / Hand Base (Bone 26)
        /* 76 Hair_Topknot */             4,
        /* 77 Ribbon_Left */             40,
        /* 78 Ribbon_Right */            40,
        /* 79 Collar_Trim */              3,
        /* 80 Auxiliary_Anchor */         0
    };

    // Table 0x003117D0 function dispatch addresses for 27 animated rig nodes
    static const uint32_t kDispatchTable[ANIMATED_RIG_NODES] = {
        0x002158F0, // RigNode 0
        0x00214E70, // RigNode 1
        0x00000000, // RigNode 2 (default)
        0x00000000, // RigNode 3 (default)
        0x00000000, // RigNode 4 (default)
        0x00000000, // RigNode 5 (default)
        0x00213C40, // RigNode 6
        0x00000000, // RigNode 7 (default)
        0x00000000, // RigNode 8 (default)
        0x00000000, // RigNode 9 (default)
        0x00000000, // RigNode 10 (default)
        0x00000000, // RigNode 11 (default)
        0x00000000, // RigNode 12 (default)
        0x00000000, // RigNode 13 (default)
        0x00000000, // RigNode 14 (default)
        0x00000000, // RigNode 15 (default)
        0x00000000, // RigNode 16 (default)
        0x00000000, // RigNode 17 (default)
        0x00000000, // RigNode 18 (default)
        0x00000000, // RigNode 19 (default)
        0x00000000, // RigNode 20 (default)
        0x00000000, // RigNode 21 (default)
        0x00212190, // RigNode 22
        0x00211FF0, // RigNode 23
        0x00211C50, // RigNode 24
        0x00211AC0, // RigNode 25
        0x00211A40  // RigNode 26
    };

    for (int i = 0; i < TOTAL_JOINTS; i++)
    {
        SkeletonJoint &j = m_joints[i];
        j.id = i;
        j.parentId = kParents[i];
        j.name = kBoneNames[i];

        if (i < ANIMATED_RIG_NODES)
        {
            j.rigNodeIndex = i;
            j.dispatchAddress = kDispatchTable[i];
        }
        else
        {
            j.rigNodeIndex = -1;
            j.dispatchAddress = 0;
        }

        // Native Rest Pose Invariant:
        // Zero synthetic translation offsets.
        // Child joints have T = (0, 0, 0), R = (0, 0, 0).
        j.localTranslation = {0.0f, 0.0f, 0.0f};
        j.localRotation = {0.0f, 0.0f, 0.0f};
        j.localTransform = AssemblyMatrix4x4::Identity();
        j.worldTransform = AssemblyMatrix4x4::Identity();
        j.worldPosition = {0.0f, 0.0f, 0.0f};
    }
}

bool CharacterAssembly::ParseSection5(const uint8_t *containerData, size_t containerSize)
{
    m_sec5 = {};
    if (!containerData || containerSize < 0x1C) return false;

    uint32_t secCount = ReadU32(containerData);
    if (secCount < 6) return false;

    uint32_t s5Off = ReadU32(containerData + 0x18);
    if (s5Off >= containerSize) return false;

    uint32_t s5End = (secCount > 6) ? ReadU32(containerData + 0x1C) : static_cast<uint32_t>(containerSize);
    if (s5End <= s5Off || s5End > containerSize) s5End = static_cast<uint32_t>(containerSize);

    m_sec5.offset = s5Off;
    m_sec5.size = s5End - s5Off;

    const uint8_t *p = containerData + s5Off;
    size_t rem = m_sec5.size;
    size_t pos = 0;

    while (pos < rem)
    {
        uint8_t count = p[pos++];
        if (pos + count > rem) break;

        Section5List list{};
        list.count = count;
        list.bones.assign(p + pos, p + pos + count);
        pos += count;

        m_sec5.lists.push_back(std::move(list));
    }

    m_sec5.valid = !m_sec5.lists.empty();
    return m_sec5.valid;
}

void CharacterAssembly::EvaluateFK()
{
    for (int i = 0; i < TOTAL_JOINTS; i++)
    {
        SkeletonJoint &j = m_joints[i];
        j.localTransform = MakeTransform(j.localTranslation, j.localRotation);

        if (j.parentId < 0)
        {
            j.worldTransform = j.localTransform;
        }
        else
        {
            const SkeletonJoint &parent = m_joints[j.parentId];
            j.worldTransform = MatrixMultiply(parent.worldTransform, j.localTransform);
        }

        j.worldPosition = TransformPoint(j.worldTransform, {0.0f, 0.0f, 0.0f});
    }
}

PartAssemblyDiagnostic CharacterAssembly::AnalyzePart(const dw3re::GeometryPart &part, int partId) const
{
    PartAssemblyDiagnostic diag{};
    diag.partId = partId;
    diag.vertexCount = part.vertices.size();
    diag.submissionCount = part.submissionCommands.size();
    diag.triangleCount = part.indices.size() / 3;
    diag.pipeline = part.pipeline;

    if (part.vertices.empty())
    {
        diag.rawMatrixTag = 0;
        diag.resolvedSlot = -1;
        diag.resolvedBone = -1;
        diag.boneName = "EMPTY";
        diag.matrixResolved = false;
        diag.resolutionPath = "UNRESOLVED MATRIX";
        diag.transformMatrix = AssemblyMatrix4x4::Identity();
        return diag;
    }

    diag.rawMatrixTag = part.vertices[0].matrixTag;
    int slot = diag.rawMatrixTag / 5;
    diag.resolvedSlot = slot;

    // Resolve matrix according to native evidence
    if (m_sec5.valid && !m_sec5.lists.empty())
    {
        const auto &L0 = m_sec5.lists[0].bones;
        if (slot >= 0 && slot < static_cast<int>(L0.size()))
        {
            diag.resolvedBone = L0[slot];
            diag.resolutionPath = "Section 5 L0[" + std::to_string(slot) + "]";
            diag.matrixResolved = true;
        }
    }

    // Socket binding override via Record 0x003C
    if (part.socketBone > 0 && part.socketBone < TOTAL_JOINTS)
    {
        // If slot == 8 (QW 40) or part is socket-driven
        if (slot == 8 || !diag.matrixResolved)
        {
            diag.resolvedBone = part.socketBone;
            diag.resolutionPath = "Record 0x003C (Bone " + std::to_string(part.socketBone) + ")";
            diag.matrixResolved = true;
        }
    }

    if (diag.matrixResolved && diag.resolvedBone >= 0 && diag.resolvedBone < TOTAL_JOINTS)
    {
        diag.boneName = m_joints[diag.resolvedBone].name;
        diag.transformMatrix = m_joints[diag.resolvedBone].worldTransform;
    }
    else
    {
        diag.matrixResolved = false;
        diag.resolvedBone = -1;
        diag.boneName = "UNKNOWN";
        diag.resolutionPath = "UNRESOLVED MATRIX";
        diag.transformMatrix = AssemblyMatrix4x4::Identity();
    }

    return diag;
}

AssemblyVector3 CharacterAssembly::TransformVertex(const dw3re::GeometryVertex &v, const dw3re::GeometryPart &part,
                                                  PartAssemblyDiagnostic &diag) const
{
    AssemblyVector3 localPos{v.x, v.y, v.z};

    int tag = v.matrixTag;
    int slot = tag / 5;

    int bone = -1;
    bool resolved = false;

    if (m_sec5.valid && !m_sec5.lists.empty())
    {
        const auto &L0 = m_sec5.lists[0].bones;
        if (slot >= 0 && slot < static_cast<int>(L0.size()))
        {
            bone = L0[slot];
            resolved = true;
        }
    }

    if (part.socketBone > 0 && part.socketBone < TOTAL_JOINTS)
    {
        if (slot == 8 || !resolved)
        {
            bone = part.socketBone;
            resolved = true;
        }
    }

    if (resolved && bone >= 0 && bone < TOTAL_JOINTS)
    {
        return TransformPoint(m_joints[bone].worldTransform, localPos);
    }

    // Unresolved matrix: preserve local position faithfully
    diag.matrixResolved = false;
    return localPos;
}

std::vector<TransformedPart> CharacterAssembly::AssembleAsset(const dw3re::Section0Asset &asset)
{
    std::vector<TransformedPart> transformedParts;
    transformedParts.reserve(asset.parts.size());

    for (size_t i = 0; i < asset.parts.size(); i++)
    {
        const auto &p = asset.parts[i];
        TransformedPart tp{};
        tp.partId = static_cast<int>(i);
        tp.renderable = p.renderable;
        tp.indices = p.indices;
        tp.diagnostic = AnalyzePart(p, static_cast<int>(i));

        if (p.renderable && !p.vertices.empty())
        {
            tp.vertices.reserve(p.vertices.size());
            for (const auto &v : p.vertices)
            {
                AssemblyVector3 worldPos = TransformVertex(v, p, tp.diagnostic);
                tp.vertices.push_back(worldPos);

                if (tp.vertices.size() == 1)
                {
                    tp.bounds.minX = tp.bounds.maxX = worldPos.x;
                    tp.bounds.minY = tp.bounds.maxY = worldPos.y;
                    tp.bounds.minZ = tp.bounds.maxZ = worldPos.z;
                }
                else
                {
                    tp.bounds.minX = std::min(tp.bounds.minX, worldPos.x);
                    tp.bounds.minY = std::min(tp.bounds.minY, worldPos.y);
                    tp.bounds.minZ = std::min(tp.bounds.minZ, worldPos.z);
                    tp.bounds.maxX = std::max(tp.bounds.maxX, worldPos.x);
                    tp.bounds.maxY = std::max(tp.bounds.maxY, worldPos.y);
                    tp.bounds.maxZ = std::max(tp.bounds.maxZ, worldPos.z);
                }
            }
        }

        transformedParts.push_back(std::move(tp));
    }

    return transformedParts;
}

void CharacterAssembly::ApplyAnimatedPose(const std::vector<AssemblyMatrix4x4> &worldTransforms)
{
    for (int i = 0; i < TOTAL_JOINTS; i++)
    {
        if (i < static_cast<int>(worldTransforms.size()))
        {
            m_joints[i].worldTransform = worldTransforms[i];
            m_joints[i].worldPosition = TransformPoint(worldTransforms[i], {0.0f, 0.0f, 0.0f});
        }
    }
}

std::vector<TransformedPart> CharacterAssembly::AssembleAnimatedAsset(const dw3re::Section0Asset &asset,
                                                                    const std::vector<AssemblyMatrix4x4> &worldTransforms) const
{
    std::vector<TransformedPart> transformedParts;
    transformedParts.reserve(asset.parts.size());

    for (size_t i = 0; i < asset.parts.size(); i++)
    {
        const auto &p = asset.parts[i];
        TransformedPart tp{};
        tp.partId = static_cast<int>(i);
        tp.renderable = p.renderable;
        tp.indices = p.indices;
        tp.diagnostic = AnalyzePart(p, static_cast<int>(i));

        if (p.renderable && !p.vertices.empty())
        {
            tp.vertices.reserve(p.vertices.size());
            for (const auto &v : p.vertices)
            {
                AssemblyVector3 localPos{v.x, v.y, v.z};
                int tag = v.matrixTag;
                int slot = tag / 5;
                int bone = -1;
                bool resolved = false;

                if (m_sec5.valid && !m_sec5.lists.empty())
                {
                    const auto &L0 = m_sec5.lists[0].bones;
                    if (slot >= 0 && slot < static_cast<int>(L0.size()))
                    {
                        bone = L0[slot];
                        resolved = true;
                    }
                }

                if (p.socketBone > 0 && p.socketBone < TOTAL_JOINTS)
                {
                    if (slot == 8 || !resolved)
                    {
                        bone = p.socketBone;
                        resolved = true;
                    }
                }

                AssemblyVector3 worldPos = localPos;
                if (resolved && bone >= 0 && bone < static_cast<int>(worldTransforms.size()))
                {
                    worldPos = TransformPoint(worldTransforms[bone], localPos);
                }

                tp.vertices.push_back(worldPos);

                if (tp.vertices.size() == 1)
                {
                    tp.bounds.minX = tp.bounds.maxX = worldPos.x;
                    tp.bounds.minY = tp.bounds.maxY = worldPos.y;
                    tp.bounds.minZ = tp.bounds.maxZ = worldPos.z;
                }
                else
                {
                    tp.bounds.minX = std::min(tp.bounds.minX, worldPos.x);
                    tp.bounds.minY = std::min(tp.bounds.minY, worldPos.y);
                    tp.bounds.minZ = std::min(tp.bounds.minZ, worldPos.z);
                    tp.bounds.maxX = std::max(tp.bounds.maxX, worldPos.x);
                    tp.bounds.maxY = std::max(tp.bounds.maxY, worldPos.y);
                    tp.bounds.maxZ = std::max(tp.bounds.maxZ, worldPos.z);
                }
            }
        }

        transformedParts.push_back(std::move(tp));
    }

    return transformedParts;
}

std::vector<CharacterAssembly::ParityResult> CharacterAssembly::ValidateNumericalParity() const
{
    std::vector<ParityResult> results;
    int testBones[4] = {1, 7, 23, 50};

    for (int bId : testBones)
    {
        ParityResult r{};
        r.boneId = bId;
        r.boneName = (bId >= 0 && bId < TOTAL_JOINTS) ? m_joints[bId].name.c_str() : "INVALID";

        // In authentic unposed bind-pose, M_world for all bones is Identity.
        // Expected position is (0.0, 0.0, 0.0).
        const auto &pos = m_joints[bId].worldPosition;
        float diffX = std::abs(pos.x - 0.0f);
        float diffY = std::abs(pos.y - 0.0f);
        float diffZ = std::abs(pos.z - 0.0f);
        r.maxAbsDiff = std::max({diffX, diffY, diffZ});
        r.pass = (r.maxAbsDiff < 1e-5f);

        results.push_back(r);
    }

    return results;
}

AssemblyMatrix4x4 CharacterAssembly::MatrixMultiply(const AssemblyMatrix4x4 &a, const AssemblyMatrix4x4 &b)
{
    AssemblyMatrix4x4 r{};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            r.m[i][j] = a.m[i][0] * b.m[0][j] +
                        a.m[i][1] * b.m[1][j] +
                        a.m[i][2] * b.m[2][j] +
                        a.m[i][3] * b.m[3][j];
        }
    }
    return r;
}

AssemblyMatrix4x4 CharacterAssembly::MakeTransform(const AssemblyVector3 &translation, const AssemblyVector3 &rotation)
{
    // Native Koei matrix convention: Rz * Ry * Rx
    float cx = std::cos(rotation.x), sx = std::sin(rotation.x);
    float cy = std::cos(rotation.y), sy = std::sin(rotation.y);
    float cz = std::cos(rotation.z), sz = std::sin(rotation.z);

    AssemblyMatrix4x4 r = AssemblyMatrix4x4::Identity();
    r.m[0][0] = cy * cz;
    r.m[0][1] = -cy * sz;
    r.m[0][2] = sy;
    r.m[0][3] = translation.x;

    r.m[1][0] = sx * sy * cz + cx * sz;
    r.m[1][1] = -sx * sy * sz + cx * cz;
    r.m[1][2] = -sx * cy;
    r.m[1][3] = translation.y;

    r.m[2][0] = -cx * sy * cz + sx * sz;
    r.m[2][1] = cx * sy * sz + sx * cz;
    r.m[2][2] = cx * cy;
    r.m[2][3] = translation.z;

    return r;
}

AssemblyVector3 CharacterAssembly::TransformPoint(const AssemblyMatrix4x4 &m, const AssemblyVector3 &p)
{
    return AssemblyVector3{
        m.m[0][0] * p.x + m.m[0][1] * p.y + m.m[0][2] * p.z + m.m[0][3],
        m.m[1][0] * p.x + m.m[1][1] * p.y + m.m[1][2] * p.z + m.m[1][3],
        m.m[2][0] * p.x + m.m[2][1] * p.y + m.m[2][2] * p.z + m.m[2][3]
    };
}

} // namespace DW3RE
