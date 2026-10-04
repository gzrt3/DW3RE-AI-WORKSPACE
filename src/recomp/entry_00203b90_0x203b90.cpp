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

// Function: entry_00203b90
// Address: 0x203b90 - 0x203be8
void entry_00203b90_0x203b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b90_0x203b90");
#endif

    switch (ctx->pc) {
        case 0x203b9cu: goto label_203b9c;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd8u: goto label_203bd8;
        default: break;
    }

    ctx->pc = 0x203b90u;

    // 0x203b90: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203b94: 0xc083d30  jal         func_20F4C0
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B94u;
    // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F4C0u, 0x203B94u, 0x203B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x203B9Cu;
    {
        const bool branch_taken_0x203b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b9c) {
            ctx->pc = 0x203BE8u;
            return;
        }
    }
    ctx->pc = 0x203BA4u;
    // 0x203ba4: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203ba8: 0xc083cc8  jal         func_20F320
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F320u, 0x203BA8u, 0x203BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203bb8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bc0: 0xc08104c  jal         func_204130
    ctx->pc = 0x203BC0u;
    SET_GPR_U32(ctx, 31, 0x203BC8u);
    ctx->pc = 0x203BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC0u;
    // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203BC0u, 0x203BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BC8u;
label_203bc8:
    // 0x203bc8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203BC8u;
    SET_GPR_U32(ctx, 31, 0x203BD0u);
    ctx->pc = 0x203BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC8u;
    // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203BC8u, 0x203BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BD0u;
label_203bd0:
    // 0x203bd0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x203BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BD0u;
    // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203BD0u, 0x203BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203bdc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x203be0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203C14u;
            return;
        }
    }
    ctx->pc = 0x203BE8u;
}
