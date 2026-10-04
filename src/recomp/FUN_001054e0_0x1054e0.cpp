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

// Function: FUN_001054e0
// Address: 0x1054e0 - 0x105684
void FUN_001054e0_0x1054e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001054e0_0x1054e0");
#endif

    switch (ctx->pc) {
        case 0x105518u: goto label_105518;
        case 0x10557cu: goto label_10557c;
        case 0x105598u: goto label_105598;
        case 0x1055c8u: goto label_1055c8;
        case 0x105600u: goto label_105600;
        case 0x10561cu: goto label_10561c;
        case 0x10562cu: goto label_10562c;
        case 0x10564cu: goto label_10564c;
        default: break;
    }

    ctx->pc = 0x1054e0u;

    // 0x1054e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1054e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1054e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1054e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1054e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1054ec: 0x8f84846c  lw          $a0, -0x7B94($gp)
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1054f0: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x1054f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1054f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1054f8: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x1054F8u;
    {
        const bool branch_taken_0x1054f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054f8) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105500u;
    // 0x105500: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x105500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105504: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x105504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x105508: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x10550c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10550cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105510: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x105510u;
    SET_GPR_U32(ctx, 31, 0x105518u);
    ctx->pc = 0x105514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105510u;
    // 0x105514: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x105510u, 0x105518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105518u;
label_105518:
    // 0x105518: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x105518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10551c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x105520: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x105520u;
    {
        const bool branch_taken_0x105520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x105524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105520u;
        // 0x105524: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105520) {
            ctx->pc = 0x10565Cu;
            goto label_10565c;
        }
    }
    ctx->pc = 0x105528u;
    // 0x105528: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x105528u;
    {
        const bool branch_taken_0x105528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x105528) {
            ctx->pc = 0x105614u;
            goto label_105614;
        }
    }
    ctx->pc = 0x105530u;
    // 0x105530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105534: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x105534u;
    {
        const bool branch_taken_0x105534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x105538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105534u;
        // 0x105538: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105534) {
            ctx->pc = 0x1055D4u;
            goto label_1055d4;
        }
    }
    ctx->pc = 0x10553Cu;
    // 0x10553c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10553Cu;
    {
        const bool branch_taken_0x10553c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10553Cu;
        // 0x105540: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10553c) {
            ctx->pc = 0x1055A0u;
            goto label_1055a0;
        }
    }
    ctx->pc = 0x105544u;
    // 0x105544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105548: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105548u;
    {
        const bool branch_taken_0x105548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105548u;
        // 0x10554c: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105548) {
            ctx->pc = 0x105558u;
            goto label_105558;
        }
    }
    ctx->pc = 0x105550u;
    // 0x105550: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x105550u;
    {
        const bool branch_taken_0x105550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105550u;
        // 0x105554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105550) {
            ctx->pc = 0x105684u;
            return;
        }
    }
    ctx->pc = 0x105558u;
label_105558:
    // 0x105558: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105558u;
    {
        const bool branch_taken_0x105558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105558) {
            ctx->pc = 0x105568u;
            goto label_105568;
        }
    }
    ctx->pc = 0x105560u;
    // 0x105560: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x105560u;
    {
        const bool branch_taken_0x105560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105560u;
        // 0x105564: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105560) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105568u;
label_105568:
    // 0x105568: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x105568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x10556c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10556Cu;
    {
        const bool branch_taken_0x10556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10556Cu;
        // 0x105570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10556c) {
            ctx->pc = 0x105590u;
            goto label_105590;
        }
    }
    ctx->pc = 0x105574u;
    // 0x105574: 0xc08d9ee  jal         func_2367B8
    ctx->pc = 0x105574u;
    SET_GPR_U32(ctx, 31, 0x10557Cu);
    ctx->pc = 0x105578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105574u;
    // 0x105578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2367B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2367B8u, 0x105574u, 0x10557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10557Cu;
label_10557c:
    // 0x10557c: 0x2c41005b  sltiu       $at, $v0, 0x5B
    ctx->pc = 0x10557cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x105580: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x105580u;
    {
        const bool branch_taken_0x105580 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x105580) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105588u;
    // 0x105588: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x105588u;
    {
        const bool branch_taken_0x105588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105588u;
        // 0x10558c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105588) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105590u;
label_105590:
    // 0x105590: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105590u;
    SET_GPR_U32(ctx, 31, 0x105598u);
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105590u, 0x105598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105598u;
label_105598:
    // 0x105598: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x105598u;
    {
        const bool branch_taken_0x105598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105598) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x1055A0u;
label_1055a0:
    // 0x1055a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055A0u;
    {
        const bool branch_taken_0x1055a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055a0) {
            ctx->pc = 0x1055B4u;
            goto label_1055b4;
        }
    }
    ctx->pc = 0x1055A8u;
    // 0x1055a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1055a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1055ac: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1055ACu;
    {
        const bool branch_taken_0x1055ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055ACu;
        // 0x1055b0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055ac) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x1055B4u;
label_1055b4:
    // 0x1055b4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1055b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1055b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055B8u;
    {
        const bool branch_taken_0x1055b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B8u;
        // 0x1055bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055b8) {
            ctx->pc = 0x1055CCu;
            goto label_1055cc;
        }
    }
    ctx->pc = 0x1055C0u;
    // 0x1055c0: 0xc05af2c  jal         func_16BCB0
    ctx->pc = 0x1055C0u;
    SET_GPR_U32(ctx, 31, 0x1055C8u);
    ctx->pc = 0x16BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCB0u, 0x1055C0u, 0x1055C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055C8u;
label_1055c8:
    // 0x1055c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1055c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1055cc:
    // 0x1055cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055CCu;
        // 0x1055d0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x1055D4u;
label_1055d4:
    // 0x1055d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055D4u;
    {
        const bool branch_taken_0x1055d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055d4) {
            ctx->pc = 0x1055E8u;
            goto label_1055e8;
        }
    }
    ctx->pc = 0x1055DCu;
    // 0x1055dc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1055dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1055e0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1055E0u;
    {
        const bool branch_taken_0x1055e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055e0) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x1055E8u;
label_1055e8:
    // 0x1055e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1055ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1055f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1055f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1055f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1055f8: 0xc06c0ea  jal         func_1B03A8
    ctx->pc = 0x1055F8u;
    SET_GPR_U32(ctx, 31, 0x105600u);
    ctx->pc = 0x1055FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055F8u;
    // 0x1055fc: 0x27878010  addiu       $a3, $gp, -0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B03A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03A8u, 0x1055F8u, 0x105600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105600u;
label_105600:
    // 0x105600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105604: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x105604u;
    {
        const bool branch_taken_0x105604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x105608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105604u;
        // 0x105608: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105604) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x10560Cu;
    // 0x10560c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10560Cu;
    {
        const bool branch_taken_0x10560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10560Cu;
        // 0x105610: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10560c) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105614u;
label_105614:
    // 0x105614: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x105614u;
    SET_GPR_U32(ctx, 31, 0x10561Cu);
    ctx->pc = 0x105618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105614u;
    // 0x105618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x105614u, 0x10561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10561Cu;
label_10561c:
    // 0x10561c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10561Cu;
    {
        const bool branch_taken_0x10561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10561c) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105624u;
    // 0x105624: 0xc06c1b4  jal         func_1B06D0
    ctx->pc = 0x105624u;
    SET_GPR_U32(ctx, 31, 0x10562Cu);
    ctx->pc = 0x1B06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B06D0u, 0x105624u, 0x10562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10562Cu;
label_10562c:
    // 0x10562c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10562Cu;
    {
        const bool branch_taken_0x10562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10562Cu;
        // 0x105630: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10562c) {
            ctx->pc = 0x105654u;
            goto label_105654;
        }
    }
    ctx->pc = 0x105634u;
    // 0x105634: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105638: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x105638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10563c: 0x8f828470  lw          $v0, -0x7B90($gp)
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105644: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105644u;
    SET_GPR_U32(ctx, 31, 0x10564Cu);
    ctx->pc = 0x105648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105644u;
    // 0x105648: 0xaf828470  sw          $v0, -0x7B90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105644u, 0x10564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10564Cu;
label_10564c:
    // 0x10564c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10564Cu;
    {
        const bool branch_taken_0x10564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10564c) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105654u;
label_105654:
    // 0x105654: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x105654u;
    {
        const bool branch_taken_0x105654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105654u;
        // 0x105658: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105654) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x10565Cu;
label_10565c:
    // 0x10565c: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x10565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105660: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x105660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105664: 0xaf848470  sw          $a0, -0x7B90($gp)
    ctx->pc = 0x105664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 4));
    // 0x105668: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x10566c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x10566cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105670: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105670u;
    {
        const bool branch_taken_0x105670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105670) {
            ctx->pc = 0x105680u;
            goto label_105680;
        }
    }
    ctx->pc = 0x105678u;
    // 0x105678: 0xaf808470  sw          $zero, -0x7B90($gp)
    ctx->pc = 0x105678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 0));
    // 0x10567c: 0xaf80846c  sw          $zero, -0x7B94($gp)
    ctx->pc = 0x10567cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 0));
label_105680:
    // 0x105680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x105684u;
}
