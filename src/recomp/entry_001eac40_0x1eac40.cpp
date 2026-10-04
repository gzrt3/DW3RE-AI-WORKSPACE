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

// Function: entry_001eac40
// Address: 0x1eac40 - 0x1eac60
void entry_001eac40_0x1eac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac40_0x1eac40");
#endif

    ctx->pc = 0x1eac40u;

    // 0x1eac40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eac48: 0xaf848efc  sw          $a0, -0x7104($gp)
    ctx->pc = 0x1eac48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 4));
    // 0x1eac4c: 0xaf838ef4  sw          $v1, -0x710C($gp)
    ctx->pc = 0x1eac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 3));
    // 0x1eac50: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC58u;
    // 0x1eac58: 0x0  nop
    ctx->pc = 0x1eac58u;
    // NOP
    // 0x1eac5c: 0x0  nop
    ctx->pc = 0x1eac5cu;
    // NOP
    ctx->pc = 0x1eac60u;
}
