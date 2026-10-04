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

// Function: entry_00226a64
// Address: 0x226a64 - 0x226a88
void entry_00226a64_0x226a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226a64_0x226a64");
#endif

    switch (ctx->pc) {
        case 0x226a80u: goto label_226a80;
        default: break;
    }

    ctx->pc = 0x226a64u;

    // 0x226a64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226a68: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x226a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x226a6c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226A6Cu;
    {
        const bool branch_taken_0x226a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226a6c) {
            ctx->pc = 0x226A94u;
            return;
        }
    }
    ctx->pc = 0x226A74u;
    // 0x226a74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x226a78: 0xc084b84  jal         func_212E10
    ctx->pc = 0x226A78u;
    SET_GPR_U32(ctx, 31, 0x226A80u);
    ctx->pc = 0x226A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A78u;
    // 0x226a7c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212E10u, 0x226A78u, 0x226A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A80u;
label_226a80:
    // 0x226a80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226A80u;
    {
        const bool branch_taken_0x226a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226a80) {
            ctx->pc = 0x226A94u;
            return;
        }
    }
    ctx->pc = 0x226A88u;
}
