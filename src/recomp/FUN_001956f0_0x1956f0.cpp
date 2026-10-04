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

// Function: FUN_001956f0
// Address: 0x1956f0 - 0x19574c
void FUN_001956f0_0x1956f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001956f0_0x1956f0");
#endif

    switch (ctx->pc) {
        case 0x195708u: goto label_195708;
        case 0x195714u: goto label_195714;
        case 0x195720u: goto label_195720;
        case 0x195740u: goto label_195740;
        default: break;
    }

    ctx->pc = 0x1956f0u;

    // 0x1956f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1956f4: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x1956f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1956fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1956fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195700: 0xc041738  jal         func_105CE0
    ctx->pc = 0x195700u;
    SET_GPR_U32(ctx, 31, 0x195708u);
    ctx->pc = 0x195704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195700u;
    // 0x195704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195700u, 0x195708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195708u;
label_195708:
    // 0x195708: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x19570c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x19570Cu;
    SET_GPR_U32(ctx, 31, 0x195714u);
    ctx->pc = 0x195710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19570Cu;
    // 0x195710: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x19570Cu, 0x195714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195714u;
label_195714:
    // 0x195714: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x195718: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x195718u;
    SET_GPR_U32(ctx, 31, 0x195720u);
    ctx->pc = 0x19571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195718u;
    // 0x19571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195718u, 0x195720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195730: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x195734: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195738: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x195738u;
    SET_GPR_U32(ctx, 31, 0x195740u);
    ctx->pc = 0x19573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195738u;
    // 0x19573c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x195738u, 0x195740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195744: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x195744u;
    SET_GPR_U32(ctx, 31, 0x19574Cu);
    ctx->pc = 0x195748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195744u;
    // 0x195748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x195744u, 0x19574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19574Cu;
}
