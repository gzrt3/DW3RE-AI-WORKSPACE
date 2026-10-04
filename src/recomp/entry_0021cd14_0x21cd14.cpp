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

// Function: entry_0021cd14
// Address: 0x21cd14 - 0x21cd70
void entry_0021cd14_0x21cd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cd14_0x21cd14");
#endif

    ctx->pc = 0x21cd14u;

    // 0x21cd14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21cd18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21cd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21cd1c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x21cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cd20: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x21cd20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x21cd24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x21cd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd2c: 0x0  nop
    ctx->pc = 0x21cd2cu;
    // NOP
    // 0x21cd30: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21cd30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21cd34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21cd34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21cd38: 0x0  nop
    ctx->pc = 0x21cd38u;
    // NOP
    // 0x21cd3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21CD3Cu;
    {
        const bool branch_taken_0x21cd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd3c) {
            ctx->pc = 0x21CD5Cu;
            goto label_21cd5c;
        }
    }
    ctx->pc = 0x21CD44u;
    // 0x21cd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd48: 0x0  nop
    ctx->pc = 0x21cd48u;
    // NOP
    // 0x21cd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21cd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21cd50: 0x0  nop
    ctx->pc = 0x21cd50u;
    // NOP
    // 0x21cd54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21CD54u;
    {
        const bool branch_taken_0x21cd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21cd54) {
            ctx->pc = 0x21CD6Cu;
            goto label_21cd6c;
        }
    }
    ctx->pc = 0x21CD5Cu;
label_21cd5c:
    // 0x21cd5c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CD5Cu;
    {
        const bool branch_taken_0x21cd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD5Cu;
        // 0x21cd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd5c) {
            ctx->pc = 0x21CD70u;
            return;
        }
    }
    ctx->pc = 0x21CD64u;
    // 0x21cd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21CD64u;
    {
        const bool branch_taken_0x21cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd64) {
            ctx->pc = 0x21CD70u;
            return;
        }
    }
    ctx->pc = 0x21CD6Cu;
label_21cd6c:
    // 0x21cd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21cd70u;
}
