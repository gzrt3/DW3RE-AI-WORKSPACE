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

// Function: entry_0023fc48
// Address: 0x23fc48 - 0x23fc60
void entry_0023fc48_0x23fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fc48_0x23fc48");
#endif

    ctx->pc = 0x23fc48u;

    // 0x23fc48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23fc4c: 0x28e30029  slti        $v1, $a3, 0x29
    ctx->pc = 0x23fc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x23fc50: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x23FC50u;
    {
        const bool branch_taken_0x23fc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC50u;
        // 0x23fc54: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc50) {
            ctx->pc = 0x23FC1Cu;
            return;
        }
    }
    ctx->pc = 0x23FC58u;
    // 0x23fc58: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC60u;
}
