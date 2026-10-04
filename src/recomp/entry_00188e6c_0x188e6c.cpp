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

// Function: entry_00188e6c
// Address: 0x188e6c - 0x188ee4
void entry_00188e6c_0x188e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e6c_0x188e6c");
#endif

    ctx->pc = 0x188e6cu;

    // 0x188e6c: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x188e70: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x188e74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x188e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188e78: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x188e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e7c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x188e80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188e90: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x188e94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188e94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x188e98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188e9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x188e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x188ea0: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x188ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ea4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188ea8: 0x8603019e  lh          $v1, 0x19E($s0)
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x188eac: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x188eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188eb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188eb4: 0x0  nop
    ctx->pc = 0x188eb4u;
    // NOP
    // 0x188eb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188ebc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x188ec0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188ec0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x188ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188ec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x188ecc: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ed0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x188ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x188ed4: 0x9203023f  lbu         $v1, 0x23F($s0)
    ctx->pc = 0x188ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
    // 0x188ed8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188ED8u;
    {
        const bool branch_taken_0x188ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ED8u;
        // 0x188edc: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ed8) {
            ctx->pc = 0x188EE4u;
            return;
        }
    }
    ctx->pc = 0x188EE0u;
    // 0x188ee0: 0x2411002e  addiu       $s1, $zero, 0x2E
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x188ee4u;
}
