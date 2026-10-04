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

// Function: entry_001d5170
// Address: 0x1d5170 - 0x1d51ac
void entry_001d5170_0x1d5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5170_0x1d5170");
#endif

    ctx->pc = 0x1d5170u;

    // 0x1d5170: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1d5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d5174: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
    // 0x1d5178: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d517c: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5180: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d5180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1d5184: 0x34a60fdb  ori         $a2, $a1, 0xFDB
    ctx->pc = 0x1d5184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5188: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x1d518c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d518cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1d5190: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1d5190u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
    // 0x1d5194: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1d5194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5198: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d5198u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d519c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d519cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1d51a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d51a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1d51a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d51a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d51a8: 0xe46001d0  swc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d51a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
    ctx->pc = 0x1d51acu;
}
