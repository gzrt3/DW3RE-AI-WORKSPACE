#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0014f404
// Address: 0x14f404 - 0x14f464
void entry_0014f404_0x14f404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f404_0x14f404");
#endif

    ctx->pc = 0x14f404u;

    // 0x14f404: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x14f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f408: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x14f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x14f40c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x14f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f410: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x14f410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x14f414: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x14f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f418: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x14f418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x14f41c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x14f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f420: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x14f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x14f424: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x14f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f428: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x14f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x14f42c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f430: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x14f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x14f434: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x14f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f438: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x14f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x14f43c: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x14f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f440: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x14f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x14f444: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x14f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f448: 0xe4a00150  swc1        $f0, 0x150($a1)
    ctx->pc = 0x14f448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x14f44c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x14f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f450: 0xe4a00154  swc1        $f0, 0x154($a1)
    ctx->pc = 0x14f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 340), bits); }
    // 0x14f454: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x14f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f458: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x14f458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
    // 0x14f45c: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x14f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f460: 0xe4a0015c  swc1        $f0, 0x15C($a1)
    ctx->pc = 0x14f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 348), bits); }
    ctx->pc = 0x14f464u;
}
