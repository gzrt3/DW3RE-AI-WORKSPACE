// Unsupported free HLE entry points fail explicitly; no PS2Runtime methods here.
#include "ps2_runtime.h"
#include <iostream>
#include <stdexcept>
#include <string>
#define NOMINMAX
#include <windows.h>
namespace {
[[noreturn]] void stop(const char* name, const R5900Context* ctx) {
    std::cerr << "[DIAGNOSTIC_BARRIER] " << name;
    if (ctx) std::cerr << " guest_pc=0x" << std::hex << ctx->pc;
    std::cerr << '\n';
    if (ctx) ctx->dump();
    void* frames[16]{};
    const auto count = CaptureStackBackTrace(0, 16, frames, nullptr);
    for (USHORT index = 0; index < count; ++index)
        std::cerr << "[HOST_STACK] " << frames[index] << '\n';
    throw std::runtime_error(std::string("Unsupported HLE: ") + name);
}
}
#define FATE_PENDING_HLE(name) \
    extern "C" void name(uint8_t*, R5900Context* ctx, PS2Runtime*) { stop(#name, ctx); }
FATE_PENDING_HLE(hle_sceVu0ApplyMatrix)
FATE_PENDING_HLE(hle_sceVu0InnerProduct)
FATE_PENDING_HLE(hle_sceVu0MulMatrix)
FATE_PENDING_HLE(hle_sceVu0ScaleVector)
FATE_PENDING_HLE(hle_sceVu0TransposeMatrix)
FATE_PENDING_HLE(hle_sceVifInit)
FATE_PENDING_HLE(hle_sceVifFlush)
FATE_PENDING_HLE(hle_sceGsSyncV)
FATE_PENDING_HLE(hle_sceGsSyncPath)
FATE_PENDING_HLE(hle_sceGsIsFinished)
FATE_PENDING_HLE(hle_sceIpuInit)
FATE_PENDING_HLE(hle_sceIpuReset)
FATE_PENDING_HLE(hle_sceIpuDecodeIPicture)
FATE_PENDING_HLE(hle_sceIpuDecodeMPEG2)
FATE_PENDING_HLE(hle_sceIpuSync)
FATE_PENDING_HLE(hle_sceMcInit)
FATE_PENDING_HLE(hle_sceMcOpen)
FATE_PENDING_HLE(hle_sceMcClose)
FATE_PENDING_HLE(hle_sceMcRead)
FATE_PENDING_HLE(hle_sceMcWrite)
FATE_PENDING_HLE(hle_sceMcGetInfo)
FATE_PENDING_HLE(hle_sceMcGetDir)
FATE_PENDING_HLE(hle_sceMcSync)
FATE_PENDING_HLE(hle_sceMcFormat)
FATE_PENDING_HLE(hle_sceOpen)
FATE_PENDING_HLE(hle_sceClose)
FATE_PENDING_HLE(hle_sceRead)
FATE_PENDING_HLE(hle_sceWrite)
FATE_PENDING_HLE(hle_sceLSeek)
#undef FATE_PENDING_HLE
