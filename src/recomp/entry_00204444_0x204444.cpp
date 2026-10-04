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

// Function: entry_00204444
// Address: 0x204444 - 0x204458
void entry_00204444_0x204444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204444_0x204444");
#endif

    switch (ctx->pc) {
        case 0x204450u: goto label_204450;
        default: break;
    }

    ctx->pc = 0x204444u;

    // 0x204444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204448: 0xc06c51c  jal         func_1B1470
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 31, 0x204450u);
    ctx->pc = 0x20444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204448u;
    // 0x20444c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1470u, 0x204448u, 0x204450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204450u;
label_204450:
    // 0x204450: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x204450u;
    {
        const bool branch_taken_0x204450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204450u;
        // 0x204454: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204450) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204458u;
}
