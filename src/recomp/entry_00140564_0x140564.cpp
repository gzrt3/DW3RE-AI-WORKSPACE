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

// Function: entry_00140564
// Address: 0x140564 - 0x1405c4
void entry_00140564_0x140564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140564_0x140564");
#endif

    ctx->pc = 0x140564u;

    // 0x140564: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x140568: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x14056c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14056Cu;
    {
        const bool branch_taken_0x14056c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14056c) {
            ctx->pc = 0x1405C4u;
            return;
        }
    }
    ctx->pc = 0x140574u;
    // 0x140574: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x140574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x140578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14057c: 0x0  nop
    ctx->pc = 0x14057cu;
    // NOP
    // 0x140580: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x140580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140584: 0x0  nop
    ctx->pc = 0x140584u;
    // NOP
    // 0x140588: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x140588u;
    {
        const bool branch_taken_0x140588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140588) {
            ctx->pc = 0x1405C4u;
            return;
        }
    }
    ctx->pc = 0x140590u;
    // 0x140590: 0x9204024a  lbu         $a0, 0x24A($s0)
    ctx->pc = 0x140590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 586)));
    // 0x140594: 0x3c024812  lui         $v0, 0x4812
    ctx->pc = 0x140594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18450 << 16));
    // 0x140598: 0x34437c00  ori         $v1, $v0, 0x7C00
    ctx->pc = 0x140598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31744);
    // 0x14059c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1405a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1405a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1405a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1405a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1405a8: 0x841018  mult        $v0, $a0, $a0
    ctx->pc = 0x1405a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1405ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1405acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1405b0: 0x0  nop
    ctx->pc = 0x1405b0u;
    // NOP
    // 0x1405b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1405b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1405b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1405b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1405bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1405bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1405c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1405c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x1405c4u;
}
