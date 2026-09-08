#pragma once

#include <cstdint>
#include <span>
#include <string>
#include <vector>
#include "dw3re_section0_geometry.h"

namespace dw3re
{
struct Part12Vertex
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float u = 0.0f;
    float v = 0.0f;
    int16_t auxiliary = 0;
};

struct Part12Bounds
{
    float minX = 0.0f, minY = 0.0f, minZ = 0.0f;
    float maxX = 0.0f, maxY = 0.0f, maxZ = 0.0f;
};

struct Part12GeometryAsset
{
    std::vector<Part12Vertex> vertices;
    std::vector<uint32_t> indices;
    Part12Bounds bounds{};
    uint32_t declaredVertexRecords = 0;
    uint32_t submittedVertices = 0;
    uint32_t triangleCount = 0;
    uint16_t socketBone = 0;
    uint8_t socketQw = 0;
    uint16_t socketSlot = 0;
    std::string error;
};

// Decodes only the already recovered Resource 1670 / Section 0 / Part 12 byte span.
// The input is the raw Part 12 span (332 32-byte commands plus its 4-byte sentinel).
bool DecodeResource1670Part12(std::span<const uint8_t> rawPart12, Part12GeometryAsset &out);
}
