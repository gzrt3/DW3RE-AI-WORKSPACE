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

// Function: entry_00174b1c
// Address: 0x174b1c - 0x174b34
void entry_00174b1c_0x174b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b1c_0x174b1c");
#endif

    switch (ctx->pc) {
        case 0x174b2cu: goto label_174b2c;
        default: break;
    }

    ctx->pc = 0x174b1cu;

    // 0x174b1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174b20: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x174b24: 0xc05b64c  jal         func_16D930
    ctx->pc = 0x174B24u;
    SET_GPR_U32(ctx, 31, 0x174B2Cu);
    ctx->pc = 0x174B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B24u;
    // 0x174b28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D930u, 0x174B24u, 0x174B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B2Cu;
label_174b2c:
    // 0x174b2c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x174B2Cu;
    {
        const bool branch_taken_0x174b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B2Cu;
        // 0x174b30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b2c) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174B34u;
}
