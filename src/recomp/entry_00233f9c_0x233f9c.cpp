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

// Function: entry_00233f9c
// Address: 0x233f9c - 0x233fd0
void entry_00233f9c_0x233f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233f9c_0x233f9c");
#endif

    ctx->pc = 0x233f9cu;

    // 0x233f9c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x233fa0: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x233fa4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233FA4u;
    {
        const bool branch_taken_0x233fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233fa4) {
            ctx->pc = 0x233FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233FA4u;
            // 0x233fa8: 0xad23001c  sw          $v1, 0x1C($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233FB4u;
            goto label_233fb4;
        }
    }
    ctx->pc = 0x233FACu;
    // 0x233fac: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x233facu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
    // 0x233fb0: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x233fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
label_233fb4:
    // 0x233fb4: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x233fb8: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x233fbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x233fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x233fc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x233fc4: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x233fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x233fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x233FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC8u;
        // 0x233fcc: 0xad22001c  sw          $v0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233FD0u;
}
