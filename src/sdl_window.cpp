// sdl_window.cpp — SDL2 Window + DualShock 2 Input Translator
// Dynasty Warriors 3 XL — PC Port
#include "sdl_window.h"
#include <cstdio>
#include <stdexcept>

// ── Keyboard → DS2 mapping table ─────────────────────────────────────────
// Customize these to your preference. Using WASD + common fighting-game layout.
static constexpr struct { SDL_Keycode key; uint16_t btn; } kKeyMap[] = {
    // D-Pad
    { SDLK_UP,       DS2::DPAD_UP    },
    { SDLK_DOWN,     DS2::DPAD_DOWN  },
    { SDLK_LEFT,     DS2::DPAD_LEFT  },
    { SDLK_RIGHT,    DS2::DPAD_RIGHT },
    { SDLK_w,        DS2::DPAD_UP    },
    { SDLK_s,        DS2::DPAD_DOWN  },
    { SDLK_a,        DS2::DPAD_LEFT  },
    { SDLK_d,        DS2::DPAD_RIGHT },
    // Face buttons
    { SDLK_j,        DS2::CROSS      },
    { SDLK_k,        DS2::CIRCLE     },
    { SDLK_u,        DS2::SQUARE     },
    { SDLK_i,        DS2::TRIANGLE   },
    // Shoulder
    { SDLK_q,        DS2::L1         },
    { SDLK_e,        DS2::R1         },
    { SDLK_1,        DS2::L2         },
    { SDLK_3,        DS2::R2         },
    // System
    { SDLK_RETURN,   DS2::START      },
    { SDLK_BACKSPACE,DS2::SELECT     },
};

// ── Xbox controller → DS2 mapping ─────────────────────────────────────────
static constexpr struct { SDL_GameControllerButton btn; uint16_t ds2; } kCtrlMap[] = {
    { SDL_CONTROLLER_BUTTON_A,             DS2::CROSS     },
    { SDL_CONTROLLER_BUTTON_B,             DS2::CIRCLE    },
    { SDL_CONTROLLER_BUTTON_X,             DS2::SQUARE    },
    { SDL_CONTROLLER_BUTTON_Y,             DS2::TRIANGLE  },
    { SDL_CONTROLLER_BUTTON_LEFTSHOULDER,  DS2::L1        },
    { SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, DS2::R1        },
    { SDL_CONTROLLER_BUTTON_BACK,          DS2::SELECT    },
    { SDL_CONTROLLER_BUTTON_START,         DS2::START     },
    { SDL_CONTROLLER_BUTTON_LEFTSTICK,     DS2::L3        },
    { SDL_CONTROLLER_BUTTON_RIGHTSTICK,    DS2::R3        },
    { SDL_CONTROLLER_BUTTON_DPAD_UP,       DS2::DPAD_UP   },
    { SDL_CONTROLLER_BUTTON_DPAD_DOWN,     DS2::DPAD_DOWN },
    { SDL_CONTROLLER_BUTTON_DPAD_LEFT,     DS2::DPAD_LEFT },
    { SDL_CONTROLLER_BUTTON_DPAD_RIGHT,    DS2::DPAD_RIGHT},
};

// ── Constructor ───────────────────────────────────────────────────────────
SDLWindow::SDLWindow(int width, int height, const std::string& title) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        throw std::runtime_error(std::string("SDL_Init failed: ") + SDL_GetError());
    }

    m_window = SDL_CreateWindow(
        title.c_str(),
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        width, height,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL
    );
    if (!m_window) {
        throw std::runtime_error(std::string("SDL_CreateWindow failed: ") + SDL_GetError());
    }

    // Optional: create an OpenGL context (swap for Vulkan surface creation later)
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 6);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    m_glCtx = SDL_GL_CreateContext(m_window);

    // Open the first available game controller
    for (int i = 0; i < SDL_NumJoysticks(); ++i) {
        if (SDL_IsGameController(i)) {
            m_ctrl = SDL_GameControllerOpen(i);
            if (m_ctrl) {
                fprintf(stderr, "[SDL] Opened controller: %s\n",
                        SDL_GameControllerName(m_ctrl));
                break;
            }
        }
    }

    // DS2 starts with all buttons released (active-low → all bits set)
    m_pad.buttons = 0xFFFF;
}

// ── Destructor ─────────────────────────────────────────────────────────────
SDLWindow::~SDLWindow() {
    if (m_ctrl)   SDL_GameControllerClose(m_ctrl);
    if (m_glCtx)  SDL_GL_DeleteContext(m_glCtx);
    if (m_window) SDL_DestroyWindow(m_window);
    SDL_Quit();
}

// ── pollEvents ─────────────────────────────────────────────────────────────
bool SDLWindow::pollEvents() {
    SDL_Event ev;
    while (SDL_PollEvent(&ev)) {
        switch (ev.type) {
        case SDL_QUIT:
            m_quit = true;
            if (m_quitCb) m_quitCb();
            break;

        case SDL_KEYDOWN:
            if (ev.key.keysym.sym == SDLK_F11) {
                // Toggle fullscreen
                uint32_t flags = SDL_GetWindowFlags(m_window);
                setFullscreen(!(flags & SDL_WINDOW_FULLSCREEN_DESKTOP));
            }
            handleKeyDown(ev.key.keysym.sym);
            break;

        case SDL_KEYUP:
            handleKeyUp(ev.key.keysym.sym);
            break;

        case SDL_CONTROLLERBUTTONDOWN:
            handleControllerButton(
                static_cast<SDL_GameControllerButton>(ev.cbutton.button), true);
            break;

        case SDL_CONTROLLERBUTTONUP:
            handleControllerButton(
                static_cast<SDL_GameControllerButton>(ev.cbutton.button), false);
            break;

        case SDL_CONTROLLERAXISMOTION:
            handleControllerAxis(
                static_cast<SDL_GameControllerAxis>(ev.caxis.axis), ev.caxis.value);
            break;

        case SDL_CONTROLLERDEVICEADDED:
            if (!m_ctrl) {
                m_ctrl = SDL_GameControllerOpen(ev.cdevice.which);
                fprintf(stderr, "[SDL] Controller connected: %s\n",
                        SDL_GameControllerName(m_ctrl));
            }
            break;

        case SDL_CONTROLLERDEVICEREMOVED:
            if (m_ctrl) {
                SDL_GameControllerClose(m_ctrl);
                m_ctrl = nullptr;
                fprintf(stderr, "[SDL] Controller disconnected.\n");
            }
            break;

        default: break;
        }
    }
    return !m_quit;
}

// ── Key handlers ──────────────────────────────────────────────────────────
void SDLWindow::handleKeyDown(SDL_Keycode key) {
    for (auto& m : kKeyMap) {
        if (m.key == key) { m_pad.buttons = DS2::press(m_pad.buttons, m.btn); return; }
    }
}
void SDLWindow::handleKeyUp(SDL_Keycode key) {
    for (auto& m : kKeyMap) {
        if (m.key == key) { m_pad.buttons = DS2::release(m_pad.buttons, m.btn); return; }
    }
}

// ── Controller handlers ───────────────────────────────────────────────────
void SDLWindow::handleControllerButton(SDL_GameControllerButton btn, bool pressed) {
    for (auto& m : kCtrlMap) {
        if (m.btn == btn) {
            m_pad.buttons = pressed
                ? DS2::press(m_pad.buttons, m.ds2)
                : DS2::release(m_pad.buttons, m.ds2);
            return;
        }
    }
}

void SDLWindow::handleControllerAxis(SDL_GameControllerAxis axis, int16_t value) {
    // Map SDL axis range [-32768, 32767] to PS2 range [0, 255] (center = 0x80)
    auto toPS2 = [](int16_t v) -> uint8_t {
        return static_cast<uint8_t>((static_cast<int32_t>(v) + 32768) >> 8);
    };

    switch (axis) {
    case SDL_CONTROLLER_AXIS_LEFTX:         m_pad.analog.lx = toPS2(value); break;
    case SDL_CONTROLLER_AXIS_LEFTY:         m_pad.analog.ly = toPS2(value); break;
    case SDL_CONTROLLER_AXIS_RIGHTX:        m_pad.analog.rx = toPS2(value); break;
    case SDL_CONTROLLER_AXIS_RIGHTY:        m_pad.analog.ry = toPS2(value); break;
    // Triggers → L2/R2 analog pressure
    case SDL_CONTROLLER_AXIS_TRIGGERLEFT:
        m_pad.pressures[6] = static_cast<uint8_t>(value >> 7); // L2 pressure
        if (value > 4096) m_pad.buttons = DS2::press(m_pad.buttons, DS2::L2);
        else              m_pad.buttons = DS2::release(m_pad.buttons, DS2::L2);
        break;
    case SDL_CONTROLLER_AXIS_TRIGGERRIGHT:
        m_pad.pressures[7] = static_cast<uint8_t>(value >> 7); // R2 pressure
        if (value > 4096) m_pad.buttons = DS2::press(m_pad.buttons, DS2::R2);
        else              m_pad.buttons = DS2::release(m_pad.buttons, DS2::R2);
        break;
    default: break;
    }
}

// ── Window utilities ───────────────────────────────────────────────────────
void SDLWindow::setFullscreen(bool fs) {
    SDL_SetWindowFullscreen(m_window,
        fs ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
}

void SDLWindow::resize(int w, int h) {
    SDL_SetWindowSize(m_window, w, h);
}
