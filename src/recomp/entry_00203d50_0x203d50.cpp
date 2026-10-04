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

// Function: entry_00203d50
// Address: 0x203d50 - 0x203d84
void entry_00203d50_0x203d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d50_0x203d50");
#endif

    switch (ctx->pc) {
        case 0x203d68u: goto label_203d68;
        case 0x203d70u: goto label_203d70;
        case 0x203d78u: goto label_203d78;
        default: break;
    }

    ctx->pc = 0x203d50u;

    // 0x203d50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d54: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203d58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d60: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D60u;
    SET_GPR_U32(ctx, 31, 0x203D68u);
    ctx->pc = 0x203D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D60u;
    // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D60u, 0x203D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D68u;
    SET_GPR_U32(ctx, 31, 0x203D70u);
    ctx->pc = 0x203D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D68u;
    // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D68u, 0x203D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D70u;
label_203d70:
    // 0x203d70: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D70u;
    SET_GPR_U32(ctx, 31, 0x203D78u);
    ctx->pc = 0x203D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D70u;
    // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D70u, 0x203D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D78u;
label_203d78:
    // 0x203d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D84u;
}
