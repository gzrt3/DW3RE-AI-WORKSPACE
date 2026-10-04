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

// Function: entry_00203c5c
// Address: 0x203c5c - 0x203ca4
void entry_00203c5c_0x203c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c5c_0x203c5c");
#endif

    switch (ctx->pc) {
        case 0x203c88u: goto label_203c88;
        case 0x203c90u: goto label_203c90;
        case 0x203c98u: goto label_203c98;
        default: break;
    }

    ctx->pc = 0x203c5cu;

    // 0x203c5c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x203c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x203c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x203c68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203C68u;
    {
        const bool branch_taken_0x203c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c68) {
            ctx->pc = 0x203CA4u;
            return;
        }
    }
    ctx->pc = 0x203C70u;
    // 0x203c70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c74: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203c78: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x203c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c80: 0xc08104c  jal         func_204130
    ctx->pc = 0x203C80u;
    SET_GPR_U32(ctx, 31, 0x203C88u);
    ctx->pc = 0x203C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C80u;
    // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203C80u, 0x203C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203C88u;
    SET_GPR_U32(ctx, 31, 0x203C90u);
    ctx->pc = 0x203C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C88u;
    // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203C88u, 0x203C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C90u;
    // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203C90u, 0x203C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x203C9Cu;
    {
        const bool branch_taken_0x203c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c9c) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203CA4u;
}
