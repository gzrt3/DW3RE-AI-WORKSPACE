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

// Function: entry_002055d4
// Address: 0x2055d4 - 0x205600
void entry_002055d4_0x2055d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002055d4_0x2055d4");
#endif

    ctx->pc = 0x2055d4u;

    // 0x2055d4: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055d8: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x2055d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
    // 0x2055dc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055e0: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x2055e4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2055E4u;
    {
        const bool branch_taken_0x2055e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2055e4) {
            ctx->pc = 0x2055F0u;
            goto label_2055f0;
        }
    }
    ctx->pc = 0x2055ECu;
    // 0x2055ec: 0xac802480  sw          $zero, 0x2480($a0)
    ctx->pc = 0x2055ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
label_2055f0:
    // 0x2055f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2055F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2055F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2055F8u;
    // 0x2055f8: 0x0  nop
    ctx->pc = 0x2055f8u;
    // NOP
    // 0x2055fc: 0x0  nop
    ctx->pc = 0x2055fcu;
    // NOP
    ctx->pc = 0x205600u;
}
