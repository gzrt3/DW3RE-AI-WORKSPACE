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

// Function: entry_00248d8c
// Address: 0x248d8c - 0x248da0
void entry_00248d8c_0x248d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248d8c_0x248d8c");
#endif

    ctx->pc = 0x248d8cu;

    // 0x248d8c: 0x0  nop
    ctx->pc = 0x248d8cu;
    // NOP
    // 0x248d90: 0x3e00008  jr          $ra
    ctx->pc = 0x248D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D98u;
    // 0x248d98: 0x0  nop
    ctx->pc = 0x248d98u;
    // NOP
    // 0x248d9c: 0x0  nop
    ctx->pc = 0x248d9cu;
    // NOP
    ctx->pc = 0x248da0u;
}
