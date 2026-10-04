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

// Function: entry_00174b8c
// Address: 0x174b8c - 0x174b9c
void entry_00174b8c_0x174b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b8c_0x174b8c");
#endif

    switch (ctx->pc) {
        case 0x174b94u: goto label_174b94;
        default: break;
    }

    ctx->pc = 0x174b8cu;

    // 0x174b8c: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174B8Cu;
    SET_GPR_U32(ctx, 31, 0x174B94u);
    ctx->pc = 0x174B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B8Cu;
    // 0x174b90: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174B8Cu, 0x174B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B94u;
label_174b94:
    // 0x174b94: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x174B94u;
    {
        const bool branch_taken_0x174b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B94u;
        // 0x174b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b94) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174B9Cu;
}
