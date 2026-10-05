#include "fate/native_presenter.hpp"
#include "fate/guest_float_environment.hpp"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"

#define SDL_MAIN_HANDLED
#include <SDL.h>

#include <chrono>
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
}

LiveExit run_native_live(PS2Runtime& runtime, unsigned seconds) {
    VideoOwner video;
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window(
        SDL_CreateWindow("DW3 nativo - esperando imagen del GS", SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED, 960, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE), SDL_DestroyWindow);
    if (!window) sdl_error("Create native window");
    std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> renderer(
        SDL_CreateRenderer(window.get(), -1, SDL_RENDERER_ACCELERATED), SDL_DestroyRenderer);
    if (!renderer) {
        renderer.reset(SDL_CreateRenderer(window.get(), -1, SDL_RENDERER_SOFTWARE));
    }
    if (!renderer) sdl_error("Create native presenter");
    SDL_RendererInfo renderer_info{};
    if (SDL_GetRendererInfo(renderer.get(), &renderer_info) != 0) sdl_error("Query native presenter");
    std::cout << std::dec << "[LIVE] presenter=" << renderer_info.name
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
            SDL_SetWindowTitle(window.get(), has_frame ? "DW3 nativo - salida real del GS"
                                                      : "DW3 nativo - sin imagen del GS (arranque pendiente)");
            had_frame = has_frame;
        }
        SDL_RenderPresent(renderer.get());
    };
    present();
    scheduler.setHostVblankObserver(present);
    const GuestFloatEnvironment guest_float_environment;
    scheduler.run();
    std::cout << std::dec << "[LIVE] stopped reason=" << (reason == LiveExit::WindowClosed ? "window-closed" :
        reason == LiveExit::Deadline ? "deadline" : "guest-stopped")
        << " observations=" << observations << " presentations=" << presentations
        << " boot_verified=false\n";
    return reason;
}
}
