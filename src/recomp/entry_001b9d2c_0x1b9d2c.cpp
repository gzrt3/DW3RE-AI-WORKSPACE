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

// Function: entry_001b9d2c
// Address: 0x1b9d2c - 0x1b9d50
void entry_001b9d2c_0x1b9d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9d2c_0x1b9d2c");
#endif

    switch (ctx->pc) {
        case 0x1b9d38u: goto label_1b9d38;
        default: break;
    }

    ctx->pc = 0x1b9d2cu;

    // 0x1b9d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d30: 0xc05af88  jal         func_16BE20
    ctx->pc = 0x1B9D30u;
    SET_GPR_U32(ctx, 31, 0x1B9D38u);
    ctx->pc = 0x1B9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D30u;
    // 0x1b9d34: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE20u, 0x1B9D30u, 0x1B9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D38u;
label_1b9d38:
    // 0x1b9d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9D38u;
    {
        const bool branch_taken_0x1b9d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D38u;
        // 0x1b9d3c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d38) {
            ctx->pc = 0x1B9D50u;
            return;
        }
    }
    ctx->pc = 0x1B9D40u;
    // 0x1b9d40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b9d48: 0xc05b114  jal         func_16C450
    ctx->pc = 0x1B9D48u;
    SET_GPR_U32(ctx, 31, 0x1B9D50u);
    ctx->pc = 0x1B9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D48u;
    // 0x1b9d4c: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C450u, 0x1B9D48u, 0x1B9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D50u;
}
