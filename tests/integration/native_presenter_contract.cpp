#include "fate/native_presenter.hpp"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

static void require(bool value, const char* message) {
    if (!value) throw std::runtime_error(message);
}

int main() {
    try {
        // Synthetic host integration contracts, never original-game evidence.
        require(SDL_setenv("SDL_VIDEODRIVER", "dummy", 1) == 0, "dummy SDL setup");
        for (bool display_enabled : {false, true}) {
            auto rt = std::make_unique<PS2Runtime>();
            require(rt->memory().initialize(PS2_RAM_SIZE) && rt->syncCoreSubsystems(), "runtime init");
            auto& mem = rt->memory();
            const uint32_t marker = 0x13579BDF;
            mem.write32(0x70000, marker);
            const uint32_t iop_marker = rt->allocateIopMemory(16);
            require(iop_marker != 0 && rt->writeIopMemory(iop_marker, &marker, sizeof(marker)), "IOP marker setup");
            auto& ctx = rt->cpu();
            ctx.pc = 0;
            ctx.r[29] = _mm_set_epi64x(0, 0x78900);
            ctx.r[4] = _mm_set_epi64x(0, 0x1234);
            rt->eeScheduler().reset(mem.getRDRAM(), ctx);
            const int event = rt->eeScheduler().createEventFlag(0x123, 0, 0);
            require(event >= 0, "event setup");
            if (display_enabled) {
                // Known VRAM bytes exercise the actual GS + SDL upload path.
                auto* vram = mem.getGSVRAM();
                for (size_t i = 0; i < PS2_GS_VRAM_SIZE; i += 4) {
                    vram[i] = 0x12; vram[i + 1] = 0x34; vram[i + 2] = 0x56; vram[i + 3] = 0x80;
                }
                mem.write64(0x12000000, 1); // PMODE.EN1
                mem.write64(0x12000070, 1ull << 9); // DISPFB1.FBW=1
                mem.write64(0x12000080, (63ull << 32) | (31ull << 44)); // DISPLAY1 64x32
            }
            require(fate::run_native_live(*rt, 1) == fate::LiveExit::Deadline, "deadline lost");
            require(mem.read32(0x70000) == marker, "EE memory reset by presenter");
            uint32_t readback = 0;
            require(rt->readIopMemory(iop_marker, &readback, sizeof(readback)) && readback == marker,
                "prepared IOP memory reset by presenter");
            require(_mm_cvtsi128_si32(ctx.r[29]) == 0x78900 && _mm_cvtsi128_si32(ctx.r[4]) == 0x1234,
                "prepared EE stack/arguments reset by presenter");
            const auto snapshot = rt->eeScheduler().snapshot();
            require(snapshot.eventFlags.size() == 1 && snapshot.eventFlags[0].id == event &&
                snapshot.eventFlags[0].bits == 0x123, "prepared scheduler objects reset by presenter");
            std::vector<uint8_t> pixels;
            uint32_t width = 0, height = 0;
            const bool frame = rt->gs().copyLatchedHostPresentationFrame(pixels, width, height);
            require(frame == display_enabled, "missing GS frame was fabricated or real one was lost");
            if (frame) require(!pixels.empty() && pixels[0] == 0x12 && pixels[1] == 0x34 && pixels[2] == 0x56,
                "GS source pixel mismatch");
            std::cout << "PASS prepared-state-preserved display_enabled=" << display_enabled << '\n';
        }
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "FAIL " << error.what() << '\n';
        return 1;
    }
}
