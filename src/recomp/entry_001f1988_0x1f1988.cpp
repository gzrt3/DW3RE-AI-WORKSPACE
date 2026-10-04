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

// Function: entry_001f1988
// Address: 0x1f1988 - 0x1f199c
void entry_001f1988_0x1f1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1988_0x1f1988");
#endif

    switch (ctx->pc) {
        case 0x1f1990u: goto label_1f1990;
        default: break;
    }

    ctx->pc = 0x1f1988u;

    // 0x1f1988: 0xc078078  jal         func_1E01E0
    ctx->pc = 0x1F1988u;
    SET_GPR_U32(ctx, 31, 0x1F1990u);
    ctx->pc = 0x1E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01E0u, 0x1F1988u, 0x1F1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1994u;
    {
        const bool branch_taken_0x1f1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1994u;
        // 0x1f1998: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1994) {
            ctx->pc = 0x1F19A4u;
            return;
        }
    }
    ctx->pc = 0x1F199Cu;
}
