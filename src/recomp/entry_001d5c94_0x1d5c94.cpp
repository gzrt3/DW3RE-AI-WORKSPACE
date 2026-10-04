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

// Function: entry_001d5c94
// Address: 0x1d5c94 - 0x1d5cb4
void entry_001d5c94_0x1d5c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c94_0x1d5c94");
#endif

    switch (ctx->pc) {
        case 0x1d5cacu: goto label_1d5cac;
        default: break;
    }

    ctx->pc = 0x1d5c94u;

    // 0x1d5c94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5C94u;
    {
        const bool branch_taken_0x1d5c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C94u;
        // 0x1d5c98: 0x28610086  slti        $at, $v1, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)134) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c94) {
            ctx->pc = 0x1D5CB4u;
            return;
        }
    }
    ctx->pc = 0x1D5C9Cu;
    // 0x1d5c9c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5C9Cu;
    {
        const bool branch_taken_0x1d5c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c9c) {
            ctx->pc = 0x1D5CB4u;
            return;
        }
    }
    ctx->pc = 0x1D5CA4u;
    // 0x1d5ca4: 0xc06322c  jal         func_18C8B0
    ctx->pc = 0x1D5CA4u;
    SET_GPR_U32(ctx, 31, 0x1D5CACu);
    ctx->pc = 0x1D5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA4u;
    // 0x1d5ca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8B0u, 0x1D5CA4u, 0x1D5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CACu;
label_1d5cac:
    // 0x1d5cac: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D6190u;
            return;
        }
    }
    ctx->pc = 0x1D5CB4u;
}
