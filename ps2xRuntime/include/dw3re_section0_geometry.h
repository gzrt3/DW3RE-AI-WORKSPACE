#pragma once
#include <cstdint>
#include <span>
#include <string>
#include <vector>
namespace dw3re {
struct GeometryVertex { float x=0,y=0,z=0,u=0,v=0; int16_t auxiliary=0; uint16_t sourceIndex=0,matrixTag=0; };
struct GeometryBounds { float minX=0,minY=0,minZ=0,maxX=0,maxY=0,maxZ=0; };
struct GeometryPart {
    uint32_t offset=0,size=0,commandCount=0,vertexRecordCount=0;
    std::vector<GeometryVertex> vertices; std::vector<uint32_t> indices; GeometryBounds bounds{};
    uint16_t socketSlot=0,socketNode=0,socketBone=0; uint8_t socketQw=0; bool renderable=false; std::vector<uint32_t> submissionCommands; std::vector<uint32_t> stripOffsets; std::string error;
    uint32_t op_0027=0, op_002e=0, op_002f=0, op_0030=0, op_0033=0, op_003c=0;
    std::string pipeline;
    std::string classification;
};
struct Section0Asset { uint32_t partCount=0; std::vector<GeometryPart> parts; std::string error; };
bool DecodeSection0(std::span<const uint8_t> resource, Section0Asset& out);
bool DecodeSection0Part(std::span<const uint8_t> part, GeometryPart& out);
}
