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

// Function: FUN_00203340
// Address: 0x203340 - 0x2035f4
void FUN_00203340_0x203340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203340_0x203340");
#endif

    switch (ctx->pc) {
        case 0x2033c0u: goto label_2033c0;
        case 0x2033c8u: goto label_2033c8;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033fcu: goto label_2033fc;
        case 0x203404u: goto label_203404;
        case 0x203414u: goto label_203414;
        case 0x203458u: goto label_203458;
        case 0x203460u: goto label_203460;
        case 0x203470u: goto label_203470;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034ccu: goto label_2034cc;
        case 0x2034dcu: goto label_2034dc;
        case 0x20350cu: goto label_20350c;
        case 0x203514u: goto label_203514;
        case 0x20351cu: goto label_20351c;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035e0u: goto label_2035e0;
        default: break;
    }

    ctx->pc = 0x203340u;

    // 0x203340: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
    // 0x203344: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20334c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203358: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20335c: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x20335cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x203360: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
    ctx->pc = 0x203360u;
    {
        const bool branch_taken_0x203360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x203364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203360u;
        // 0x203364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203360) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203368u;
    // 0x203368: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x20336c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x203370: 0x2484def0  addiu       $a0, $a0, -0x2110
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
    // 0x203374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x203378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20337c: 0x600008  jr          $v1
    ctx->pc = 0x20337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203384u: goto label_203384;
            case 0x203438u: goto label_203438;
            case 0x20352Cu: goto label_20352c;
            case 0x203534u: goto label_203534;
            case 0x20353Cu: goto label_20353c;
            case 0x203544u: goto label_203544;
            case 0x20354Cu: goto label_20354c;
            case 0x203554u: goto label_203554;
            case 0x20355Cu: goto label_20355c;
            case 0x203564u: goto label_203564;
            case 0x20356Cu: goto label_20356c;
            case 0x203574u: goto label_203574;
            case 0x20357Cu: goto label_20357c;
            case 0x203584u: goto label_203584;
            case 0x20358Cu: goto label_20358c;
            case 0x203594u: goto label_203594;
            case 0x20359Cu: goto label_20359c;
            case 0x2035A4u: goto label_2035a4;
            case 0x2035ACu: goto label_2035ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20337Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x203384u;
label_203384:
    // 0x203384: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203388: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203388u;
    {
        const bool branch_taken_0x203388 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203388u;
        // 0x20338c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203388) {
            ctx->pc = 0x203394u;
            goto label_203394;
        }
    }
    ctx->pc = 0x203390u;
    // 0x203390: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_203394:
    // 0x203394: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x203398: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x20339c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x20339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2033a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x2033E0u;
            goto label_2033e0;
        }
    }
    ctx->pc = 0x2033A8u;
    // 0x2033a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2033a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2033b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033b8: 0xc08104c  jal         func_204130
    ctx->pc = 0x2033B8u;
    SET_GPR_U32(ctx, 31, 0x2033C0u);
    ctx->pc = 0x2033BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033B8u;
    // 0x2033bc: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2033B8u, 0x2033C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033C0u;
label_2033c0:
    // 0x2033c0: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2033C0u;
    SET_GPR_U32(ctx, 31, 0x2033C8u);
    ctx->pc = 0x2033C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033C0u;
    // 0x2033c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2033C0u, 0x2033C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033C8u;
label_2033c8:
    // 0x2033c8: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2033C8u;
    SET_GPR_U32(ctx, 31, 0x2033D0u);
    ctx->pc = 0x2033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033C8u;
    // 0x2033cc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2033C8u, 0x2033D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033D0u;
label_2033d0:
    // 0x2033d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2033d4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2033d8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2033D8u;
    {
        const bool branch_taken_0x2033d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D8u;
        // 0x2033dc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033d8) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2033E0u;
label_2033e0:
    // 0x2033e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2033E0u;
    {
        const bool branch_taken_0x2033e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E0u;
        // 0x2033e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e0) {
            ctx->pc = 0x203430u;
            goto label_203430;
        }
    }
    ctx->pc = 0x2033E8u;
    // 0x2033e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2033ec: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2033f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2033f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033f4: 0xc08104c  jal         func_204130
    ctx->pc = 0x2033F4u;
    SET_GPR_U32(ctx, 31, 0x2033FCu);
    ctx->pc = 0x2033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033F4u;
    // 0x2033f8: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2033F4u, 0x2033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2033FCu;
    SET_GPR_U32(ctx, 31, 0x203404u);
    ctx->pc = 0x203400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033FCu;
    // 0x203400: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2033FCu, 0x203404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203404u;
label_203404:
    // 0x203404: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20340c: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x20340Cu;
    SET_GPR_U32(ctx, 31, 0x203414u);
    ctx->pc = 0x203410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20340Cu;
    // 0x203410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x20340Cu, 0x203414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203414u;
label_203414:
    // 0x203414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203418: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20341c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20341cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x203420: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x203420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x203424: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203428: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x203428u;
    {
        const bool branch_taken_0x203428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203428u;
        // 0x20342c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203428) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203430u;
label_203430:
    // 0x203430: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x203430u;
    {
        const bool branch_taken_0x203430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203430) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
    // 0x20343c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20343Cu;
    {
        const bool branch_taken_0x20343c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20343Cu;
        // 0x203440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20343c) {
            ctx->pc = 0x20348Cu;
            goto label_20348c;
        }
    }
    ctx->pc = 0x203444u;
    // 0x203444: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203448: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20344c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203450: 0xc08104c  jal         func_204130
    ctx->pc = 0x203450u;
    SET_GPR_U32(ctx, 31, 0x203458u);
    ctx->pc = 0x203454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203450u;
    // 0x203454: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203450u, 0x203458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203458u;
label_203458:
    // 0x203458: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203458u;
    SET_GPR_U32(ctx, 31, 0x203460u);
    ctx->pc = 0x20345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203458u;
    // 0x20345c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203458u, 0x203460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203460u;
label_203460:
    // 0x203460: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203468: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 31, 0x203470u);
    ctx->pc = 0x20346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203468u;
    // 0x20346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x203468u, 0x203470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203474: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x203478: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x203478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20347c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x20347cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x203480: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203484: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x203484u;
    {
        const bool branch_taken_0x203484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203484u;
        // 0x203488: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203484) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20348Cu;
label_20348c:
    // 0x20348c: 0x8cc20488  lw          $v0, 0x488($a2)
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1160)));
    // 0x203490: 0x284200c6  slti        $v0, $v0, 0xC6
    ctx->pc = 0x203490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)198) ? 1 : 0);
    // 0x203494: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x203494u;
    {
        const bool branch_taken_0x203494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203494u;
        // 0x203498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203494) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x20349Cu;
    // 0x20349c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2034a0: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x2034B0u;
            goto label_2034b0;
        }
    }
    ctx->pc = 0x2034A8u;
    // 0x2034a8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A8u;
        // 0x2034ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2034b4: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2034b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2034b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034bc: 0xc08104c  jal         func_204130
    ctx->pc = 0x2034BCu;
    SET_GPR_U32(ctx, 31, 0x2034C4u);
    ctx->pc = 0x2034C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034BCu;
    // 0x2034c0: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2034BCu, 0x2034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034C4u;
label_2034c4:
    // 0x2034c4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2034C4u;
    SET_GPR_U32(ctx, 31, 0x2034CCu);
    ctx->pc = 0x2034C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034C4u;
    // 0x2034c8: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2034C4u, 0x2034CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034CCu;
label_2034cc:
    // 0x2034cc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2034d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2034d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034d4: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x2034D4u;
    SET_GPR_U32(ctx, 31, 0x2034DCu);
    ctx->pc = 0x2034D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034D4u;
    // 0x2034d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x2034D4u, 0x2034DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034DCu;
label_2034dc:
    // 0x2034dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2034dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2034e0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2034e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2034e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2034e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2034e8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2034e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2034ec: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2034ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2034f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2034F0u;
    {
        const bool branch_taken_0x2034f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034F0u;
        // 0x2034f4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034f0) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2034F8u;
label_2034f8:
    // 0x2034f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2034fc: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2034fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203504: 0xc08104c  jal         func_204130
    ctx->pc = 0x203504u;
    SET_GPR_U32(ctx, 31, 0x20350Cu);
    ctx->pc = 0x203508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203504u;
    // 0x203508: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203504u, 0x20350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20350Cu;
label_20350c:
    // 0x20350c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x20350Cu;
    SET_GPR_U32(ctx, 31, 0x203514u);
    ctx->pc = 0x203510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20350Cu;
    // 0x203510: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x20350Cu, 0x203514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203514u;
label_203514:
    // 0x203514: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 31, 0x20351Cu);
    ctx->pc = 0x203518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203514u;
    // 0x203518: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203514u, 0x20351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20351Cu;
label_20351c:
    // 0x20351c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203520: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203524: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x203524u;
    {
        const bool branch_taken_0x203524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203524u;
        // 0x203528: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203524) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20352Cu;
label_20352c:
    // 0x20352c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203534u;
label_203534:
    // 0x203534: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x203534u;
    {
        const bool branch_taken_0x203534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203534u;
        // 0x203538: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203534) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20353Cu;
label_20353c:
    // 0x20353c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20353Cu;
    {
        const bool branch_taken_0x20353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20353Cu;
        // 0x203540: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20353c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203544u;
label_203544:
    // 0x203544: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x203544u;
    {
        const bool branch_taken_0x203544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203544) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20354Cu;
label_20354c:
    // 0x20354c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20354Cu;
    {
        const bool branch_taken_0x20354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20354Cu;
        // 0x203550: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20354c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203554u;
label_203554:
    // 0x203554: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x203554u;
    {
        const bool branch_taken_0x203554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203554) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20355Cu;
label_20355c:
    // 0x20355c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20355Cu;
    {
        const bool branch_taken_0x20355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20355Cu;
        // 0x203560: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20355c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x203564u;
    {
        const bool branch_taken_0x203564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203564u;
        // 0x203568: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203564) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20356Cu;
label_20356c:
    // 0x20356c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20356Cu;
    {
        const bool branch_taken_0x20356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20356Cu;
        // 0x203570: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20356c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203574u;
label_203574:
    // 0x203574: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x203574u;
    {
        const bool branch_taken_0x203574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203574u;
        // 0x203578: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203574) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20357Cu;
label_20357c:
    // 0x20357c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20357Cu;
    {
        const bool branch_taken_0x20357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20357Cu;
        // 0x203580: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20357c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203584u;
label_203584:
    // 0x203584: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x203584u;
    {
        const bool branch_taken_0x203584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203584u;
        // 0x203588: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203584) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20358Cu;
label_20358c:
    // 0x20358c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20358Cu;
    {
        const bool branch_taken_0x20358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20358Cu;
        // 0x203590: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20358c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203594u;
label_203594:
    // 0x203594: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x203594u;
    {
        const bool branch_taken_0x203594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203594u;
        // 0x203598: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203594) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20359Cu;
label_20359c:
    // 0x20359c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20359Cu;
        // 0x2035a0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20359c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2035A4u;
label_2035a4:
    // 0x2035a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2035A4u;
    {
        const bool branch_taken_0x2035a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A4u;
        // 0x2035a8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035a4) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2035ACu;
label_2035ac:
    // 0x2035ac: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x2035b0: 0xc083cc8  jal         func_20F320
    ctx->pc = 0x2035B0u;
    SET_GPR_U32(ctx, 31, 0x2035B8u);
    ctx->pc = 0x2035B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035B0u;
    // 0x2035b4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F320u, 0x2035B0u, 0x2035B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035B8u;
label_2035b8:
    // 0x2035b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2035c0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2035c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2035c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035c8: 0xc08104c  jal         func_204130
    ctx->pc = 0x2035C8u;
    SET_GPR_U32(ctx, 31, 0x2035D0u);
    ctx->pc = 0x2035CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035C8u;
    // 0x2035cc: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2035C8u, 0x2035D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035D0u;
label_2035d0:
    // 0x2035d0: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2035D0u;
    SET_GPR_U32(ctx, 31, 0x2035D8u);
    ctx->pc = 0x2035D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D0u;
    // 0x2035d4: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2035D0u, 0x2035D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035D8u;
label_2035d8:
    // 0x2035d8: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2035D8u;
    SET_GPR_U32(ctx, 31, 0x2035E0u);
    ctx->pc = 0x2035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D8u;
    // 0x2035dc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2035D8u, 0x2035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035E0u;
label_2035e0:
    // 0x2035e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2035e4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2035e8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2035e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2035ec: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2035f0:
    // 0x2035f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2035f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2035f4u;
}
