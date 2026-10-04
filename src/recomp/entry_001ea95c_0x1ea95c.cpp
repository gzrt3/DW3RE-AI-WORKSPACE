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

// Function: entry_001ea95c
// Address: 0x1ea95c - 0x1ea970
void entry_001ea95c_0x1ea95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea95c_0x1ea95c");
#endif

    ctx->pc = 0x1ea95cu;

    // 0x1ea95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea960: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA968u;
    // 0x1ea968: 0x0  nop
    ctx->pc = 0x1ea968u;
    // NOP
    // 0x1ea96c: 0x0  nop
    ctx->pc = 0x1ea96cu;
    // NOP
    ctx->pc = 0x1ea970u;
}
