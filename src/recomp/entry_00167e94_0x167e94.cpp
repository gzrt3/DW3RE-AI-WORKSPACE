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

// Function: entry_00167e94
// Address: 0x167e94 - 0x167eb0
void entry_00167e94_0x167e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167e94_0x167e94");
#endif

    ctx->pc = 0x167e94u;

    // 0x167e94: 0xaca40044  sw          $a0, 0x44($a1)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 4));
    // 0x167e98: 0x8f8386d0  lw          $v1, -0x7930($gp)
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x167e9c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x167e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x167ea0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x167ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x167ea4: 0xaf8486d0  sw          $a0, -0x7930($gp)
    ctx->pc = 0x167ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
    // 0x167ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x167EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EB0u;
}
