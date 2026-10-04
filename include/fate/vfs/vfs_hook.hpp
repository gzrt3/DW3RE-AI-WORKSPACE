#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

// Forward declarations — full definitions come from ps2_runtime.h (included only in .cpp)
struct R5900Context;
class PS2Runtime;

namespace fate {
namespace vfs {

// ---- PS2 CDVD types (mirrors of ps2cdvd.h, self-contained) ----
struct sceCdlFILE {
    uint32_t lsn;
    uint32_t size;
    char     name[16];
    uint8_t  date[8];
};

struct sceCdRMode {
    uint8_t trycount;
    uint8_t spindlctrl;
    uint8_t datapattern;
    uint8_t pad;
};

// ---- Virtual File System singleton ----
class VFSHook {
public:
    static VFSHook& get();

    // Single extracted-file mount. Existing names retain their exact backing
    // identity; missing files are not published. Reinitialization clears it.
    void initialize(const std::string& dump_root);

    // HLE implementations (called from the extern-C trampolines below)
    int sceCdSearchFile(sceCdlFILE* fp, const char* name);
    // Synthetic LSNs from SearchFile only. No inferred ISO padding or cross-file
    // reads; failure leaves the destination unchanged. Caller owns buffer size.
    int sceCdRead(uint32_t lsn, uint32_t sectors, void* buf, sceCdRMode* mode);
    int sceCdSync(int mode);
    int sceCdGetError();
    int sceCdDiskReady(int mode);

private:
    VFSHook() = default;

    std::string  m_dump_root;
    uint32_t     m_next_lsn = 0x10000;

    struct FileEntry {
        std::string host_path;
        uint32_t    size;
        uint32_t    lsn;
    };

    std::unordered_map<std::string, FileEntry> m_file_registry;
    std::unordered_map<uint32_t,    FileEntry> m_lsn_registry;

    void map_file(const std::string& virtual_name, const std::string& host_path);
};

} // namespace vfs
} // namespace fate

// ---- C-linkage trampoline declarations (matched 1:1 with the PS2Recomp ABI) ----
// These must live OUTSIDE any C++ namespace so the linker sees them as plain-C symbols.
extern "C" {
    void hle_sceCdSearchFile(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceCdRead      (uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceCdSync      (uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceCdGetError  (uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_FlushCache     (uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
}
