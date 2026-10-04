// vfs_hook.cpp — extracted-file VFS HLE bridge
//
// Contract:
//   - sceCdSearchFile assigns synthetic LSNs to actual extracted files.
//     sceCdRead accepts only complete sectors backed by that exact file.
//   - These LSNs are not retail ISO LBAs. Raw ISO reads, missing final-sector
//     padding, combined-content routing and dispatch integration require their
//     own evidence; successful file lookups do not establish those contracts.
//   - The extern "C" trampolines at the bottom of this file match the exact ABI
//     that PS2Recomp generates for registered HLE functions:
//       void hle_<name>(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
//
// Register access:
//   R5900Context.r[] is __m128i[32].  Use the official inline helpers from
//   ps2_runtime.h instead of raw field access:
//     getRegU32(ctx, reg)   — reads the low 32 bits of GPR[reg]
//     setReturnS32(ctx, v)  — sign-extends and writes result to $v0 (r[2])
//     setReturnU32(ctx, v)  — unsigned version of the above

#include "fate/vfs/vfs_hook.hpp"
#include "ps2_runtime.h"       // R5900Context, PS2Runtime, getRegU32, setReturnS32

#include <fstream>
#include <iostream>
#include <cstring>
#include <filesystem>
#include <algorithm>
#include <limits>
#include <stdexcept>
#include <vector>

// ============================================================
// VFSHook — singleton implementation
// ============================================================
namespace fate {
namespace vfs {

VFSHook& VFSHook::get() {
    static VFSHook instance;
    return instance;
}

void VFSHook::initialize(const std::string& dump_root) {
    if (!std::filesystem::is_directory(dump_root)) {
        throw std::runtime_error("VFS: extracted data root is not a directory: " + dump_root);
    }
    m_dump_root = dump_root;
    m_file_registry.clear();
    m_lsn_registry.clear();
    m_next_lsn = 0x10000;

    // The identified Base and XL dumps contain different archives. A matching
    // RID or requested filename does not establish payload equivalence. Never
    // satisfy a Base LINKDATA request with XL LINKDAT2 (or invent IDX/BIN files).
    map_file("\\LINKDATA.BNS;1",  "LINKDATA.BNS");
    map_file("\\LINKDAT2.BNS;1",  "LINKDAT2.BNS");
    map_file("\\LINKOVL.BNS;1",   "LINKOVL.BNS");
    map_file("\\BGM.BNS;1",       "BGM.BNS");
    map_file("\\VOICEU.BNS;1",    "VOICEU.BNS");
    map_file("\\VOICEJ.BNS;1",    "VOICEJ.BNS");
    map_file("\\VOICE.BNS;1",     "VOICE.BNS");
    map_file("\\JVOICE.BNS;1",    "JVOICE.BNS");
    map_file("\\OPED.BNS;1",      "OPED.BNS");
    map_file("\\KANJI.TM2;1",     "KANJI.TM2");
    map_file("\\USA_FONT.TM2;1",  "USA_FONT.TM2");

    std::cout << "[VFS] Initialized. Mapped " << m_file_registry.size()
              << " virtual entries from: " << m_dump_root << "\n";
}


void VFSHook::map_file(const std::string& virtual_name, const std::string& host_path) {
    std::filesystem::path full_path = std::filesystem::path(m_dump_root) / host_path;

    FileEntry entry;
    entry.host_path = full_path.string();
    entry.lsn       = m_next_lsn;

    std::error_code error;
    if (!std::filesystem::is_regular_file(full_path, error) || error) {
        // Expected filenames differ between releases. Report absence when a
        // caller requests it, and never publish a successful zero-size entry.
        return;
    }
    const uint64_t size = std::filesystem::file_size(full_path, error);
    if (error || size > std::numeric_limits<uint32_t>::max()) {
        throw std::runtime_error("VFS: cannot represent extracted file size: " + entry.host_path);
    }
    entry.size = static_cast<uint32_t>(size);

    const uint64_t occupied = std::max<uint64_t>(1, (size + 2047) / 2048);
    if (occupied > std::numeric_limits<uint32_t>::max() - m_next_lsn) {
        throw std::runtime_error("VFS: synthetic LSN range exhausted");
    }

    m_file_registry[virtual_name] = entry;
    m_lsn_registry[entry.lsn]    = entry;

    m_next_lsn += static_cast<uint32_t>(occupied);
}

// ---- CDVD syscall implementations ----

int VFSHook::sceCdSearchFile(sceCdlFILE* fp, const char* name) {
    if (!fp || !name) {
        std::cerr << "[VFS] sceCdSearchFile: null argument\n";
        return 0;
    }
    std::string key(name);
    std::cout << "[VFS] sceCdSearchFile: " << key << "\n";

    auto it = m_file_registry.find(key);
    if (it == m_file_registry.end()) {
        std::cerr << "[VFS] sceCdSearchFile: missing extracted file " << key << "\n";
        return 0;
    }
    std::error_code error;
    const auto current_size = std::filesystem::file_size(it->second.host_path, error);
    if (error || current_size != it->second.size) {
        std::cerr << "[VFS] sceCdSearchFile: backing file missing or changed: "
                  << it->second.host_path << "\n";
        return 0;
    }

    fp->lsn  = it->second.lsn;
    fp->size = it->second.size;
    std::memset(fp->date, 0, sizeof(fp->date));
    const size_t copied = key.copy(fp->name, sizeof(fp->name) - 1);
    fp->name[copied] = '\0';
    return 1; // success
}

int VFSHook::sceCdRead(uint32_t lsn, uint32_t sectors, void* buf, sceCdRMode* /*mode*/) {
    std::cout << "[VFS] sceCdRead: LSN=0x" << std::hex << lsn
              << " Sectors=" << std::dec << sectors << "\n";

    if (!buf || sectors == 0) {
        std::cerr << "[VFS] sceCdRead: null destination or empty request\n";
        return 0;
    }

    // Select one extent, then validate the complete request before touching the
    // caller's memory. A lower LSN alone does not establish that a file covers it.
    uint32_t     best_lsn   = 0;
    const FileEntry* target = nullptr;
    for (const auto& kv : m_lsn_registry) {
        if (kv.first <= lsn && kv.first >= best_lsn) {
            best_lsn = kv.first;
            target   = &kv.second;
        }
    }

    if (target) {
        const uint64_t offset_bytes = static_cast<uint64_t>(lsn - best_lsn) * 2048;
        const uint64_t read_bytes = static_cast<uint64_t>(sectors) * 2048;
        if (offset_bytes > target->size || read_bytes > target->size - offset_bytes ||
            read_bytes > PS2_RAM_SIZE) {
            std::cerr << "[VFS] sceCdRead: range is not fully backed by " << target->host_path << "\n";
            return 0;
        }

        // Extracted files omit any original sector padding beyond their byte
        // length. Fail rather than manufacture padding or read another archive.
        std::ifstream f(target->host_path, std::ios::binary | std::ios::ate);
        if (!f || f.tellg() != static_cast<std::streamoff>(target->size)) {
            std::cerr << "[VFS] sceCdRead: backing file missing or changed: " << target->host_path << "\n";
            return 0;
        }
        f.seekg(static_cast<std::streamoff>(offset_bytes), std::ios::beg);
        std::vector<uint8_t> staging(static_cast<size_t>(read_bytes));
        f.read(reinterpret_cast<char*>(staging.data()), static_cast<std::streamsize>(read_bytes));
        if (!f || f.gcount() != static_cast<std::streamsize>(read_bytes)) {
            std::cerr << "[VFS] sceCdRead: incomplete read from " << target->host_path << "\n";
            return 0;
        }
        std::memcpy(buf, staging.data(), staging.size());
        return 1;
    }

    std::cerr << "[VFS] sceCdRead: FAILED to map LSN 0x" << std::hex << lsn << std::dec << "\n";
    return 0;
}

int VFSHook::sceCdSync(int /*mode*/) {
    return 0; // always immediately complete
}

int VFSHook::sceCdGetError() {
    return 0; // SCECdErNO — no error
}

int VFSHook::sceCdDiskReady(int /*mode*/) {
    return 2; // SCECdComplete
}

} // namespace vfs
} // namespace fate

// ============================================================
// C-linkage trampolines — ABI must match PS2Recomp exactly:
//   void hle_<name>(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
//
// GPR conventions (MIPS O32):
//   a0=$4, a1=$5, a2=$6, a3=$7   — arguments
//   v0=$2                          — integer return value
//
// Use getRegU32 / setReturnS32 from ps2_runtime.h — never touch ctx->r[] directly.
// ============================================================
extern "C" {

void hle_sceCdSearchFile(uint8_t* rdram, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    uint32_t fp_addr   = getRegU32(ctx, 4); // a0 — pointer to sceCdlFILE in PS2 RAM
    uint32_t name_addr = getRegU32(ctx, 5); // a1 — pointer to filename string in PS2 RAM

    auto* fp   = reinterpret_cast<fate::vfs::sceCdlFILE*>(rdram + fp_addr);
    auto* name = reinterpret_cast<const char*>(rdram + name_addr);

    int result = fate::vfs::VFSHook::get().sceCdSearchFile(fp, name);
    setReturnS32(ctx, result);
}

void hle_sceCdRead(uint8_t* rdram, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    uint32_t lsn      = getRegU32(ctx, 4); // a0
    uint32_t sectors  = getRegU32(ctx, 5); // a1
    uint32_t buf_addr = getRegU32(ctx, 6); // a2
    uint32_t mode_addr = getRegU32(ctx, 7); // a3 — pointer to sceCdRMode struct

    void* buf = rdram + buf_addr;
    auto* mode = (mode_addr != 0)
        ? reinterpret_cast<fate::vfs::sceCdRMode*>(rdram + mode_addr)
        : nullptr;

    int result = fate::vfs::VFSHook::get().sceCdRead(lsn, sectors, buf, mode);
    setReturnS32(ctx, result);
}

void hle_sceCdSync(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int mode   = static_cast<int>(getRegU32(ctx, 4)); // a0
    int result = fate::vfs::VFSHook::get().sceCdSync(mode);
    setReturnS32(ctx, result);
}

void hle_sceCdGetError(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int result = fate::vfs::VFSHook::get().sceCdGetError();
    setReturnS32(ctx, result);
}

void hle_FlushCache(uint8_t* /*rdram*/, R5900Context* /*ctx*/, PS2Runtime* /*runtime*/) {
    // No-op on x86-64: cache coherency is handled automatically by the CPU/OS.
}

} // extern "C"
