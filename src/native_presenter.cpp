#include "fate/native_presenter.hpp"
#include "fate/guest_float_environment.hpp"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"

#define SDL_MAIN_HANDLED
#include <SDL.h>

#include <chrono>
#include <cstring>
#include <iostream>
#include <limits>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace fate {
namespace {
[[noreturn]] void sdl_error(const char* action) {
    throw std::runtime_error(std::string(action) + ": " + SDL_GetError());
}
struct VideoOwner {
    VideoOwner() {
        SDL_SetMainReady();
        if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) sdl_error("SDL video init");
    }
    ~VideoOwner() { SDL_QuitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS); }
};
struct ObserverOwner {
    EeScheduler& scheduler;
    ~ObserverOwner() { scheduler.setHostVblankObserver({}); }
};
int renderer_index(const char* name) {
    for (int i = 0; i < SDL_GetNumRenderDrivers(); ++i) {
        SDL_RendererInfo info{};
        if (SDL_GetRenderDriverInfo(i, &info) == 0 && info.name && std::strcmp(info.name, name) == 0) return i;
    }
    return -1;
}
SDL_Renderer* create_renderer(SDL_Window* window, HostRenderer requested, Uint32 sync_flag) {
    const char* name = requested == HostRenderer::Direct3D11 ? "direct3d11" :
        requested == HostRenderer::Direct3D12 ? "direct3d12" : "software";
    if (requested != HostRenderer::Auto) {
        const int index = renderer_index(name);
        if (index < 0) throw std::runtime_error(std::string("Requested SDL renderer unavailable: ") + name);
        return SDL_CreateRenderer(window, index, sync_flag);
    }
#if defined(_WIN32)
    const int d3d11 = renderer_index("direct3d11");
    if (d3d11 >= 0) {
        if (auto* renderer = SDL_CreateRenderer(window, d3d11, SDL_RENDERER_ACCELERATED | sync_flag)) return renderer;
        std::cerr << "[LIVE] direct3d11 unavailable; trying SDL fallback: " << SDL_GetError() << '\n';
    }
#endif
    if (auto* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | sync_flag)) return renderer;
    return SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE | sync_flag);
}
uint64_t verify_upload(SDL_Renderer* renderer, SDL_Texture* texture, const std::vector<uint8_t>& pixels,
                       uint32_t width, uint32_t height) {
    std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)> target(
        SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_TARGET,
                          static_cast<int>(width), static_cast<int>(height)), SDL_DestroyTexture);
    if (!target) sdl_error("Create upload verification target");
    auto* previous = SDL_GetRenderTarget(renderer);
    if (SDL_SetRenderTarget(renderer, target.get()) != 0) sdl_error("Select upload verification target");
    if (SDL_RenderCopy(renderer, texture, nullptr, nullptr) != 0) sdl_error("Draw upload verification target");
    std::vector<uint8_t> actual(pixels.size());
    if (SDL_RenderReadPixels(renderer, nullptr, SDL_PIXELFORMAT_RGBA32, actual.data(), static_cast<int>(width * 4u)) != 0)
        sdl_error("Read uploaded GS pixels");
    if (SDL_SetRenderTarget(renderer, previous) != 0) sdl_error("Restore window render target");
    if (actual != pixels) throw std::runtime_error("GS texture GPU readback differs from source RGBA bytes");
    return static_cast<uint64_t>(width) * height;
}
}

LiveExit run_native_live(PS2Runtime& runtime, unsigned seconds, HostVSync vsync, PresenterReport* report,
                         const PresenterOptions& options) {
    PresenterReport state;
    state.requested_vsync = vsync;
    if (report) *report = state;
    VideoOwner video;
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window(
        SDL_CreateWindow(options.diagnostic_title ? options.diagnostic_title : "DW3 nativo - esperando imagen del GS", SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED, 960, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE), SDL_DestroyWindow);
    if (!window) sdl_error("Create native window");
    const Uint32 sync_flag = vsync == HostVSync::On ? SDL_RENDERER_PRESENTVSYNC : 0u;
    std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> renderer(
        create_renderer(window.get(), options.renderer, sync_flag), SDL_DestroyRenderer);
    if (!renderer) sdl_error("Create native presenter");
    // Apply the explicit choice after creation: SDL_RENDER_VSYNC can override
    // creation flags. Only the host presenter changes; guest VBLANK remains owned
    // by the scheduler. SDL can simulate the requested pacing on some backends.
    if (SDL_RenderSetVSync(renderer.get(), vsync == HostVSync::On ? 1 : 0) != 0)
        sdl_error("Set native presenter VSync");
    SDL_RendererInfo renderer_info{};
    if (SDL_GetRendererInfo(renderer.get(), &renderer_info) != 0) sdl_error("Query native presenter");
    state.sdl_vsync_enabled = (renderer_info.flags & SDL_RENDERER_PRESENTVSYNC) != 0;
    state.software_renderer = (renderer_info.flags & SDL_RENDERER_SOFTWARE) != 0;
    state.renderer = renderer_info.name ? renderer_info.name : "unknown";
    if (state.sdl_vsync_enabled != (vsync == HostVSync::On))
        throw std::runtime_error("SDL did not apply the requested presenter VSync mode");
    if (report) *report = state;
    std::cout << std::dec << "[LIVE] presenter=" << renderer_info.name
              << " vsync_requested=" << (vsync == HostVSync::On ? "on" : "off")
              << " sdl_vsync=" << (state.sdl_vsync_enabled ? "on" : "off")
              << " physical_sync=unverified guest_timing=unchanged"
              << " source=runtime-GS observer=executor-vblank input=not-connected\n";
    std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)> texture(nullptr, SDL_DestroyTexture);
    std::vector<uint8_t> pixels;
    uint32_t texture_width = 0, texture_height = 0;
    bool had_frame = false;
    uint64_t presentations = 0, observations = 0;
    LiveExit reason = LiveExit::GuestStopped;
    const auto started = std::chrono::steady_clock::now();
    auto& scheduler = runtime.eeScheduler();
    ObserverOwner observer{scheduler};

    const auto record_gs_state = [&](bool has_frame) {
        const auto& gs = runtime.memory().gs();
        const char* frame_state = has_frame ? "frame-ready" : !(gs.pmode & 3u) ? "display-disabled" : "gs-no-frame";
        const bool changed = state.gs_frame_state != frame_state || state.pmode != gs.pmode ||
            state.dispfb1 != gs.dispfb1 || state.display1 != gs.display1 ||
            state.dispfb2 != gs.dispfb2 || state.display2 != gs.display2;
        state.gs_frame_state = frame_state;
        state.pmode = gs.pmode; state.dispfb1 = gs.dispfb1; state.display1 = gs.display1;
        state.dispfb2 = gs.dispfb2; state.display2 = gs.display2;
        if (changed) {
            std::cout << "[LIVE:GS] state=" << frame_state << std::hex << " pmode=0x" << state.pmode
                      << " dispfb1=0x" << state.dispfb1 << " display1=0x" << state.display1
                      << " dispfb2=0x" << state.dispfb2 << " display2=0x" << state.display2 << std::dec << '\n';
        }
    };

    const auto present = [&] {
        SDL_Event event{};
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT ||
                (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE)) {
                reason = LiveExit::WindowClosed;
                runtime.requestStop();
            }
        }
        if (reason != LiveExit::GuestStopped) return;
        if (seconds != 0 && std::chrono::steady_clock::now() - started >= std::chrono::seconds(seconds)) {
            reason = LiveExit::Deadline;
            runtime.requestStop();
            return;
        }

        // The GS registers and VRAM are read on the same executor that writes
        // them. No UI worker reads mutable CPU/GS state and no guest state is reset.
        runtime.gs().latchHostPresentationFrame();
        uint32_t width = 0, height = 0, display = 0, source = 0;
        bool preferred = false;
        const bool has_frame = runtime.gs().copyLatchedHostPresentationFrame(
            pixels, width, height, &display, &source, &preferred);
        record_gs_state(has_frame);
        ++observations;
        if (SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255) != 0 ||
            SDL_RenderClear(renderer.get()) != 0) sdl_error("Clear native window");
        if (has_frame) {
            if (width == 0 || height == 0 || width > 4096 || height > 4096 ||
                pixels.size() != static_cast<size_t>(width) * height * 4u)
                throw std::runtime_error("Invalid GS presentation dimensions/buffer");
            if (!texture || texture_width != width || texture_height != height) {
                texture.reset(SDL_CreateTexture(renderer.get(), SDL_PIXELFORMAT_RGBA32,
                    SDL_TEXTUREACCESS_STREAMING, static_cast<int>(width), static_cast<int>(height)));
                if (!texture) sdl_error("Create GS texture");
                if (SDL_SetTextureBlendMode(texture.get(), SDL_BLENDMODE_NONE) != 0) sdl_error("Set GS texture blend");
                texture_width = width;
                texture_height = height;
                std::cout << std::dec << "[LIVE] GS dimensions=" << width << 'x' << height
                          << " display_fbp=" << display << " source_fbp=" << source
                          << " preferred=" << preferred << '\n';
            }
            if (SDL_UpdateTexture(texture.get(), nullptr, pixels.data(), static_cast<int>(width * 4u)) != 0)
                sdl_error("Upload GS texture");
            if (options.verify_first_upload && state.verified_upload_pixels == 0) {
                state.verified_upload_pixels = verify_upload(renderer.get(), texture.get(), pixels, width, height);
                std::cout << "[LIVE] GS texture readback MATCH pixels=" << state.verified_upload_pixels << '\n';
            }
            int output_width = 0, output_height = 0;
            if (SDL_GetRendererOutputSize(renderer.get(), &output_width, &output_height) != 0)
                sdl_error("Query native window dimensions");
            // Preserve source aspect; black bars belong to the host, not the GS.
            SDL_Rect dest{0, 0, output_width, output_height};
            if (static_cast<int64_t>(output_width) * height > static_cast<int64_t>(output_height) * width) {
                dest.w = static_cast<int>(static_cast<int64_t>(output_height) * width / height);
                dest.x = (output_width - dest.w) / 2;
            } else {
                dest.h = static_cast<int>(static_cast<int64_t>(output_width) * height / width);
                dest.y = (output_height - dest.h) / 2;
            }
            if (SDL_RenderCopy(renderer.get(), texture.get(), nullptr, &dest) != 0) sdl_error("Present GS texture");
            ++presentations;
        }
        if (has_frame != had_frame || observations == 1u) {
            std::cout << std::dec << "[LIVE] GS frame=" << (has_frame ? "available" : "unavailable") << '\n';
            SDL_SetWindowTitle(window.get(), options.diagnostic_title ? options.diagnostic_title :
                has_frame ? "DW3 nativo - salida real del GS" : "DW3 nativo - sin imagen del GS (arranque pendiente)");
            had_frame = has_frame;
        }
        SDL_RenderPresent(renderer.get());
    };
    present();
    scheduler.setHostVblankObserver(present);
    const GuestFloatEnvironment guest_float_environment;
    scheduler.run();
    state.observations = observations;
    state.presentations = presentations;
    if (report) *report = state;
    std::cout << std::dec << "[LIVE] stopped reason=" << (reason == LiveExit::WindowClosed ? "window-closed" :
        reason == LiveExit::Deadline ? "deadline" : "guest-stopped")
        << " observations=" << observations << " presentations=" << presentations
        << " boot_verified=false\n";
    return reason;
}
}
