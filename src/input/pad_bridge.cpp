#include "fate/input/pad_bridge.hpp"
#include <iostream>
#include <cstring>
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

namespace fate {
namespace input {

PadBridge& PadBridge::get() {
    static PadBridge instance;
    return instance;
}

void PadBridge::initialize() {
    std::cout << "[Pad Bridge] Initialized. Ready for XInput / SDL2 routing.\n";
}

int PadBridge::scePadInit(int mode) {
    std::cout << "[Pad Bridge] scePadInit(mode=" << mode << ")\n";
    return 1;
}

int PadBridge::scePadPortOpen(int port, int slot, void* /*pAddr*/) {
    std::cout << "[Pad Bridge] scePadPortOpen(port=" << port << ", slot=" << slot << ")\n";
    return 1; // 1 means opened
}

int PadBridge::scePadRead(int /*port*/, int /*slot*/, void* rdata) {
    // Return mock data so the game doesn't hang waiting for input
    auto* pad = reinterpret_cast<scePadButtonStatus*>(rdata);
    pad->ok = 0; // 0 usually means OK in PS2 scePadRead (0 = success, other = error)
    pad->mode = 0x70; // 0x70 means DualShock2
    pad->btns = 0xFFFF; // All buttons released (active low)
    pad->rjoy_h = 0x7F; // Center
    pad->rjoy_v = 0x7F;
    pad->ljoy_h = 0x7F;
    pad->ljoy_v = 0x7F;
    
    // Analog pressures
    pad->right_p = pad->left_p = pad->up_p = pad->down_p = 0;
    pad->triangle_p = pad->circle_p = pad->cross_p = pad->square_p = 0;
    pad->l1_p = pad->r1_p = pad->l2_p = pad->r2_p = 0;
    
    return 1; // 1 means successful read
}

// --------------------------------------------------------
// C-Bindings for PS2Recomp
// --------------------------------------------------------

extern "C" {

void hle_scePadInit(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int mode = GPR_U32(ctx, 4);
    int result = PadBridge::get().scePadInit(mode);
    setReturnS32(ctx, result);
}

void hle_scePadPortOpen(uint8_t* rdram, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int port = GPR_U32(ctx, 4);
    int slot = GPR_U32(ctx, 5);
    uint32_t addr = GPR_U32(ctx, 6);
    int result = PadBridge::get().scePadPortOpen(port, slot, &rdram[addr]);
    setReturnS32(ctx, result);
}

void hle_scePadRead(uint8_t* rdram, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int port = GPR_U32(ctx, 4);
    int slot = GPR_U32(ctx, 5);
    uint32_t addr = GPR_U32(ctx, 6);
    int result = PadBridge::get().scePadRead(port, slot, &rdram[addr]);
    setReturnS32(ctx, result);
}

} // extern "C"

} // namespace input
} // namespace fate
