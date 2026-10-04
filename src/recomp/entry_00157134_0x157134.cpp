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

// Function: entry_00157134
// Address: 0x157134 - 0x157150
void entry_00157134_0x157134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157134_0x157134");
#endif

    ctx->pc = 0x157134u;

    // 0x157134: 0x0  nop
    ctx->pc = 0x157134u;
    // NOP
    // 0x157138: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x15713c: 0x29650002  slti        $a1, $t3, 0x2
    ctx->pc = 0x15713cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x157140: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x24c606c0  addiu       $a2, $a2, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x156FF8u;
            return;
        }
    }
    ctx->pc = 0x157148u;
    // 0x157148: 0x3e00008  jr          $ra
    ctx->pc = 0x157148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157150u;
}
