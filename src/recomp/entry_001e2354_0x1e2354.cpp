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

// Function: entry_001e2354
// Address: 0x1e2354 - 0x1e2370
void entry_001e2354_0x1e2354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2354_0x1e2354");
#endif

    ctx->pc = 0x1e2354u;

    // 0x1e2354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2358: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1e2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1e235c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E235Cu;
        // 0x1e2360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2364u;
    // 0x1e2364: 0x0  nop
    ctx->pc = 0x1e2364u;
    // NOP
    // 0x1e2368: 0x0  nop
    ctx->pc = 0x1e2368u;
    // NOP
    // 0x1e236c: 0x0  nop
    ctx->pc = 0x1e236cu;
    // NOP
    ctx->pc = 0x1e2370u;
}
