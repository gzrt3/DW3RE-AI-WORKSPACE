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

// Function: entry_001472fc
// Address: 0x1472fc - 0x147318
void entry_001472fc_0x1472fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472fc_0x1472fc");
#endif

    switch (ctx->pc) {
        case 0x147310u: goto label_147310;
        default: break;
    }

    ctx->pc = 0x1472fcu;

    // 0x1472fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1472FCu;
    {
        const bool branch_taken_0x1472fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472FCu;
        // 0x147300: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472fc) {
            ctx->pc = 0x147318u;
            return;
        }
    }
    ctx->pc = 0x147304u;
    // 0x147304: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147308: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147308u;
    SET_GPR_U32(ctx, 31, 0x147310u);
    ctx->pc = 0x14730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147308u;
    // 0x14730c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147308u, 0x147310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x147310u;
    {
        const bool branch_taken_0x147310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147310u;
        // 0x147314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147310) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147318u;
}
