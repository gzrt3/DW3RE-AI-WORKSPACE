#include "dw3re_section0_part12.h"

#include <array>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

namespace
{
constexpr size_t kSector = 130248;
constexpr size_t kResourceSize = 72060;
constexpr size_t kSection0Offset = 0x1C;
constexpr size_t kPart12Offset = 0x3188;
constexpr size_t kPart12Size = 10628;
constexpr size_t kCommandCount = 332;

uint16_t u16(const uint8_t *p) { return static_cast<uint16_t>(p[0] | (p[1] << 8)); }
int16_t s16(const uint8_t *p) { return static_cast<int16_t>(u16(p)); }
uint32_t u32(const uint8_t *p) { return static_cast<uint32_t>(p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24)); }
std::string hexBytes(const uint8_t *p, size_t n)
{
    std::ostringstream s; s << std::uppercase << std::hex << std::setfill('0');
    for (size_t i = 0; i < n; ++i) { if (i) s << ' '; s << std::setw(2) << static_cast<unsigned>(p[i]); }
    return s.str();
}

bool loadResource(const std::filesystem::path &path, std::vector<uint8_t> &resource)
{
    std::ifstream f(path, std::ios::binary); if (!f) return false;
    f.seekg(static_cast<std::streamoff>(kSector * 2048)); resource.resize(kResourceSize);
    f.read(reinterpret_cast<char *>(resource.data()), static_cast<std::streamsize>(resource.size()));
    return f.gcount() == static_cast<std::streamsize>(resource.size());
}

bool emitArtifacts(const std::filesystem::path &dir, const std::vector<uint8_t> &resource, const std::vector<uint8_t> &part)
{
    std::filesystem::create_directories(dir);
    std::ofstream raw(dir / "PHASE_42_3B_RESOURCE_1670.bin", std::ios::binary); raw.write(reinterpret_cast<const char *>(resource.data()), static_cast<std::streamsize>(resource.size()));
    std::ofstream dump(dir / "PHASE_42_3B_PART12_RAW_HEXDUMP.txt");
    dump << "RESOURCE_ID=1670\nSECTION=0\nPART=12\nRESOURCE_SECTOR=" << kSector << "\nRESOURCE_OFFSET=0x" << std::hex << (kSector * 2048) << "\nSECTION0_OFFSET=0x1C\nPART12_OFFSET=0x3188\nPART12_SIZE=10628\nCOMMAND_COUNT=332\n\n";
    for (size_t i = 0; i < kCommandCount; ++i) dump << "CMD " << std::dec << i << " OFFSET 0x" << std::hex << (kPart12Offset + i * 32) << " FIRST_DWORD 0x" << std::setw(8) << std::setfill('0') << u32(part.data() + i * 32) << " BYTES " << hexBytes(part.data() + i * 32, 32) << "\n";
    dump << "SENTINEL OFFSET 0x5B0C BYTES " << hexBytes(part.data() + kCommandCount * 32, 4) << "\n";
    std::ofstream csv(dir / "PHASE_42_3B_PART12_COMMAND_TABLE.csv");
    csv << "command_index,part_offset,resource_offset,first_dword,opcode,raw_bytes,confirmed_interpretation\n";
    for (size_t i = 0; i < kCommandCount; ++i)
    {
        const auto *r = part.data() + i * 32; const uint16_t op = u16(r); const char *meaning = "";
        if (op == 0x27) meaning = "vertex declaration"; else if (op == 0x2F) meaning = "UV"; else if (op == 0x2E) meaning = "strip topology"; else if (op == 0x33) meaning = "triangle strip trigger"; else if (op == 0x3C) meaning = "socket binding";
        csv << i << ',' << (kPart12Offset + i * 32) << ',' << (kSection0Offset + kPart12Offset + i * 32) << ',' << u32(r) << ',' << op << ',"' << hexBytes(r, 32) << '\"' << ',' << meaning << '\n';
    }
    return raw.good() && dump.good() && csv.good();
}
}

int main(int argc, char **argv)
{
    const std::filesystem::path source = argc > 1 ? argv[1] : "Musou/DW3_native_spike/original/linkdata.bns";
    std::vector<uint8_t> resource; if (!loadResource(source, resource)) { std::cerr << "RESOURCE_LOAD=FAIL\n"; return 2; }
    if (u32(resource.data()) != 6 || u32(resource.data() + 4) != kSection0Offset || u32(resource.data() + kSection0Offset) != 13) { std::cerr << "CONTAINER_VALIDATION=FAIL\n"; return 3; }
    const uint8_t *section0 = resource.data() + kSection0Offset;
    if (u32(section0 + 4 + 12 * 4) != kPart12Offset) { std::cerr << "PART_OFFSET=FAIL\n"; return 4; }
    std::vector<uint8_t> part(section0 + kPart12Offset, section0 + kPart12Offset + kPart12Size);
    dw3re::Part12GeometryAsset geometry;
    if (!dw3re::DecodeResource1670Part12(part, geometry)) { std::cerr << "GEOMETRY_DECODE=FAIL " << geometry.error << '\n'; return 5; }
    std::cout << "RESOURCE_ID=1670\nSECTION=0\nPART=12\nRAW_SIZE=" << resource.size() << "\nPART_SIZE=" << part.size() << "\nCOMMAND_COUNT=" << kCommandCount << "\nVERTEX_RECORDS=" << geometry.declaredVertexRecords << "\nDRAWN_VERTICES=" << geometry.submittedVertices << "\nTRIANGLES=" << geometry.triangleCount << "\nBOUNDS=" << geometry.bounds.minX << ',' << geometry.bounds.minY << ',' << geometry.bounds.minZ << " -> " << geometry.bounds.maxX << ',' << geometry.bounds.maxY << ',' << geometry.bounds.maxZ << "\nSOCKET_BONE=" << geometry.socketBone << "\nSOCKET_QW=" << static_cast<unsigned>(geometry.socketQw) << '\n';
    if (argc > 2 && !emitArtifacts(argv[2], resource, part)) { std::cerr << "ARTIFACT_EMIT=FAIL\n"; return 6; }
    return geometry.declaredVertexRecords == 33 && geometry.submittedVertices == 22 && geometry.triangleCount == 18 ? 0 : 7;
}
