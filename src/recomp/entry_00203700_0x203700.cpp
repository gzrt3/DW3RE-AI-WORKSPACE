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

// Function: entry_00203700
// Address: 0x203700 - 0x203740
void entry_00203700_0x203700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203700_0x203700");
#endif

    switch (ctx->pc) {
        case 0x203724u: goto label_203724;
        case 0x20372cu: goto label_20372c;
        case 0x203734u: goto label_203734;
        default: break;
    }

    ctx->pc = 0x203700u;

    // 0x203700: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x203704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203704u;
    {
        const bool branch_taken_0x203704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203704) {
            ctx->pc = 0x203740u;
            return;
        }
    }
    ctx->pc = 0x20370Cu;
    // 0x20370c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203710: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20371c: 0xc08104c  jal         func_204130
    ctx->pc = 0x20371Cu;
    SET_GPR_U32(ctx, 31, 0x203724u);
    ctx->pc = 0x203720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20371Cu;
    // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x20371Cu, 0x203724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203724u;
    SET_GPR_U32(ctx, 31, 0x20372Cu);
    ctx->pc = 0x203728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203724u;
    // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203724u, 0x20372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20372Cu;
label_20372c:
    // 0x20372c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x20372Cu;
    SET_GPR_U32(ctx, 31, 0x203734u);
    ctx->pc = 0x203730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20372Cu;
    // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x20372Cu, 0x203734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203734u;
label_203734:
    // 0x203734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203738: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203740u;
}
