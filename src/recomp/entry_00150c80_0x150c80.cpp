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

// Function: entry_00150c80
// Address: 0x150c80 - 0x150cc0
void entry_00150c80_0x150c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c80_0x150c80");
#endif

    ctx->pc = 0x150c80u;

    // 0x150c80: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c84: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x150c88: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c8c: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x150c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x150c90: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c94: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x150c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x150c98: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c9c: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x150c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x150ca0: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ca4: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x150ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x150ca8: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cac: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x150cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x150cb0: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cb4: 0xe4800158  swc1        $f0, 0x158($a0)
    ctx->pc = 0x150cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x150cb8: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cbc: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x150cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    ctx->pc = 0x150cc0u;
}
