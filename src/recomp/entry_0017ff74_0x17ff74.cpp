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

// Function: entry_0017ff74
// Address: 0x17ff74 - 0x17ff9c
void entry_0017ff74_0x17ff74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff74_0x17ff74");
#endif

    switch (ctx->pc) {
        case 0x17ff8cu: goto label_17ff8c;
        default: break;
    }

    ctx->pc = 0x17ff74u;

    // 0x17ff74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ff78: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x17ff7c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff80: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x17ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x17ff84: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x17FF84u;
    SET_GPR_U32(ctx, 31, 0x17FF8Cu);
    ctx->pc = 0x17FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF84u;
    // 0x17ff88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x17FF84u, 0x17FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF8Cu;
label_17ff8c:
    // 0x17ff8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x17ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x17ff90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ff94: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x17FF94u;
    SET_GPR_U32(ctx, 31, 0x17FF9Cu);
    ctx->pc = 0x17FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF94u;
    // 0x17ff98: 0x24a59838  addiu       $a1, $a1, -0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x17FF94u, 0x17FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF9Cu;
}
