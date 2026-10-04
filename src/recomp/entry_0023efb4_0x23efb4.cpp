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

// Function: entry_0023efb4
// Address: 0x23efb4 - 0x23efcc
void entry_0023efb4_0x23efb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023efb4_0x23efb4");
#endif

    switch (ctx->pc) {
        case 0x23efc4u: goto label_23efc4;
        default: break;
    }

    ctx->pc = 0x23efb4u;

    // 0x23efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFCCu;
            return;
        }
    }
    ctx->pc = 0x23EFBCu;
    // 0x23efbc: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFBCu;
    // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EFBCu, 0x23EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EFD4u;
            return;
        }
    }
    ctx->pc = 0x23EFCCu;
}
