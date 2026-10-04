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

// Function: entry_00164b9c
// Address: 0x164b9c - 0x164bb0
void entry_00164b9c_0x164b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b9c_0x164b9c");
#endif

    ctx->pc = 0x164b9cu;

    // 0x164b9c: 0x0  nop
    ctx->pc = 0x164b9cu;
    // NOP
    // 0x164ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x164BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BA8u;
    // 0x164ba8: 0x0  nop
    ctx->pc = 0x164ba8u;
    // NOP
    // 0x164bac: 0x0  nop
    ctx->pc = 0x164bacu;
    // NOP
    ctx->pc = 0x164bb0u;
}
