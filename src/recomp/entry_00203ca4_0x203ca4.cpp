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

// Function: entry_00203ca4
// Address: 0x203ca4 - 0x203ce0
void entry_00203ca4_0x203ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ca4_0x203ca4");
#endif

    switch (ctx->pc) {
        case 0x203cc4u: goto label_203cc4;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd4u: goto label_203cd4;
        default: break;
    }

    ctx->pc = 0x203ca4u;

    // 0x203ca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x203ca8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CE0u;
            return;
        }
    }
    ctx->pc = 0x203CB0u;
    // 0x203cb0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203cb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x203cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cbc: 0xc08104c  jal         func_204130
    ctx->pc = 0x203CBCu;
    SET_GPR_U32(ctx, 31, 0x203CC4u);
    ctx->pc = 0x203CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CBCu;
    // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203CBCu, 0x203CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203CC4u;
    SET_GPR_U32(ctx, 31, 0x203CCCu);
    ctx->pc = 0x203CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CC4u;
    // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203CC4u, 0x203CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203CCCu;
    SET_GPR_U32(ctx, 31, 0x203CD4u);
    ctx->pc = 0x203CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CCCu;
    // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203CCCu, 0x203CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CD4u;
label_203cd4:
    // 0x203cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203cd8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203CE0u;
}
