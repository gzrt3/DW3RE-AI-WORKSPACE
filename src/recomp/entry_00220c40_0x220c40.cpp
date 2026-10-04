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

// Function: entry_00220c40
// Address: 0x220c40 - 0x220c60
void entry_00220c40_0x220c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220c40_0x220c40");
#endif

    ctx->pc = 0x220c40u;

    // 0x220c40: 0x15660005  bne         $t3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x220C40u;
    {
        const bool branch_taken_0x220c40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x220c40) {
            ctx->pc = 0x220C58u;
            goto label_220c58;
        }
    }
    ctx->pc = 0x220C48u;
    // 0x220c48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x220c4c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x220c50: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x220C50u;
    {
        const bool branch_taken_0x220c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C50u;
        // 0x220c54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c50) {
            ctx->pc = 0x220BFCu;
            return;
        }
    }
    ctx->pc = 0x220C58u;
label_220c58:
    // 0x220c58: 0x3e00008  jr          $ra
    ctx->pc = 0x220C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220C60u;
}
