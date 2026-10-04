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

// Function: entry_0023fa80
// Address: 0x23fa80 - 0x23fabc
void entry_0023fa80_0x23fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa80_0x23fa80");
#endif

    switch (ctx->pc) {
        case 0x23faacu: goto label_23faac;
        case 0x23fab4u: goto label_23fab4;
        default: break;
    }

    ctx->pc = 0x23fa80u;

    // 0x23fa80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fa84: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23fa88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fa8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x23fa90: 0x2442c960  addiu       $v0, $v0, -0x36A0
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x23fa94: 0x8c27c97c  lw          $a3, -0x3684($at)
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x29C97Cu));
    // 0x23fa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fa9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23faa0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23faa4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x23FAA4u;
    SET_GPR_U32(ctx, 31, 0x23FAACu);
    ctx->pc = 0x23FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAA4u;
    // 0x23faa8: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x23FAA4u, 0x23FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAACu;
label_23faac:
    // 0x23faac: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23FAACu;
    SET_GPR_U32(ctx, 31, 0x23FAB4u);
    ctx->pc = 0x23FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAACu;
    // 0x23fab0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23FAACu, 0x23FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAB4u;
label_23fab4:
    // 0x23fab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23FAB4u;
    {
        const bool branch_taken_0x23fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAB4u;
        // 0x23fab8: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fab4) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23FABCu;
}
