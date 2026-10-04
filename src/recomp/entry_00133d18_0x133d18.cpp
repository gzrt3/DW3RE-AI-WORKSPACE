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

// Function: entry_00133d18
// Address: 0x133d18 - 0x133d78
void entry_00133d18_0x133d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d18_0x133d18");
#endif

    ctx->pc = 0x133d18u;

    // 0x133d18: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x133d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d1c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x133d20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x133d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133d24: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x133d28: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x133d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x133d2c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x133d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x133d30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d34: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x133d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x133d38: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x133d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d3c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x133d3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x133d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133d44: 0x0  nop
    ctx->pc = 0x133d44u;
    // NOP
    // 0x133d48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133d50: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x133d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x133d54: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x133d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133d60: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x133d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x133d64: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x133d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d6c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x133d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x133d70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x133d70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x133d74: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x133d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x133d78u;
}
