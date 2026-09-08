#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <memory>

#pragma pack(push, 1)
// Canonical 16-byte Koei Gen 6 Resource Descriptor
struct DW3RE_Descriptor16 {
    uint32_t sector_offset; // Starting sector (LBN) in .BNS container
    uint32_t sector_count;  // Allocated sectors: (payload_size + 2047) >> 11
    uint32_t payload_size;  // Exact byte length of stored payload
    uint32_t reserved;      // 0 or flags
};
#pragma pack(pop)

// Namespace enum for autonomous multi-game resolution
enum class DW3RE_Namespace {
    DW3_BASE,       // Original DW3 (linkdata.bns / SLUS_202.77)
    DW3_XL,         // DW3 Xtreme Legends (LINKDAT2.BNS / SLUS_206.17)
    DW3_OVERLAY     // Relocatable ELF Overlays (LINKOVL.BNS)
};

// Resource Request Key
struct DW3RE_ResourceKey {
    DW3RE_Namespace ns;
    uint32_t        id;
};

// Loaded Resource Buffer Container
struct DW3RE_ResourceBuffer {
    uint32_t resource_id;
    DW3RE_Namespace ns;
    std::vector<uint8_t> data;
    bool was_compressed;
    uint32_t uncompressed_size;
};

// Abstract Resource Provider Interface
class IDW3REResourceProvider {
public:
    virtual ~IDW3REResourceProvider() = default;
    virtual const char* GetProviderName() const = 0;
    virtual bool HasResource(DW3RE_Namespace ns, uint32_t resource_id) const = 0;
    virtual bool GetDescriptor(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_Descriptor16* out_desc) const = 0;
    virtual bool LoadResource(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_ResourceBuffer* out_buf) = 0;
};
