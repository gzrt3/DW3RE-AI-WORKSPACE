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

// Function: entry_00174c24
// Address: 0x174c24 - 0x174c38
void entry_00174c24_0x174c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c24_0x174c24");
#endif

    switch (ctx->pc) {
        case 0x174c30u: goto label_174c30;
        default: break;
    }

    ctx->pc = 0x174c24u;

    // 0x174c24: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
    // 0x174c28: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174C28u;
    SET_GPR_U32(ctx, 31, 0x174C30u);
    ctx->pc = 0x174C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C28u;
    // 0x174c2c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174C28u, 0x174C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C30u;
label_174c30:
    // 0x174c30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174C30u;
    {
        const bool branch_taken_0x174c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C30u;
        // 0x174c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c30) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174C38u;
}
