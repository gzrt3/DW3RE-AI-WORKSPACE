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

// Function: entry_00174b9c
// Address: 0x174b9c - 0x174bb0
void entry_00174b9c_0x174b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b9c_0x174b9c");
#endif

    switch (ctx->pc) {
        case 0x174ba4u: goto label_174ba4;
        default: break;
    }

    ctx->pc = 0x174b9cu;

    // 0x174b9c: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174B9Cu;
    SET_GPR_U32(ctx, 31, 0x174BA4u);
    ctx->pc = 0x174BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B9Cu;
    // 0x174ba0: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174B9Cu, 0x174BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BA4u;
label_174ba4:
    // 0x174ba4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x174BA4u;
    {
        const bool branch_taken_0x174ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA4u;
        // 0x174ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ba4) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174BACu;
    // 0x174bac: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x174bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    ctx->pc = 0x174bb0u;
}
