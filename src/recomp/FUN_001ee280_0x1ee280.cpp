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

// Function: FUN_001ee280
// Address: 0x1ee280 - 0x1ee398
void FUN_001ee280_0x1ee280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee280_0x1ee280");
#endif

    switch (ctx->pc) {
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee388u: goto label_1ee388;
        default: break;
    }

    ctx->pc = 0x1ee280u;

    // 0x1ee280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee284: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1ee288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee28c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1ee28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1ee290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee294: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1ee298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee2a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ee2a4: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1ee2a8: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1ee2ac: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x1EE2ACu;
    SET_GPR_U32(ctx, 31, 0x1EE2B4u);
    ctx->pc = 0x1EE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2ACu;
    // 0x1ee2b0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x1EE2ACu, 0x1EE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2B4u;
label_1ee2b4:
    // 0x1ee2b4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ee2b8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ee2bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2c0: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x1EE2C0u;
    SET_GPR_U32(ctx, 31, 0x1EE2C8u);
    ctx->pc = 0x1EE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2C0u;
    // 0x1ee2c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x1EE2C0u, 0x1EE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2C8u;
label_1ee2c8:
    // 0x1ee2c8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1ee2cc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x1EE2CCu;
    SET_GPR_U32(ctx, 31, 0x1EE2D4u);
    ctx->pc = 0x1EE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2CCu;
    // 0x1ee2d0: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x1EE2CCu, 0x1EE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2D4u;
label_1ee2d4:
    // 0x1ee2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2dc: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x1EE2DCu;
    SET_GPR_U32(ctx, 31, 0x1EE2E4u);
    ctx->pc = 0x1EE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2DCu;
    // 0x1ee2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x1EE2DCu, 0x1EE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2E4u;
label_1ee2e4:
    // 0x1ee2e4: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x1EE2E4u;
    SET_GPR_U32(ctx, 31, 0x1EE2ECu);
    ctx->pc = 0x1EE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2E4u;
    // 0x1ee2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x1EE2E4u, 0x1EE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2ECu;
label_1ee2ec:
    // 0x1ee2ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee2f0:
    // 0x1ee2f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE2F0u;
    {
        const bool branch_taken_0x1ee2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2f0) {
            ctx->pc = 0x1EE300u;
            goto label_1ee300;
        }
    }
    ctx->pc = 0x1EE2F8u;
    // 0x1ee2f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EE2F8u;
    {
        const bool branch_taken_0x1ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f8) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE300u;
label_1ee300:
    // 0x1ee300: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
    // 0x1ee304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE304u;
    {
        const bool branch_taken_0x1ee304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee304) {
            ctx->pc = 0x1EE314u;
            goto label_1ee314;
        }
    }
    ctx->pc = 0x1EE30Cu;
    // 0x1ee30c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE314u;
label_1ee314:
    // 0x1ee314: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE314u;
    SET_GPR_U32(ctx, 31, 0x1EE31Cu);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE314u, 0x1EE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE31Cu;
label_1ee31c:
    // 0x1ee31c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee320: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE320u;
    {
        const bool branch_taken_0x1ee320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee320) {
            ctx->pc = 0x1EE36Cu;
            goto label_1ee36c;
        }
    }
    ctx->pc = 0x1EE328u;
    // 0x1ee328: 0xc07aaa4  jal         func_1EAA90
    ctx->pc = 0x1EE328u;
    SET_GPR_U32(ctx, 31, 0x1EE330u);
    ctx->pc = 0x1EAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA90u, 0x1EE328u, 0x1EE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE330u;
label_1ee330:
    // 0x1ee330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee334: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE334u;
    {
        const bool branch_taken_0x1ee334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee334) {
            ctx->pc = 0x1EE34Cu;
            goto label_1ee34c;
        }
    }
    ctx->pc = 0x1EE33Cu;
    // 0x1ee33c: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE33Cu;
    // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE33Cu, 0x1EE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EE344u;
    {
        const bool branch_taken_0x1ee344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee344) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE34Cu;
label_1ee34c:
    // 0x1ee34c: 0x0  nop
    ctx->pc = 0x1ee34cu;
    // NOP
    // 0x1ee350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee354: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE354u;
    {
        const bool branch_taken_0x1ee354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee354) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE35Cu;
    // 0x1ee35c: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE35Cu, 0x1EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE364u;
    {
        const bool branch_taken_0x1ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee364) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE36Cu;
label_1ee36c:
    // 0x1ee36c: 0x0  nop
    ctx->pc = 0x1ee36cu;
    // NOP
    // 0x1ee370: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE370u;
    SET_GPR_U32(ctx, 31, 0x1EE378u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE370u, 0x1EE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE378u;
label_1ee378:
    // 0x1ee378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE380u;
label_1ee380:
    // 0x1ee380: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1EE380u;
    SET_GPR_U32(ctx, 31, 0x1EE388u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1EE380u, 0x1EE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE388u;
label_1ee388:
    // 0x1ee388: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee2f0;
        }
    }
    ctx->pc = 0x1EE390u;
label_1ee390:
    // 0x1ee390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ee398u;
}
