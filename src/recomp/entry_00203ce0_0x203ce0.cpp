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

// Function: entry_00203ce0
// Address: 0x203ce0 - 0x203d20
void entry_00203ce0_0x203ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ce0_0x203ce0");
#endif

    switch (ctx->pc) {
        case 0x203d04u: goto label_203d04;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d14u: goto label_203d14;
        default: break;
    }

    ctx->pc = 0x203ce0u;

    // 0x203ce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x203ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x203ce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D20u;
            return;
        }
    }
    ctx->pc = 0x203CECu;
    // 0x203cec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cf0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203cf4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cfc: 0xc08104c  jal         func_204130
    ctx->pc = 0x203CFCu;
    SET_GPR_U32(ctx, 31, 0x203D04u);
    ctx->pc = 0x203D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CFCu;
    // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203CFCu, 0x203D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D04u;
label_203d04:
    // 0x203d04: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D04u;
    SET_GPR_U32(ctx, 31, 0x203D0Cu);
    ctx->pc = 0x203D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D04u;
    // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D04u, 0x203D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D0Cu;
label_203d0c:
    // 0x203d0c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x203D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D0Cu;
    // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D0Cu, 0x203D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D20u;
}
