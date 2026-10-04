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

// Function: entry_00226a98
// Address: 0x226a98 - 0x226ab0
void entry_00226a98_0x226a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226a98_0x226a98");
#endif

    ctx->pc = 0x226a98u;

    // 0x226a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x226A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A9Cu;
        // 0x226aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226AA4u;
    // 0x226aa4: 0x0  nop
    ctx->pc = 0x226aa4u;
    // NOP
    // 0x226aa8: 0x0  nop
    ctx->pc = 0x226aa8u;
    // NOP
    // 0x226aac: 0x0  nop
    ctx->pc = 0x226aacu;
    // NOP
    ctx->pc = 0x226ab0u;
}
