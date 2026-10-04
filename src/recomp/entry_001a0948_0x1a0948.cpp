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

// Function: entry_001a0948
// Address: 0x1a0948 - 0x1a0970
void entry_001a0948_0x1a0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0948_0x1a0948");
#endif

    ctx->pc = 0x1a0948u;

    // 0x1a0948: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a094c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0950: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0950u;
    {
        const bool branch_taken_0x1a0950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0950u;
        // 0x1a0954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0950) {
            ctx->pc = 0x1A0968u;
            goto label_1a0968;
        }
    }
    ctx->pc = 0x1A0958u;
    // 0x1a0958: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1a095c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1a095cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1a0960: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x1a0960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
    // 0x1a0964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0968:
    // 0x1a0968: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0968u;
        // 0x1a096c: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0970u;
}
