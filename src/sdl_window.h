// sdl_window.h — SDL2 Window Manager + DualShock 2 Input Translator
// Dynasty Warriors 3 XL — PC Port (Phase 3 Bridge)
//
// Architecture:
//   SDL2 keyboard/gamepad events → PS2 DualShock 2 button bitmask
//   (same layout the original scePadRead() used to fill)
//
// Integration: Call SDLWindow::pollEvents() from your main game loop.
// The ds2State field is always up to date and can be passed to whatever
// stub replaces scePadRead in your HLE layer.

#pragma once
#include <cstdint>
#include <string>
#include <functional>
#include <SDL.h>

// ── DualShock 2 button bitmask (matching PS2 SDK scePadRead layout) ────────
// Bit = 0 means PRESSED (active-low, as the original hardware).
namespace DS2 {
    static constexpr uint16_t SELECT    = 1 << 0;
    static constexpr uint16_t L3        = 1 << 1;
    static constexpr uint16_t R3        = 1 << 2;
    static constexpr uint16_t START     = 1 << 3;
    static constexpr uint16_t DPAD_UP   = 1 << 4;
    static constexpr uint16_t DPAD_RIGHT= 1 << 5;
    static constexpr uint16_t DPAD_DOWN = 1 << 6;
    static constexpr uint16_t DPAD_LEFT = 1 << 7;
    static constexpr uint16_t L2        = 1 << 8;
    static constexpr uint16_t R2        = 1 << 9;
    static constexpr uint16_t L1        = 1 << 10;
    static constexpr uint16_t R1        = 1 << 11;
    static constexpr uint16_t TRIANGLE  = 1 << 12;
    static constexpr uint16_t CIRCLE    = 1 << 13;
    static constexpr uint16_t CROSS     = 1 << 14;
    static constexpr uint16_t SQUARE    = 1 << 15;

    // Active-low helper: returns the mask with the given button cleared (pressed).
    inline uint16_t press(uint16_t state, uint16_t btn) { return state & ~btn; }
    inline uint16_t release(uint16_t state, uint16_t btn) { return state | btn; }
}

// ── Analog axis state (0x80 = center) ─────────────────────────────────────
struct DS2Analog {
    uint8_t lx = 0x80, ly = 0x80; // Left stick
    uint8_t rx = 0x80, ry = 0x80; // Right stick
};

// ── Full pad state (mirrors the 18-byte scePadRead buffer) ────────────────
struct DS2PadState {
    uint16_t  buttons = 0xFFFF; // All released (active-low bitmask)
    DS2Analog analog;
    uint8_t   pressures[12] = {}; // Pressure-sensitive values (0–255)
};

// ─────────────────────────────────────────────────────────────────────────────
class SDLWindow {
public:
    // Callback invoked when the OS signals quit (close button / Alt+F4).
    using QuitCallback = std::function<void()>;

    // width/height: initial window resolution.
    // title: window caption.
    explicit SDLWindow(int width = 1920, int height = 1080,
                       const std::string& title = "Dynasty Warriors 3 XL — PC Port");
    ~SDLWindow();

    // Non-copyable
    SDLWindow(const SDLWindow&) = delete;
    SDLWindow& operator=(const SDLWindow&) = delete;

    // Call once per game tick. Returns false when the user requested quit.
    bool pollEvents();

    // Read the current pad state (thread-safe copy).
    DS2PadState getPadState() const { return m_pad; }

    // Direct access if you want to pass a pointer to the HLE layer.
    const DS2PadState* padStatePtr() const { return &m_pad; }

    SDL_Window*   window()   const { return m_window; }
    SDL_GLContext glContext() const { return m_glCtx;  }

    void setQuitCallback(QuitCallback cb) { m_quitCb = std::move(cb); }

    // Resize / toggle fullscreen
    void setFullscreen(bool fs);
    void resize(int w, int h);

private:
    void handleKeyDown(SDL_Keycode key);
    void handleKeyUp(SDL_Keycode key);
    void handleControllerButton(SDL_GameControllerButton btn, bool pressed);
    void handleControllerAxis(SDL_GameControllerAxis axis, int16_t value);

    SDL_Window*          m_window   = nullptr;
    SDL_GLContext        m_glCtx    = nullptr;
    SDL_GameController*  m_ctrl     = nullptr;
    DS2PadState          m_pad;
    QuitCallback         m_quitCb;
    bool                 m_quit     = false;
};
