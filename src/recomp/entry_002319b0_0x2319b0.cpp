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

// Function: entry_002319b0
// Address: 0x2319b0 - 0x2319c0
void entry_002319b0_0x2319b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002319b0_0x2319b0");
#endif

    switch (ctx->pc) {
        case 0x2319b8u: goto label_2319b8;
        default: break;
    }

    ctx->pc = 0x2319b0u;

    // 0x2319b0: 0xc08da88  jal         func_236A20
    ctx->pc = 0x2319B0u;
    SET_GPR_U32(ctx, 31, 0x2319B8u);
    ctx->pc = 0x236A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A20u, 0x2319B0u, 0x2319B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B8u;
label_2319b8:
    // 0x2319b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2319B8u;
    {
        const bool branch_taken_0x2319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319b8) {
            ctx->pc = 0x2319CCu;
            return;
        }
    }
    ctx->pc = 0x2319C0u;
}
