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

// Function: entry_001ee380
// Address: 0x1ee380 - 0x1ee390
void entry_001ee380_0x1ee380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee380_0x1ee380");
#endif

    switch (ctx->pc) {
        case 0x1ee388u: goto label_1ee388;
        default: break;
    }

    ctx->pc = 0x1ee380u;

    // 0x1ee380: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1EE380u;
    SET_GPR_U32(ctx, 31, 0x1EE388u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1EE380u, 0x1EE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE388u;
label_1ee388:
    // 0x1ee388: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE2F0u;
            return;
        }
    }
    ctx->pc = 0x1EE390u;
}
