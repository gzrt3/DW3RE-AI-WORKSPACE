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

// Function: entry_00248e7c
// Address: 0x248e7c - 0x248e90
void entry_00248e7c_0x248e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248e7c_0x248e7c");
#endif

    ctx->pc = 0x248e7cu;

    // 0x248e7c: 0x0  nop
    ctx->pc = 0x248e7cu;
    // NOP
    // 0x248e80: 0x3e00008  jr          $ra
    ctx->pc = 0x248E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E88u;
    // 0x248e88: 0x0  nop
    ctx->pc = 0x248e88u;
    // NOP
    // 0x248e8c: 0x0  nop
    ctx->pc = 0x248e8cu;
    // NOP
    ctx->pc = 0x248e90u;
}
