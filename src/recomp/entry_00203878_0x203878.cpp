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

// Function: entry_00203878
// Address: 0x203878 - 0x2038a0
void entry_00203878_0x203878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203878_0x203878");
#endif

    switch (ctx->pc) {
        case 0x203890u: goto label_203890;
        case 0x203898u: goto label_203898;
        default: break;
    }

    ctx->pc = 0x203878u;

    // 0x203878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20387c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203880: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203888: 0xc08104c  jal         func_204130
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203888u;
    // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203888u, 0x203890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203890u;
    SET_GPR_U32(ctx, 31, 0x203898u);
    ctx->pc = 0x203894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203890u;
    // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203890u, 0x203898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203898u;
label_203898:
    // 0x203898: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x203898u;
    {
        const bool branch_taken_0x203898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203898) {
            ctx->pc = 0x2039E8u;
            return;
        }
    }
    ctx->pc = 0x2038A0u;
}
