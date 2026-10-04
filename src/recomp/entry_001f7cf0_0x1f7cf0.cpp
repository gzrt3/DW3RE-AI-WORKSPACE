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

// Function: entry_001f7cf0
// Address: 0x1f7cf0 - 0x1f7d10
void entry_001f7cf0_0x1f7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7cf0_0x1f7cf0");
#endif

    ctx->pc = 0x1f7cf0u;

    // 0x1f7cf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f7cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f7cf4: 0x28e90003  slti        $t1, $a3, 0x3
    ctx->pc = 0x1f7cf4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7cf8: 0x1520ffc3  bnez        $t1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1F7CF8u;
    {
        const bool branch_taken_0x1f7cf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf8) {
            ctx->pc = 0x1F7C08u;
            return;
        }
    }
    ctx->pc = 0x1F7D00u;
    // 0x1f7d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D08u;
    // 0x1f7d08: 0x0  nop
    ctx->pc = 0x1f7d08u;
    // NOP
    // 0x1f7d0c: 0x0  nop
    ctx->pc = 0x1f7d0cu;
    // NOP
    ctx->pc = 0x1f7d10u;
}
