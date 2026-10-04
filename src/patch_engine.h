// patch_engine.h — Runtime Memory Patcher (60 FPS / Ultrawide / QoL)
// Dynasty Warriors 3 XL — PC Port (Phase 3 Bridge)
//
// Usage:
//   PatchEngine pe(rdram_ptr, rdram_size);
//   pe.applyAll();
//
// All patches are byte-pattern based (no hardcoded offsets) so they survive
// recompiler output rearrangements.

#pragma once
#include <cstdint>
#include <vector>
#include <string>
#include <optional>
#include <functional>

// ── A single patch descriptor ─────────────────────────────────────────────
struct Patch {
    std::string  name;           // Human-readable label (for logging)
    std::vector<uint8_t> pattern;  // Byte sequence to search for (can include wildcards)
    std::vector<uint8_t> mask;     // 0xFF = must match; 0x00 = wildcard
    std::vector<uint8_t> payload;  // Replacement bytes (written at match offset)
    size_t       payloadOffset = 0; // Offset within match to start writing payload
    bool         applied       = false;
    uintptr_t    appliedAt     = 0;
};

// ─────────────────────────────────────────────────────────────────────────────
class PatchEngine {
public:
    // rdram: pointer to the emulated PS2 RAM region.
    // rdramSize: size in bytes (typically 32 MiB for PS2).
    PatchEngine(uint8_t* rdram, size_t rdramSize);

    // Register all built-in patches (60 FPS, ultrawide, etc.).
    void registerBuiltinPatches();

    // Apply all registered patches. Returns number of patches successfully applied.
    int applyAll();

    // Apply a single named patch. Returns true on success.
    bool applyPatch(const std::string& name);

    // Add a custom patch at runtime.
    void addPatch(Patch p);

    // Print status of all patches.
    void printStatus() const;

    // Callback invoked after each successful patch (name, address).
    using PatchAppliedCb = std::function<void(const std::string&, uintptr_t)>;
    void setAppliedCallback(PatchAppliedCb cb) { m_appliedCb = std::move(cb); }

    // ── Helper: write raw bytes to emulated RAM (bounds-checked) ─────────
    bool writeBytes(uintptr_t ps2Addr, const uint8_t* data, size_t len);
    bool writeU32LE(uintptr_t ps2Addr, uint32_t value);

private:
    std::optional<uintptr_t> findPattern(const std::vector<uint8_t>& pattern,
                                          const std::vector<uint8_t>& mask) const;

    uint8_t* m_rdram     = nullptr;
    size_t   m_rdramSize = 0;

    std::vector<Patch> m_patches;
    PatchAppliedCb     m_appliedCb;
};
