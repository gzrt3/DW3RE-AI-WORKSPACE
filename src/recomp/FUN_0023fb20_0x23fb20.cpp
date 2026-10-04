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

// Function: FUN_0023fb20
// Address: 0x23fb20 - 0x23fb84
void FUN_0023fb20_0x23fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fb20_0x23fb20");
#endif

    switch (ctx->pc) {
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb60u: goto label_23fb60;
        case 0x23fb68u: goto label_23fb68;
        case 0x23fb7cu: goto label_23fb7c;
        default: break;
    }

    ctx->pc = 0x23fb20u;

    // 0x23fb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fb24: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x23fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x23fb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23fb2c: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x23fb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x23fb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fb34: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23fb34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x23fb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb3c: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x23fb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x23fb40: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x23fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23fb44: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x23FB44u;
    SET_GPR_U32(ctx, 31, 0x23FB4Cu);
    ctx->pc = 0x23FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB44u;
    // 0x23fb48: 0x240900b0  addiu       $t1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x23FB44u, 0x23FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB4Cu;
label_23fb4c:
    // 0x23fb4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23fb50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fb54: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23fb58: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x23FB58u;
    SET_GPR_U32(ctx, 31, 0x23FB60u);
    ctx->pc = 0x23FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB58u;
    // 0x23fb5c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x23FB58u, 0x23FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB60u;
label_23fb60:
    // 0x23fb60: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x23FB60u;
    SET_GPR_U32(ctx, 31, 0x23FB68u);
    ctx->pc = 0x23FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB60u;
    // 0x23fb64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x23FB60u, 0x23FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB68u;
label_23fb68:
    // 0x23fb68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23fb6c: 0x27828310  addiu       $v0, $gp, -0x7CF0
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935312));
    // 0x23fb70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fb74: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23FB74u;
    SET_GPR_U32(ctx, 31, 0x23FB7Cu);
    ctx->pc = 0x23FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB74u;
    // 0x23fb78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23FB74u, 0x23FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB7Cu;
label_23fb7c:
    // 0x23fb7c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x23FB7Cu;
    SET_GPR_U32(ctx, 31, 0x23FB84u);
    ctx->pc = 0x23FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB7Cu;
    // 0x23fb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x23FB7Cu, 0x23FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB84u;
}
