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

// Function: entry_001e6c84
// Address: 0x1e6c84 - 0x1e6cbc
void entry_001e6c84_0x1e6c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c84_0x1e6c84");
#endif

    switch (ctx->pc) {
        case 0x1e6cb4u: goto label_1e6cb4;
        default: break;
    }

    ctx->pc = 0x1e6c84u;

    // 0x1e6c84: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e6c88: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6C88u;
    {
        const bool branch_taken_0x1e6c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c88) {
            ctx->pc = 0x1E6CCCu;
            return;
        }
    }
    ctx->pc = 0x1E6C90u;
    // 0x1e6c90: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x1e6c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6c98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C98u;
    {
        const bool branch_taken_0x1e6c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c98) {
            ctx->pc = 0x1E6CBCu;
            return;
        }
    }
    ctx->pc = 0x1E6CA0u;
    // 0x1e6ca0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6CA0u;
    {
        const bool branch_taken_0x1e6ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6ca0) {
            ctx->pc = 0x1E6CBCu;
            return;
        }
    }
    ctx->pc = 0x1E6CA8u;
    // 0x1e6ca8: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6cac: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6CACu;
    SET_GPR_U32(ctx, 31, 0x1E6CB4u);
    ctx->pc = 0x1E6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CACu;
    // 0x1e6cb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6CACu, 0x1E6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CB4u;
label_1e6cb4:
    // 0x1e6cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6CB4u;
    {
        const bool branch_taken_0x1e6cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cb4) {
            ctx->pc = 0x1E6CCCu;
            return;
        }
    }
    ctx->pc = 0x1E6CBCu;
}
