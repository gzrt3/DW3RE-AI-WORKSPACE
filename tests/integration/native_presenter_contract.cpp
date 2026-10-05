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
#include <string_view>

static void require(bool value, const char* message) {
    if (!value) throw std::runtime_error(message);
}

int main(int argc, char** argv) {
    try {
        const std::string_view driver = argc >= 2 ? argv[1] : "dummy";
        const bool observe = argc == 3 && std::string_view(argv[2]) == "--observe";
        require(argc <= 3 && (argc != 3 || observe) && (driver == "dummy" || driver == "software" || driver == "auto" || driver == "direct3d11" || driver == "direct3d12"),
            "usage: presenter_contract [dummy|software|auto|direct3d11|direct3d12] [--observe]");
        fate::PresenterOptions options;
        options.verify_first_upload = true;
        options.diagnostic_title = "Diagnostico GS/GPU - patron sintetico, no es el juego";
        if (driver == "direct3d11") options.renderer = fate::HostRenderer::Direct3D11;
        if (driver == "direct3d12") options.renderer = fate::HostRenderer::Direct3D12;
        if (driver == "software") options.renderer = fate::HostRenderer::Software;
        // Synthetic host integration contracts, never original-game evidence.
        const bool software = driver == "dummy" || driver == "software";
        require(SDL_setenv("SDL_VIDEODRIVER", software ? "dummy" : "windows", 1) == 0, "SDL video setup");
        for (bool display_enabled : {false, true}) {
          for (const auto vsync : {fate::HostVSync::Off, fate::HostVSync::On}) {
            // Opposite global hints must not override the explicit host choice.
            require(SDL_SetHintWithPriority(SDL_HINT_RENDER_VSYNC,
                vsync == fate::HostVSync::On ? "0" : "1", SDL_HINT_OVERRIDE) == SDL_TRUE, "vsync hint setup");
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
                for (uint32_t y = 0; y < 64; ++y) {
                    for (uint32_t x = 0; x < 64; ++x) {
                        const uint32_t pixel = ((0x12u + x * 3 + y * 7) & 255u) |
                            (((0x34u + x * 5 + y * 11) & 255u) << 8) |
                            (((0x56u + x * 13 + y * 17) & 255u) << 16) | (((x * 17 + y * 31) & 255u) << 24);
                        rt->gs().WriteVram(0, 0, 1, x, y, pixel);
                    }
                }
                mem.write64(0x12000000, 1); // PMODE.EN1
                mem.write64(0x12000070, 1ull << 9); // DISPFB1.FBW=1
                mem.write64(0x12000080, (63ull << 32) | (63ull << 44)); // DISPLAY1 64x64
            }
            fate::PresenterReport presenter;
            require(fate::run_native_live(*rt, observe && display_enabled ? 10u : 1u, vsync, &presenter, options) == fate::LiveExit::Deadline, "deadline lost");
            require(presenter.requested_vsync == vsync &&
                presenter.sdl_vsync_enabled == (vsync == fate::HostVSync::On), "explicit SDL vsync choice lost");
            require(software ? presenter.software_renderer :
                !presenter.software_renderer && presenter.renderer == (driver == "auto" ? "direct3d11" : driver), "requested renderer or fallback not reported");
            require(presenter.verified_upload_pixels == (display_enabled ? 4096u : 0u), "GS texture readback missing or fabricated");
            require(presenter.gs_frame_state == (display_enabled ? "frame-ready" : "display-disabled") &&
                presenter.pmode == (display_enabled ? 1u : 0u), "GS no-frame diagnostic lost");
            require(presenter.observations > 1 && (presenter.presentations > 0) == display_enabled,
                "VBLANK observation or GS presentation lost");
            require(mem.read32(0x70000) == marker, "EE memory reset by presenter");
            uint32_t readback = 0;
            require(rt->readIopMemory(iop_marker, &readback, sizeof(readback)) && readback == marker,
                "prepared IOP memory reset by presenter");
            require(_mm_cvtsi128_si32(ctx.r[29]) == 0x78900 && _mm_cvtsi128_si32(ctx.r[4]) == 0x1234,
                "prepared EE stack/arguments reset by presenter");
            const auto snapshot = rt->eeScheduler().snapshot();
            require(snapshot.eventFlags.size() == 1 && snapshot.eventFlags[0].id == event &&
                snapshot.eventFlags[0].bits == 0x123, "prepared scheduler objects reset by presenter");
            const auto guest_tick = rt->eeScheduler().currentVSyncTick();
            require(guest_tick > 0 && mem.gs().vsyncTick.load() == guest_tick,
                "guest VBLANK stopped or GS tick diverged");
            require(((mem.gs().csr.load() >> 13) & 1u) == (guest_tick & 1u), "guest field parity lost");
            std::vector<uint8_t> pixels;
            uint32_t width = 0, height = 0;
            const bool frame = rt->gs().copyLatchedHostPresentationFrame(pixels, width, height);
            require(frame == display_enabled, "missing GS frame was fabricated or real one was lost");
            if (frame) require(!pixels.empty() && pixels[0] == 0x12 && pixels[1] == 0x34 && pixels[2] == 0x56,
                "GS source pixel mismatch");
            if (frame) for (uint32_t y = 0; y < height; ++y) for (uint32_t x = 0; x < width; ++x) {
                const size_t offset = (static_cast<size_t>(y) * width + x) * 4;
                require(pixels[offset] == ((0x12u + x * 3 + y * 7) & 255u) &&
                    pixels[offset+1] == ((0x34u + x * 5 + y * 11) & 255u) &&
                    pixels[offset+2] == ((0x56u + x * 13 + y * 17) & 255u) && pixels[offset+3] == 255u,
                    "GS row/column/color or opaque host-alpha conversion mismatch");
            }
            std::cout << "PASS prepared-state-preserved display_enabled=" << display_enabled
                      << " vsync=" << (vsync == fate::HostVSync::On ? "on" : "off")
                      << " renderer=" << presenter.renderer << " readback_pixels=" << presenter.verified_upload_pixels << '\n';
          }
        }
        SDL_ResetHint(SDL_HINT_RENDER_VSYNC);
        if (driver == "dummy") {
            auto rt = std::make_unique<PS2Runtime>();
            require(rt->memory().initialize(PS2_RAM_SIZE) && rt->syncCoreSubsystems(), "failure test runtime init");
            fate::PresenterOptions unavailable;
            unavailable.renderer = fate::HostRenderer::Direct3D11;
            bool rejected = false;
            try { (void)fate::run_native_live(*rt, 1, fate::HostVSync::Off, nullptr, unavailable); }
            catch (const std::runtime_error& error) {
                const std::string_view message(error.what());
                rejected = message.starts_with("Requested SDL renderer unavailable:") || message.starts_with("Create native presenter:");
            }
            require(rejected, "explicit unavailable renderer silently fell back");
            std::cout << "PASS explicit unavailable Direct3D11 rejected without fallback\n";
        }
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "FAIL " << error.what() << '\n';
        return 1;
    }
}
