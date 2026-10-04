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

// Function: entry_001f6ed4
// Address: 0x1f6ed4 - 0x1f6ef0
void entry_001f6ed4_0x1f6ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6ed4_0x1f6ed4");
#endif

    ctx->pc = 0x1f6ed4u;

    // 0x1f6ed4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1f6ed8: 0xaf838ff0  sw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
    // 0x1f6edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6EE4u;
    // 0x1f6ee4: 0x0  nop
    ctx->pc = 0x1f6ee4u;
    // NOP
    // 0x1f6ee8: 0x0  nop
    ctx->pc = 0x1f6ee8u;
    // NOP
    // 0x1f6eec: 0x0  nop
    ctx->pc = 0x1f6eecu;
    // NOP
    ctx->pc = 0x1f6ef0u;
}
