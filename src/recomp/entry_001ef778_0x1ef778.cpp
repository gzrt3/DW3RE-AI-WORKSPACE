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

// Function: entry_001ef778
// Address: 0x1ef778 - 0x1ef790
void entry_001ef778_0x1ef778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef778_0x1ef778");
#endif

    ctx->pc = 0x1ef778u;

    // 0x1ef778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF77Cu;
        // 0x1ef780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF784u;
    // 0x1ef784: 0x0  nop
    ctx->pc = 0x1ef784u;
    // NOP
    // 0x1ef788: 0x0  nop
    ctx->pc = 0x1ef788u;
    // NOP
    // 0x1ef78c: 0x0  nop
    ctx->pc = 0x1ef78cu;
    // NOP
    ctx->pc = 0x1ef790u;
}
