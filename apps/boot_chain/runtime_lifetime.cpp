#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>

// This fixture executes no guest function. An empty catalog makes any guest
// dispatch unresolved; it never supplies a fake successful implementation.
extern const std::uint32_t g_ps2RecompiledFunctionTableBase = 0u;
extern const std::uint32_t g_ps2RecompiledFunctionTableEnd = 0u;
extern const std::uint32_t g_ps2RecompiledFunctionTableSlotCount = 0u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[1]{nullptr};
extern "C" void hle_sceGsIsFinished(uint8_t*, R5900Context*, PS2Runtime*);

int main() {
    try {
        auto runtime = std::make_unique<PS2Runtime>();
        if (reinterpret_cast<std::uintptr_t>(runtime.get()) % alignof(PS2Runtime) != 0u)
            throw std::runtime_error("Runtime allocation alignment failed");
        if (!runtime->memory().initialize() || !runtime->syncCoreSubsystems())
            throw std::runtime_error("Runtime subsystem binding failed");
        auto* ram = runtime->memory().getRDRAM();
        if (!ram) throw std::runtime_error("Runtime RAM missing");
        auto& ctx = runtime->cpu();
        ctx.pc = 0x00100008u;
        const std::uint64_t sp[2]{0x80000u, 0u};
        std::memcpy(&ctx.r[29], sp, sizeof(sp));
        runtime->eeScheduler().reset(ram, ctx);
        bool barrier_seen = false;
        try {
            hle_sceGsIsFinished(ram, &ctx, runtime.get());
        } catch (const std::runtime_error& error) {
            barrier_seen = std::string(error.what()).find("Unsupported HLE: hle_sceGsIsFinished") != std::string::npos;
        }
        if (!barrier_seen) throw std::runtime_error("Pending HLE returned instead of diagnostic stop");
        const bool due = runtime->eeCheckpointDue();
        runtime->requestStop();
        if (!runtime->eeCheckpointDue())
            throw std::runtime_error("Real checkpoint failed to observe scheduler stop");
        std::cout << "Constructed PS2Runtime size=" << sizeof(PS2Runtime)
                  << " alignment=" << alignof(PS2Runtime)
                  << " RAM bound; actual checkpoint invoked; due=" << due
                  << "; stop observed=true\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
