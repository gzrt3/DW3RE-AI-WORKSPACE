#pragma once

#include "dw3re_section0_geometry.h"

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace DW3RE
{

struct AssemblyVector3
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

struct AssemblyMatrix4x4
{
    float m[4][4];

    static AssemblyMatrix4x4 Identity()
    {
        AssemblyMatrix4x4 r{};
        r.m[0][0] = 1.0f;
        r.m[1][1] = 1.0f;
        r.m[2][2] = 1.0f;
        r.m[3][3] = 1.0f;
        return r;
    }
};

struct SkeletonJoint
{
    int id = 0;
    int parentId = -1;
    std::string name;
    int rigNodeIndex = -1;
    uint32_t dispatchAddress = 0;

    AssemblyVector3 localTranslation{0.0f, 0.0f, 0.0f};
    AssemblyVector3 localRotation{0.0f, 0.0f, 0.0f}; // Euler angles in radians (Rx, Ry, Rz)
    AssemblyVector3 worldPosition{0.0f, 0.0f, 0.0f};
    AssemblyMatrix4x4 localTransform = AssemblyMatrix4x4::Identity();
    AssemblyMatrix4x4 worldTransform = AssemblyMatrix4x4::Identity();
};

struct Section5List
{
    uint8_t count = 0;
    std::vector<uint8_t> bones;
};

struct Section5Data
{
    bool valid = false;
    uint32_t offset = 0;
    uint32_t size = 0;
    std::vector<Section5List> lists; // L0, L1, L2...
};

struct PartAssemblyDiagnostic
{
    int partId = 0;
    size_t vertexCount = 0;
    size_t submissionCount = 0;
    size_t triangleCount = 0;
    std::string pipeline;
    int rawMatrixTag = 0;
    int resolvedSlot = -1;
    int resolvedBone = -1;
    std::string boneName = "UNKNOWN";
    bool matrixResolved = false;
    AssemblyMatrix4x4 transformMatrix = AssemblyMatrix4x4::Identity();
    std::string resolutionPath; // e.g. "L0[slot]", "Record 0x003C", "UNRESOLVED MATRIX"
};

struct TransformedPart
{
    int partId = 0;
    std::vector<AssemblyVector3> vertices;
    std::vector<uint32_t> indices;
    PartAssemblyDiagnostic diagnostic;
    bool renderable = false;
    dw3re::GeometryBounds bounds{};
};

class CharacterAssembly
{
public:
    static constexpr int TOTAL_JOINTS = 81;
    static constexpr int ANIMATED_RIG_NODES = 27;

    CharacterAssembly();
    ~CharacterAssembly() = default;

    // Initialize 81-joint skeletal hierarchy with native parent links and dispatch addresses
    void InitializeHierarchy();

    // Dynamically parse Section 5 (Sub-Rig Lists L0, L1, L2) from raw container bytes
    bool ParseSection5(const uint8_t *containerData, size_t containerSize);

    // Evaluate native Forward Kinematics (bind pose or animated)
    void EvaluateFK();

    // Transform a single vertex given its matrix tag and part socket info
    AssemblyVector3 TransformVertex(const dw3re::GeometryVertex &v, const dw3re::GeometryPart &part,
                                    PartAssemblyDiagnostic &diag) const;

    // Downstream assembly of a full Section0Asset
    std::vector<TransformedPart> AssembleAsset(const dw3re::Section0Asset &asset);

    // Apply animated world transforms to the 81-joint skeleton
    void ApplyAnimatedPose(const std::vector<AssemblyMatrix4x4> &worldTransforms);

    // Downstream assembly of a full Section0Asset with an explicit set of animated world matrices
    std::vector<TransformedPart> AssembleAnimatedAsset(const dw3re::Section0Asset &asset,
                                                      const std::vector<AssemblyMatrix4x4> &worldTransforms) const;

    // Individual part diagnostic evaluation
    PartAssemblyDiagnostic AnalyzePart(const dw3re::GeometryPart &part, int partId) const;

    // Accessors
    const std::vector<SkeletonJoint> &GetJoints() const { return m_joints; }
    const SkeletonJoint &GetJoint(int jointId) const { return m_joints[jointId]; }
    const Section5Data &GetSection5() const { return m_sec5; }

    // Numerical parity audit for Bone 1, Bone 7, Bone 23, Bone 50
    struct ParityResult
    {
        int boneId;
        const char *boneName;
        float maxAbsDiff;
        bool pass;
    };
    std::vector<ParityResult> ValidateNumericalParity() const;

    // Mathematical matrix helpers
    static AssemblyMatrix4x4 MatrixMultiply(const AssemblyMatrix4x4 &a, const AssemblyMatrix4x4 &b);
    static AssemblyMatrix4x4 MakeTransform(const AssemblyVector3 &translation, const AssemblyVector3 &rotation);
    static AssemblyVector3 TransformPoint(const AssemblyMatrix4x4 &m, const AssemblyVector3 &p);

private:
    std::vector<SkeletonJoint> m_joints;
    Section5Data m_sec5;
};

} // namespace DW3RE
