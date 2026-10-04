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

// Function: entry_0017bee4
// Address: 0x17bee4 - 0x17bf30
void entry_0017bee4_0x17bee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bee4_0x17bee4");
#endif

    ctx->pc = 0x17bee4u;

    // 0x17bee4: 0x0  nop
    ctx->pc = 0x17bee4u;
    // NOP
    // 0x17bee8: 0xe4870028  swc1        $f7, 0x28($a0)
    ctx->pc = 0x17bee8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17beec: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x17beecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x17bef0: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x17bef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bef4: 0x0  nop
    ctx->pc = 0x17bef4u;
    // NOP
    // 0x17bef8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17BEF8u;
    {
        const bool branch_taken_0x17bef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bef8) {
            ctx->pc = 0x17BF04u;
            goto label_17bf04;
        }
    }
    ctx->pc = 0x17BF00u;
    // 0x17bf00: 0x460939c1  sub.s       $f7, $f7, $f9
    ctx->pc = 0x17bf00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
label_17bf04:
    // 0x17bf04: 0x0  nop
    ctx->pc = 0x17bf04u;
    // NOP
    // 0x17bf08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bf0c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x17bf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x17bf10: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF10u;
    {
        const bool branch_taken_0x17bf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf10) {
            ctx->pc = 0x17BF20u;
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BF18u;
    // 0x17bf18: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x17BF18u;
    {
        const bool branch_taken_0x17bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF18u;
        // 0x17bf1c: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf18) {
            ctx->pc = 0x17BDCCu;
            return;
        }
    }
    ctx->pc = 0x17BF20u;
label_17bf20:
    // 0x17bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF28u;
    // 0x17bf28: 0x0  nop
    ctx->pc = 0x17bf28u;
    // NOP
    // 0x17bf2c: 0x0  nop
    ctx->pc = 0x17bf2cu;
    // NOP
    ctx->pc = 0x17bf30u;
}
