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

// Function: entry_00164980
// Address: 0x164980 - 0x164990
void entry_00164980_0x164980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164980_0x164980");
#endif

    ctx->pc = 0x164980u;

    // 0x164980: 0xaf868650  sw          $a2, -0x79B0($gp)
    ctx->pc = 0x164980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 6));
    // 0x164984: 0xaf87864c  sw          $a3, -0x79B4($gp)
    ctx->pc = 0x164984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 7));
    // 0x164988: 0x3e00008  jr          $ra
    ctx->pc = 0x164988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164990u;
}
