#include "fate/audio/spu_bridge.hpp"
#include <iostream>
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

namespace fate {
namespace audio {

SPUBridge& SPUBridge::get() {
    static SPUBridge instance;
    return instance;
}

void SPUBridge::initialize() {
    std::cout << "[SPU Bridge] Initialized. Ready for audio routing.\n";
}

int SPUBridge::sceSdRemote(int /*mode*/, int /*arg*/) {
    // Return 1 for success
    return 1;
}

int SPUBridge::sceSdInit(int mode) {
    std::cout << "[SPU Bridge] sceSdInit(mode=" << mode << ")\n";
    return 1;
}

int SPUBridge::sceSdSetParam(int /*core*/, int /*param*/, int /*value*/) {
    return 1;
}

int SPUBridge::sceSdBlockTrans(int /*core*/, int /*mode*/, void* /*addr*/, int /*size*/) {
    return 1;
}

// --------------------------------------------------------
// C-Bindings for PS2Recomp
// --------------------------------------------------------

extern "C" {

void hle_sceSdRemote(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int mode = GPR_U32(ctx, 4);
    int arg = GPR_U32(ctx, 5);
    int result = SPUBridge::get().sceSdRemote(mode, arg);
    setReturnS32(ctx, result);
}

void hle_sceSdInit(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int mode = GPR_U32(ctx, 4);
    int result = SPUBridge::get().sceSdInit(mode);
    setReturnS32(ctx, result);
}

void hle_sceSdSetParam(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int core = GPR_U32(ctx, 4);
    int param = GPR_U32(ctx, 5);
    int value = GPR_U32(ctx, 6);
    int result = SPUBridge::get().sceSdSetParam(core, param, value);
    setReturnS32(ctx, result);
}

void hle_sceSdBlockTrans(uint8_t* rdram, R5900Context* ctx, PS2Runtime* /*runtime*/) {
    int core = GPR_U32(ctx, 4);
    int mode = GPR_U32(ctx, 5);
    uint32_t addr = GPR_U32(ctx, 6);
    int size = GPR_U32(ctx, 7);
    int result = SPUBridge::get().sceSdBlockTrans(core, mode, &rdram[addr], size);
    setReturnS32(ctx, result);
}

} // extern "C"

} // namespace audio
} // namespace fate
