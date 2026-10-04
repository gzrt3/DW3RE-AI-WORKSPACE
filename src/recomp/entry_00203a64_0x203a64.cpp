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

// Function: entry_00203a64
// Address: 0x203a64 - 0x203aac
void entry_00203a64_0x203a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203a64_0x203a64");
#endif

    switch (ctx->pc) {
        case 0x203a8cu: goto label_203a8c;
        case 0x203a94u: goto label_203a94;
        case 0x203a9cu: goto label_203a9c;
        default: break;
    }

    ctx->pc = 0x203a64u;

    // 0x203a64: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x203a68: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x203a6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x203a70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203A70u;
    {
        const bool branch_taken_0x203a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a70) {
            ctx->pc = 0x203AACu;
            return;
        }
    }
    ctx->pc = 0x203A78u;
    // 0x203a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a7c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a84: 0xc08104c  jal         func_204130
    ctx->pc = 0x203A84u;
    SET_GPR_U32(ctx, 31, 0x203A8Cu);
    ctx->pc = 0x203A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A84u;
    // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203A84u, 0x203A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A8Cu;
label_203a8c:
    // 0x203a8c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203A8Cu;
    SET_GPR_U32(ctx, 31, 0x203A94u);
    ctx->pc = 0x203A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A8Cu;
    // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203A8Cu, 0x203A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A94u;
label_203a94:
    // 0x203a94: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203A94u;
    SET_GPR_U32(ctx, 31, 0x203A9Cu);
    ctx->pc = 0x203A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A94u;
    // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203A94u, 0x203A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A9Cu;
label_203a9c:
    // 0x203a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203aa0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203aa4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203AACu;
}
