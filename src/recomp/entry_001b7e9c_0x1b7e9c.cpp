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

// Function: entry_001b7e9c
// Address: 0x1b7e9c - 0x1b7eb0
void entry_001b7e9c_0x1b7e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7e9c_0x1b7e9c");
#endif

    ctx->pc = 0x1b7e9cu;

    // 0x1b7e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA0u;
        // 0x1b7ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EA8u;
    // 0x1b7ea8: 0x0  nop
    ctx->pc = 0x1b7ea8u;
    // NOP
    // 0x1b7eac: 0x0  nop
    ctx->pc = 0x1b7eacu;
    // NOP
    ctx->pc = 0x1b7eb0u;
}
