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

// Function: entry_00147318
// Address: 0x147318 - 0x147330
void entry_00147318_0x147318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147318_0x147318");
#endif

    switch (ctx->pc) {
        case 0x147328u: goto label_147328;
        default: break;
    }

    ctx->pc = 0x147318u;

    // 0x147318: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x147318u;
    {
        const bool branch_taken_0x147318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147318u;
        // 0x14731c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147318) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147320u;
    // 0x147320: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147320u;
    SET_GPR_U32(ctx, 31, 0x147328u);
    ctx->pc = 0x147324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147320u;
    // 0x147324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147320u, 0x147328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147328u;
label_147328:
    // 0x147328: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147328u;
    {
        const bool branch_taken_0x147328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147328u;
        // 0x14732c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147328) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147330u;
}
