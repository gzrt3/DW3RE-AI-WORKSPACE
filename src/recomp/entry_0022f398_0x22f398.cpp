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

// Function: entry_0022f398
// Address: 0x22f398 - 0x22f3b4
void entry_0022f398_0x22f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f398_0x22f398");
#endif

    switch (ctx->pc) {
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3b0u: goto label_22f3b0;
        default: break;
    }

    ctx->pc = 0x22f398u;

    // 0x22f398: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F398u;
    SET_GPR_U32(ctx, 31, 0x22F3A0u);
    ctx->pc = 0x22F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F398u;
    // 0x22f39c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F398u, 0x22F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3A0u;
label_22f3a0:
    // 0x22f3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A0u;
        // 0x22f3a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F3B4u;
            return;
        }
    }
    ctx->pc = 0x22F3A8u;
    // 0x22f3a8: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F3A8u;
    SET_GPR_U32(ctx, 31, 0x22F3B0u);
    ctx->pc = 0x22F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A8u;
    // 0x22f3ac: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F3A8u, 0x22F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3B0u;
label_22f3b0:
    // 0x22f3b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x22f3b4u;
}
