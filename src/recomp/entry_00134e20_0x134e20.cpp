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

// Function: entry_00134e20
// Address: 0x134e20 - 0x134e38
void entry_00134e20_0x134e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e20_0x134e20");
#endif

    switch (ctx->pc) {
        case 0x134e28u: goto label_134e28;
        default: break;
    }

    ctx->pc = 0x134e20u;

    // 0x134e20: 0xc04df14  jal         func_137C50
    ctx->pc = 0x134E20u;
    SET_GPR_U32(ctx, 31, 0x134E28u);
    ctx->pc = 0x134E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E20u;
    // 0x134e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C50u, 0x134E20u, 0x134E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E28u;
label_134e28:
    // 0x134e28: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134e2c: 0x8c23a3cc  lw          $v1, -0x5C34($at)
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x134e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134E30u;
    {
        const bool branch_taken_0x134e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E30u;
        // 0x134e34: 0x2470ffe0  addiu       $s0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e30) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134E38u;
}
