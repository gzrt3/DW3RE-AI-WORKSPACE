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

// Function: entry_00158f5c
// Address: 0x158f5c - 0x158f80
void entry_00158f5c_0x158f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158f5c_0x158f5c");
#endif

    ctx->pc = 0x158f5cu;

    // 0x158f5c: 0x0  nop
    ctx->pc = 0x158f5cu;
    // NOP
    // 0x158f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158f64: 0x2864000c  slti        $a0, $v1, 0xC
    ctx->pc = 0x158f64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x158f68: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x158F68u;
    {
        const bool branch_taken_0x158f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f68) {
            ctx->pc = 0x158EE0u;
            return;
        }
    }
    ctx->pc = 0x158F70u;
    // 0x158f70: 0x3e00008  jr          $ra
    ctx->pc = 0x158F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F78u;
    // 0x158f78: 0x0  nop
    ctx->pc = 0x158f78u;
    // NOP
    // 0x158f7c: 0x0  nop
    ctx->pc = 0x158f7cu;
    // NOP
    ctx->pc = 0x158f80u;
}
