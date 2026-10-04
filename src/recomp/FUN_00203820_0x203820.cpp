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

// Function: FUN_00203820
// Address: 0x203820 - 0x2039f0
void FUN_00203820_0x203820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203820_0x203820");
#endif

    switch (ctx->pc) {
        case 0x203890u: goto label_203890;
        case 0x203898u: goto label_203898;
        case 0x2038acu: goto label_2038ac;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038d4u: goto label_2038d4;
        case 0x203914u: goto label_203914;
        case 0x203938u: goto label_203938;
        case 0x203940u: goto label_203940;
        default: break;
    }

    ctx->pc = 0x203820u;

    // 0x203820: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x203820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x203824: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x203824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x203828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20382c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203830: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203834: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x203834u;
    {
        const bool branch_taken_0x203834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203834) {
            ctx->pc = 0x2039E0u;
            goto label_2039e0;
        }
    }
    ctx->pc = 0x20383Cu;
    // 0x20383c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x20383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x203840: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x203840u;
    {
        const bool branch_taken_0x203840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203840u;
        // 0x203844: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203840) {
            ctx->pc = 0x203990u;
            goto label_203990;
        }
    }
    ctx->pc = 0x203848u;
    // 0x203848: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20384c: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x20384Cu;
    {
        const bool branch_taken_0x20384c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20384Cu;
        // 0x203850: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20384c) {
            ctx->pc = 0x20394Cu;
            goto label_20394c;
        }
    }
    ctx->pc = 0x203854u;
    // 0x203854: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x203858: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x203858u;
    {
        const bool branch_taken_0x203858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203858u;
        // 0x20385c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203858) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203860u;
    // 0x203860: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x203860u;
    {
        const bool branch_taken_0x203860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x203860) {
            ctx->pc = 0x2038A0u;
            goto label_2038a0;
        }
    }
    ctx->pc = 0x203868u;
    // 0x203868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203868u;
    {
        const bool branch_taken_0x203868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203868) {
            ctx->pc = 0x203878u;
            goto label_203878;
        }
    }
    ctx->pc = 0x203870u;
    // 0x203870: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x203870u;
    {
        const bool branch_taken_0x203870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203870u;
        // 0x203874: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203870) {
            ctx->pc = 0x2039ECu;
            goto label_2039ec;
        }
    }
    ctx->pc = 0x203878u;
label_203878:
    // 0x203878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20387c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203880: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203888: 0xc08104c  jal         func_204130
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203888u;
    // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203888u, 0x203890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203890u;
    SET_GPR_U32(ctx, 31, 0x203898u);
    ctx->pc = 0x203894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203890u;
    // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203890u, 0x203898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203898u;
label_203898:
    // 0x203898: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x203898u;
    {
        const bool branch_taken_0x203898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203898) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038A0u;
label_2038a0:
    // 0x2038a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2038a4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2038A4u;
    SET_GPR_U32(ctx, 31, 0x2038ACu);
    ctx->pc = 0x2038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A4u;
    // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2038A4u, 0x2038ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2038b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2038b4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x2038B4u;
    SET_GPR_U32(ctx, 31, 0x2038BCu);
    ctx->pc = 0x2038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038B4u;
    // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x2038B4u, 0x2038BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038BCu;
label_2038bc:
    // 0x2038bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2038c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2038C0u;
    {
        const bool branch_taken_0x2038c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c0) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038C8u;
label_2038c8:
    // 0x2038c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2038cc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2038CCu;
    SET_GPR_U32(ctx, 31, 0x2038D4u);
    ctx->pc = 0x2038D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038CCu;
    // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2038CCu, 0x2038D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038D4u;
label_2038d4:
    // 0x2038d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2038d8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2038dc: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x2038e0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2038e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2038e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2038e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2038ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2038f0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2038f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2038f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2038fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x203900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203904: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x203908: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x20390c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x20390Cu;
    SET_GPR_U32(ctx, 31, 0x203914u);
    ctx->pc = 0x203910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20390Cu;
    // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x20390Cu, 0x203914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203914u;
label_203914:
    // 0x203914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203918: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203920: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x203924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x203928: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20392c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20392cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203930: 0xc08104c  jal         func_204130
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 31, 0x203938u);
    ctx->pc = 0x203934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203930u;
    // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203930u, 0x203938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203938u;
    SET_GPR_U32(ctx, 31, 0x203940u);
    ctx->pc = 0x20393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203938u;
    // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203938u, 0x203940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203944: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x203944u;
    {
        const bool branch_taken_0x203944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203944) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x20394Cu;
label_20394c:
    // 0x20394c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20394cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x203950: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x203954: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x203958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20395c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203960: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x203964: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203968: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20396c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203970: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203974: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203978: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20397c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20397cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x203980: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x203984: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x203988: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203988) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x203994: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x203994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x203998: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20399c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20399cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x2039a0: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x2039a4: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x2039a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2039ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2039b0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2039b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2039b8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2039bc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2039c0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2039c4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2039c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2039cc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x2039d0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2039d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x2039d4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2039d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x2039d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2039e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2039e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2039e8:
    // 0x2039e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2039ec:
    // 0x2039ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2039ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2039f0u;
}
