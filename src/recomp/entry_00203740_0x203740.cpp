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

// Function: entry_00203740
// Address: 0x203740 - 0x203774
void entry_00203740_0x203740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203740_0x203740");
#endif

    switch (ctx->pc) {
        case 0x203758u: goto label_203758;
        case 0x203760u: goto label_203760;
        case 0x203768u: goto label_203768;
        default: break;
    }

    ctx->pc = 0x203740u;

    // 0x203740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203748: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20374c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203750: 0xc08104c  jal         func_204130
    ctx->pc = 0x203750u;
    SET_GPR_U32(ctx, 31, 0x203758u);
    ctx->pc = 0x203754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203750u;
    // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203750u, 0x203758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203758u;
    SET_GPR_U32(ctx, 31, 0x203760u);
    ctx->pc = 0x20375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203758u;
    // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203758u, 0x203760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203760u;
label_203760:
    // 0x203760: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203760u;
    // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203760u, 0x203768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20376c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x20376Cu;
    {
        const bool branch_taken_0x20376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20376c) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203774u;
}
