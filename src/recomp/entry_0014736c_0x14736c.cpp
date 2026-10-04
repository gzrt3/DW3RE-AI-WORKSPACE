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

// Function: entry_0014736c
// Address: 0x14736c - 0x147388
void entry_0014736c_0x14736c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014736c_0x14736c");
#endif

    switch (ctx->pc) {
        case 0x147380u: goto label_147380;
        default: break;
    }

    ctx->pc = 0x14736cu;

    // 0x14736c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147388u;
            return;
        }
    }
    ctx->pc = 0x147374u;
    // 0x147374: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147378: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147378u;
    SET_GPR_U32(ctx, 31, 0x147380u);
    ctx->pc = 0x14737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147378u;
    // 0x14737c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147378u, 0x147380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147380u;
label_147380:
    // 0x147380: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147380u;
    {
        const bool branch_taken_0x147380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147380u;
        // 0x147384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147380) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147388u;
}
