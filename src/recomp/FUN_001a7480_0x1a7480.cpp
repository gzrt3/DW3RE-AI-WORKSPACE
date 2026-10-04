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

// Function: FUN_001a7480
// Address: 0x1a7480 - 0x1a75d0
void FUN_001a7480_0x1a7480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7480_0x1a7480");
#endif

    switch (ctx->pc) {
        case 0x1a74c0u: goto label_1a74c0;
        case 0x1a7508u: goto label_1a7508;
        case 0x1a7518u: goto label_1a7518;
        case 0x1a7540u: goto label_1a7540;
        case 0x1a7550u: goto label_1a7550;
        case 0x1a7558u: goto label_1a7558;
        case 0x1a7568u: goto label_1a7568;
        case 0x1a7570u: goto label_1a7570;
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75b0u: goto label_1a75b0;
        default: break;
    }

    ctx->pc = 0x1a7480u;

    // 0x1a7480: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a7484: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a7484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a7488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a748c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1a7490: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a7490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1a7494: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a7498: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a7498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a749c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a749cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a74a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a74a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a74ac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a74acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a74b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a74b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a74b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74b8: 0xc069c8c  jal         func_1A7230
    ctx->pc = 0x1A74B8u;
    SET_GPR_U32(ctx, 31, 0x1A74C0u);
    ctx->pc = 0x1A74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74B8u;
    // 0x1a74bc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7230u, 0x1A74B8u, 0x1A74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74C0u;
label_1a74c0:
    // 0x1a74c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a74c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74c4: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74C4u;
        // 0x1a74c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a74d0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1a74d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a74d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1a74d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a74dc: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1a74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x1a74e0: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1a74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x1a74e4: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1a74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x1a74e8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a74e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1a74ec: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A74ECu;
    {
        const bool branch_taken_0x1a74ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74ECu;
        // 0x1a74f0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74ec) {
            ctx->pc = 0x1A7578u;
            goto label_1a7578;
        }
    }
    ctx->pc = 0x1A74F4u;
    // 0x1a74f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a74f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a74fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a7500: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A7500u;
    SET_GPR_U32(ctx, 31, 0x1A7508u);
    ctx->pc = 0x1A7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7500u;
    // 0x1a7504: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A7500u, 0x1A7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7508u;
label_1a7508:
    // 0x1a7508: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7508u;
    {
        const bool branch_taken_0x1a7508 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7508u;
        // 0x1a750c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7508) {
            ctx->pc = 0x1A7520u;
            goto label_1a7520;
        }
    }
    ctx->pc = 0x1A7510u;
    // 0x1a7510: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7510u;
    SET_GPR_U32(ctx, 31, 0x1A7518u);
    ctx->pc = 0x1A7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7510u;
    // 0x1a7514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7510u, 0x1A7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7518u;
label_1a7518:
    // 0x1a7518: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A7518u;
    {
        const bool branch_taken_0x1a7518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7518u;
        // 0x1a751c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7518) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7520u;
label_1a7520:
    // 0x1a7520: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7528: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1a7528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1a752c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a7534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7538: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7538u;
    SET_GPR_U32(ctx, 31, 0x1A7540u);
    ctx->pc = 0x1A753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7538u;
    // 0x1a753c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7538u, 0x1A7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7540u;
label_1a7540:
    // 0x1a7540: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7540u;
    {
        const bool branch_taken_0x1a7540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7540) {
            ctx->pc = 0x1A7560u;
            goto label_1a7560;
        }
    }
    ctx->pc = 0x1A7548u;
    // 0x1a7548: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7548u;
    SET_GPR_U32(ctx, 31, 0x1A7550u);
    ctx->pc = 0x1A754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7548u;
    // 0x1a754c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7548u, 0x1A7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7550u;
label_1a7550:
    // 0x1a7550: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7550u;
    SET_GPR_U32(ctx, 31, 0x1A7558u);
    ctx->pc = 0x1A7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7550u;
    // 0x1a7554: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7550u, 0x1A7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7558u;
label_1a7558:
    // 0x1a7558: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A7558u;
    {
        const bool branch_taken_0x1a7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7558u;
        // 0x1a755c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7558) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7560u;
label_1a7560:
    // 0x1a7560: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A7560u;
    SET_GPR_U32(ctx, 31, 0x1A7568u);
    ctx->pc = 0x1A7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7560u;
    // 0x1a7564: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A7560u, 0x1A7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7568u;
label_1a7568:
    // 0x1a7568: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7568u;
    SET_GPR_U32(ctx, 31, 0x1A7570u);
    ctx->pc = 0x1A756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7568u;
    // 0x1a756c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7568u, 0x1A7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7570u;
label_1a7570:
    // 0x1a7570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7570u;
    {
        const bool branch_taken_0x1a7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7570) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7578u;
label_1a7578:
    // 0x1a7578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a757c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7580: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a7580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a7584: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1a7588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a758c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a7594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7598: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7598u;
    SET_GPR_U32(ctx, 31, 0x1A75A0u);
    ctx->pc = 0x1A759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7598u;
    // 0x1a759c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7598u, 0x1A75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75A0u;
label_1a75a0:
    // 0x1a75a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A75A0u;
    {
        const bool branch_taken_0x1a75a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A0u;
        // 0x1a75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75a0) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A75A8u;
    // 0x1a75a8: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A75A8u;
    SET_GPR_U32(ctx, 31, 0x1A75B0u);
    ctx->pc = 0x1A75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75A8u;
    // 0x1a75ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A75A8u, 0x1A75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75B0u;
label_1a75b0:
    // 0x1a75b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a75b4:
    // 0x1a75b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a75b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a75b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a75b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a75bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a75bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a75c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a75c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a75c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a75c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a75cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a75d0u;
}
