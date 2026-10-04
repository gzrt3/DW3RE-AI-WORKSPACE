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

// Function: FUN_00202760
// Address: 0x202760 - 0x2027d8
void FUN_00202760_0x202760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202760_0x202760");
#endif

    switch (ctx->pc) {
        case 0x202794u: goto label_202794;
        case 0x2027a8u: goto label_2027a8;
        case 0x2027b0u: goto label_2027b0;
        case 0x2027c8u: goto label_2027c8;
        case 0x2027d0u: goto label_2027d0;
        default: break;
    }

    ctx->pc = 0x202760u;

    // 0x202760: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x202764: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x202768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20276c: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x20276cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x202770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202774: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x202774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x202778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20277c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20277cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202780: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x202780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202784: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x202788: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x20278c: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x20278Cu;
    SET_GPR_U32(ctx, 31, 0x202794u);
    ctx->pc = 0x202790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20278Cu;
    // 0x202790: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x20278Cu, 0x202794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202794u;
label_202794:
    // 0x202794: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x202798: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x202798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20279c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2027a0: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x2027A0u;
    SET_GPR_U32(ctx, 31, 0x2027A8u);
    ctx->pc = 0x2027A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A0u;
    // 0x2027a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x2027A0u, 0x2027A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027A8u;
label_2027a8:
    // 0x2027a8: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x2027A8u;
    SET_GPR_U32(ctx, 31, 0x2027B0u);
    ctx->pc = 0x2027ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A8u;
    // 0x2027ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x2027A8u, 0x2027B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027B0u;
label_2027b0:
    // 0x2027b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2027b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2027b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027b8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2027bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2027bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027c0: 0xc08104c  jal         func_204130
    ctx->pc = 0x2027C0u;
    SET_GPR_U32(ctx, 31, 0x2027C8u);
    ctx->pc = 0x2027C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C0u;
    // 0x2027c4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2027C0u, 0x2027C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027C8u;
label_2027c8:
    // 0x2027c8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2027C8u;
    SET_GPR_U32(ctx, 31, 0x2027D0u);
    ctx->pc = 0x2027CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C8u;
    // 0x2027cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2027C8u, 0x2027D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027D0u;
label_2027d0:
    // 0x2027d0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2027D0u;
    SET_GPR_U32(ctx, 31, 0x2027D8u);
    ctx->pc = 0x2027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027D0u;
    // 0x2027d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2027D0u, 0x2027D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027D8u;
}
