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

// Function: entry_00147240
// Address: 0x147240 - 0x14725c
void entry_00147240_0x147240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147240_0x147240");
#endif

    switch (ctx->pc) {
        case 0x147254u: goto label_147254;
        default: break;
    }

    ctx->pc = 0x147240u;

    // 0x147240: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147240u;
    {
        const bool branch_taken_0x147240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147240) {
            ctx->pc = 0x14725Cu;
            return;
        }
    }
    ctx->pc = 0x147248u;
    // 0x147248: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14724c: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x14724Cu;
    SET_GPR_U32(ctx, 31, 0x147254u);
    ctx->pc = 0x147250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14724Cu;
    // 0x147250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x14724Cu, 0x147254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147254u;
label_147254:
    // 0x147254: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x147254u;
    {
        const bool branch_taken_0x147254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147254u;
        // 0x147258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147254) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x14725Cu;
}
