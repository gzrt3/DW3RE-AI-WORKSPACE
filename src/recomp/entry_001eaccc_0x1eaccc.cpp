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

// Function: entry_001eaccc
// Address: 0x1eaccc - 0x1eace0
void entry_001eaccc_0x1eaccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaccc_0x1eaccc");
#endif

    ctx->pc = 0x1eacccu;

    // 0x1eaccc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1eacccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1eacd0: 0xaf838efc  sw          $v1, -0x7104($gp)
    ctx->pc = 0x1eacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
    // 0x1eacd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EACDCu;
    // 0x1eacdc: 0x0  nop
    ctx->pc = 0x1eacdcu;
    // NOP
    ctx->pc = 0x1eace0u;
}
