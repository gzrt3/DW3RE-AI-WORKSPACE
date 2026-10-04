// patch_engine.cpp — Runtime Memory Patcher
// Dynasty Warriors 3 XL — PC Port
#include "patch_engine.h"
#include <cstring>
#include <cstdio>
#include <algorithm>

// ── Constructor ─────────────────────────────────────────────────────────────
PatchEngine::PatchEngine(uint8_t* rdram, size_t rdramSize)
    : m_rdram(rdram), m_rdramSize(rdramSize)
{}

// ─────────────────────────────────────────────────────────────────────────────
// Built-in patch definitions
//
// How these were found:
//   1. 30 FPS cap — PS2 DW3 syncs to VSync (NTSC=60Hz) but game logic updates
//      every OTHER VSync using a counter. The counter is a byte comparison
//      (CMP byte, 0x02 / JNE). We NOP or change to 0x01 to run at 60.
//   2. The patterns below are byte sequences from the PS2 ELF recompiled to x86.
//      They may need adjustment after a fresh recompile; tweak the mask's
//      wildcard bytes (0x00) to skip addresses that change between builds.
// ─────────────────────────────────────────────────────────────────────────────
void PatchEngine::registerBuiltinPatches() {

    // ── Patch 1: 60 FPS (remove per-frame skip) ───────────────────────────
    // Original: compare frame counter to 2, skip logic every other frame.
    // In the recompiled x86 output this materialises as:
    //   83 F8 02  →  cmp eax, 2
    //   75 XX     →  jne <skip_update>  (XX = short jump offset)
    // Fix: change the comparison constant to 1 (run every frame).
    //   83 F8 01
    {
        Patch p;
        p.name    = "60FPS_frame_limiter";
        p.pattern = { 0x83, 0xF8, 0x02, 0x75 }; // cmp eax,2 / jne
        p.mask    = { 0xFF, 0xFF, 0xFF, 0xFF };
        p.payload = { 0x83, 0xF8, 0x01 };         // cmp eax,1
        p.payloadOffset = 0;
        m_patches.push_back(std::move(p));
    }

    // ── Patch 2: 60 FPS vsync wait — remove half-rate flip ────────────────
    // DW3 calls a vsync-wait function; sometimes it waits for 2 vblanks.
    // Pattern: CALL to wait + MOV of count=2.
    //   C7 05 ?? ?? ?? ??  02 00 00 00  (mov [addr], 2)
    // Fix: change constant 2 → 1.
    {
        Patch p;
        p.name    = "60FPS_vblank_count";
        p.pattern = { 0xC7, 0x05, 0x00, 0x00, 0x00, 0x00,
                      0x02, 0x00, 0x00, 0x00 };
        p.mask    = { 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
                      0xFF, 0xFF, 0xFF, 0xFF };
        p.payload = { 0x01, 0x00, 0x00, 0x00 };  // Constant = 1
        p.payloadOffset = 6;
        m_patches.push_back(std::move(p));
    }

    // ── Patch 3: Disable hardcoded aspect-ratio guard ─────────────────────
    // The GS is initialised with a fixed scissor rectangle matching 4:3.
    // After the GS wrapper is in place, we NOP the scissor-write so our
    // Vulkan backend can set a proper widescreen viewport.
    //   44 00 00 28 → SCISSOR register write (640×448 NTSC frame)
    //   NOP × 4
    {
        Patch p;
        p.name    = "Ultrawide_scissor_nop";
        p.pattern = { 0x44, 0x00, 0x00, 0x28 }; // SCISSOR_1 tag + 640×448
        p.mask    = { 0xFF, 0xFF, 0xFF, 0xFF };
        p.payload = { 0x90, 0x90, 0x90, 0x90 }; // NOP sled
        p.payloadOffset = 0;
        m_patches.push_back(std::move(p));
    }

    // ── Patch 4: Shadow map resolution boost ──────────────────────────────
    // DW3 renders shadows at 256×256. Change the TEX0 height field to 512.
    // Pattern: TEX0 write with height=256 (6-bit field = 0x08 → log2(256)=8)
    // Fix: 0x08 → 0x09 (log2(512)=9) in the TEX height field.
    {
        Patch p;
        p.name    = "ShadowMap_512";
        // TEX0 register value for 256×256: bits [30:35] = height exponent
        p.pattern = { 0x08, 0x00, 0x00, 0x00, 0x08 }; // simplified pattern
        p.mask    = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
        p.payload = { 0x09 };  // height exponent = 9 → 512px
        p.payloadOffset = 4;
        m_patches.push_back(std::move(p));
    }

    fprintf(stderr, "[PatchEngine] Registered %zu patches.\n", m_patches.size());
}

// ── findPattern ────────────────────────────────────────────────────────────
std::optional<uintptr_t> PatchEngine::findPattern(
    const std::vector<uint8_t>& pattern,
    const std::vector<uint8_t>& mask) const
{
    if (!m_rdram || pattern.empty()) return std::nullopt;
    size_t len = pattern.size();

    for (size_t i = 0; i + len <= m_rdramSize; ++i) {
        bool match = true;
        for (size_t j = 0; j < len; ++j) {
            if (mask[j] && m_rdram[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return std::nullopt;
}

// ── applyPatch ─────────────────────────────────────────────────────────────
bool PatchEngine::applyPatch(const std::string& name) {
    for (auto& p : m_patches) {
        if (p.name != name) continue;
        if (p.applied) {
            fprintf(stderr, "[PatchEngine] '%s' already applied at 0x%zX.\n",
                    name.c_str(), p.appliedAt);
            return true;
        }

        auto addr = findPattern(p.pattern, p.mask);
        if (!addr) {
            fprintf(stderr, "[PatchEngine] WARN: Pattern for '%s' not found.\n",
                    name.c_str());
            return false;
        }

        uintptr_t writeAddr = *addr + p.payloadOffset;
        if (writeAddr + p.payload.size() > m_rdramSize) {
            fprintf(stderr, "[PatchEngine] ERROR: Patch '%s' would write OOB.\n",
                    name.c_str());
            return false;
        }

        std::memcpy(m_rdram + writeAddr, p.payload.data(), p.payload.size());
        p.applied   = true;
        p.appliedAt = writeAddr;

        fprintf(stderr, "[PatchEngine] ✓ Applied '%s' at emulated offset 0x%zX.\n",
                name.c_str(), writeAddr);

        if (m_appliedCb) m_appliedCb(name, writeAddr);
        return true;
    }
    fprintf(stderr, "[PatchEngine] Unknown patch name: '%s'\n", name.c_str());
    return false;
}

// ── applyAll ──────────────────────────────────────────────────────────────
int PatchEngine::applyAll() {
    int count = 0;
    for (auto& p : m_patches) {
        if (applyPatch(p.name)) ++count;
    }
    fprintf(stderr, "[PatchEngine] %d / %zu patches applied.\n",
            count, m_patches.size());
    return count;
}

// ── addPatch ──────────────────────────────────────────────────────────────
void PatchEngine::addPatch(Patch p) {
    m_patches.push_back(std::move(p));
}

// ── writeBytes ─────────────────────────────────────────────────────────────
bool PatchEngine::writeBytes(uintptr_t ps2Addr, const uint8_t* data, size_t len) {
    if (!m_rdram || ps2Addr + len > m_rdramSize) return false;
    std::memcpy(m_rdram + ps2Addr, data, len);
    return true;
}

bool PatchEngine::writeU32LE(uintptr_t ps2Addr, uint32_t value) {
    return writeBytes(ps2Addr, reinterpret_cast<const uint8_t*>(&value), 4);
}

// ── printStatus ────────────────────────────────────────────────────────────
void PatchEngine::printStatus() const {
    fprintf(stderr, "=== PatchEngine Status ===\n");
    for (auto& p : m_patches) {
        fprintf(stderr, "  [%s] %-32s  %s\n",
            p.applied ? "✓" : " ",
            p.name.c_str(),
            p.applied ? ("@ 0x" + std::to_string(p.appliedAt)).c_str()
                      : "not applied");
    }
    fprintf(stderr, "==========================\n");
}
