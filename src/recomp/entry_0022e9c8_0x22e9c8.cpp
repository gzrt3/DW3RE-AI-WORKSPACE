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

// Function: entry_0022e9c8
// Address: 0x22e9c8 - 0x22ec00
void entry_0022e9c8_0x22e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e9c8_0x22e9c8");
#endif

    switch (ctx->pc) {
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb90u: goto label_22eb90;
        case 0x22ebc8u: goto label_22ebc8;
        default: break;
    }

    ctx->pc = 0x22e9c8u;

    // 0x22e9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e9cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D4u;
        // 0x22e9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E9DCu;
    // 0x22e9dc: 0x0  nop
    ctx->pc = 0x22e9dcu;
    // NOP
    // 0x22e9e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22e9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9ec: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x22e9f0: 0x25089f20  addiu       $t0, $t0, -0x60E0
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942496));
label_22e9f4:
    // 0x22e9f4: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x22e9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x22e9f8: 0x90e601c0  lbu         $a2, 0x1C0($a3)
    ctx->pc = 0x22e9f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 448)));
    // 0x22e9fc: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x22e9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x22ea00: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x22EA00u;
    {
        const bool branch_taken_0x22ea00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea00) {
            ctx->pc = 0x22EA50u;
            goto label_22ea50;
        }
    }
    ctx->pc = 0x22EA08u;
    // 0x22ea08: 0x90e701c1  lbu         $a3, 0x1C1($a3)
    ctx->pc = 0x22ea08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 449)));
    // 0x22ea0c: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x22ea0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22ea10: 0x14e60012  bne         $a3, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x22EA10u;
    {
        const bool branch_taken_0x22ea10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x22ea10) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA18u;
    // 0x22ea18: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x22ea18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ea1c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x22ea20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ea24: 0x2463a0e0  addiu       $v1, $v1, -0x5F20
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942944));
    // 0x22ea28: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x22ea2c: 0x6280b  movn        $a1, $zero, $a2
    ctx->pc = 0x22ea2cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x22ea30: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x22ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22ea34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22ea34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22ea38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22ea3c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22ea40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22ea40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ea44: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22ea48: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x22EA48u;
    {
        const bool branch_taken_0x22ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA48u;
        // 0x22ea4c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea48) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EA50u;
label_22ea50:
    // 0x22ea50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EA50u;
    {
        const bool branch_taken_0x22ea50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea50) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA58u;
    // 0x22ea58: 0x24e301c0  addiu       $v1, $a3, 0x1C0
    ctx->pc = 0x22ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
label_22ea5c:
    // 0x22ea5c: 0x0  nop
    ctx->pc = 0x22ea5cu;
    // NOP
    // 0x22ea60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22ea60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x22ea64: 0x29260006  slti        $a2, $t1, 0x6
    ctx->pc = 0x22ea64u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22ea68: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22EA68u;
    {
        const bool branch_taken_0x22ea68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA68u;
        // 0x22ea6c: 0x254a0050  addiu       $t2, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea68) {
            ctx->pc = 0x22E9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e9f4;
        }
    }
    ctx->pc = 0x22EA70u;
    // 0x22ea70: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x22EA70u;
    {
        const bool branch_taken_0x22ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea70) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EA78u;
    // 0x22ea78: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x22ea78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ea7c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x22ea7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ea80: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x22ea84: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x22ea84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22ea88: 0x84880004  lh          $t0, 0x4($a0)
    ctx->pc = 0x22ea88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ea8c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x22ea8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ea90: 0x8380b  movn        $a3, $zero, $t0
    ctx->pc = 0x22ea90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x22ea94: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x22ea94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22ea98: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x22ea98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x22ea9c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x22ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22eaa0: 0x80860002  lb          $a2, 0x2($a0)
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22eaa4: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x22eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x22eaa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22eaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22eaac: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x22eaacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22eab0: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22EB18u;
            goto label_22eb18;
        }
    }
    ctx->pc = 0x22EAB8u;
    // 0x22eab8: 0x8f8985d0  lw          $t1, -0x7A30($gp)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x22eabc: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22EABCu;
    {
        const bool branch_taken_0x22eabc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EABCu;
        // 0x22eac0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eabc) {
            ctx->pc = 0x22EB0Cu;
            goto label_22eb0c;
        }
    }
    ctx->pc = 0x22EAC4u;
    // 0x22eac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22eac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eac8:
    // 0x22eac8: 0x91270096  lbu         $a3, 0x96($t1)
    ctx->pc = 0x22eac8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 150)));
    // 0x22eacc: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x22eaccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x22ead0: 0x14e6000b  bne         $a3, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x22EAD0u;
    {
        const bool branch_taken_0x22ead0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x22EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAD0u;
        // 0x22ead4: 0x29410010  slti        $at, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ead0) {
            ctx->pc = 0x22EB00u;
            goto label_22eb00;
        }
    }
    ctx->pc = 0x22EAD8u;
    // 0x22ead8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x22EAD8u;
    {
        const bool branch_taken_0x22ead8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ead8) {
            ctx->pc = 0x22EB0Cu;
            goto label_22eb0c;
        }
    }
    ctx->pc = 0x22EAE0u;
    // 0x22eae0: 0x8d260090  lw          $a2, 0x90($t1)
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x22eae4: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22eae8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22eaec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x22eaecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x22eaf0: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x22eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x22eaf4: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x22eaf8: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x22eaf8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x22eafc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x22eafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_22eb00:
    // 0x22eb00: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x22eb04: 0x1520fff0  bnez        $t1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22EB04u;
    {
        const bool branch_taken_0x22eb04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb04) {
            ctx->pc = 0x22EAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eac8;
        }
    }
    ctx->pc = 0x22EB0Cu;
label_22eb0c:
    // 0x22eb0c: 0x0  nop
    ctx->pc = 0x22eb0cu;
    // NOP
    // 0x22eb10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22EB10u;
    {
        const bool branch_taken_0x22eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB10u;
        // 0x22eb14: 0xa06a0002  sb          $t2, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb10) {
            ctx->pc = 0x22EB5Cu;
            goto label_22eb5c;
        }
    }
    ctx->pc = 0x22EB18u;
label_22eb18:
    // 0x22eb18: 0x8f8885d0  lw          $t0, -0x7A30($gp)
    ctx->pc = 0x22eb18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x22eb1c: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x22EB1Cu;
    {
        const bool branch_taken_0x22eb1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb1c) {
            ctx->pc = 0x22EB5Cu;
            goto label_22eb5c;
        }
    }
    ctx->pc = 0x22EB24u;
label_22eb24:
    // 0x22eb24: 0x91070096  lbu         $a3, 0x96($t0)
    ctx->pc = 0x22eb24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 150)));
    // 0x22eb28: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x22eb28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x22eb2c: 0x14e60007  bne         $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EB2Cu;
    {
        const bool branch_taken_0x22eb2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x22eb2c) {
            ctx->pc = 0x22EB4Cu;
            goto label_22eb4c;
        }
    }
    ctx->pc = 0x22EB34u;
    // 0x22eb34: 0x8d050090  lw          $a1, 0x90($t0)
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x22eb38: 0x30a60010  andi        $a2, $a1, 0x10
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x22eb3c: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x22eb3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x22eb40: 0xad050090  sw          $a1, 0x90($t0)
    ctx->pc = 0x22eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 5));
    // 0x22eb44: 0x6282b  sltu        $a1, $zero, $a2
    ctx->pc = 0x22eb44u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x22eb48: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x22eb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_22eb4c:
    // 0x22eb4c: 0x0  nop
    ctx->pc = 0x22eb4cu;
    // NOP
    // 0x22eb50: 0x8d080084  lw          $t0, 0x84($t0)
    ctx->pc = 0x22eb50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x22eb54: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22EB54u;
    {
        const bool branch_taken_0x22eb54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb54) {
            ctx->pc = 0x22EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eb24;
        }
    }
    ctx->pc = 0x22EB5Cu;
label_22eb5c:
    // 0x22eb5c: 0x0  nop
    ctx->pc = 0x22eb5cu;
    // NOP
    // 0x22eb60: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22eb64: 0x5300a  movz        $a2, $zero, $a1
    ctx->pc = 0x22eb64u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x22eb68: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x22eb68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eb6c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x22eb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x22eb70: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22eb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22eb74: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x22eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x22eb78: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22eb7c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22EB7Cu;
    {
        const bool branch_taken_0x22eb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB7Cu;
        // 0x22eb80: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb7c) {
            ctx->pc = 0x22EBBCu;
            goto label_22ebbc;
        }
    }
    ctx->pc = 0x22EB84u;
    // 0x22eb84: 0x8f8684b0  lw          $a2, -0x7B50($gp)
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x22eb88: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x22EB88u;
    {
        const bool branch_taken_0x22eb88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB88u;
        // 0x22eb8c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb88) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EB90u;
label_22eb90:
    // 0x22eb90: 0x90c3005d  lbu         $v1, 0x5D($a2)
    ctx->pc = 0x22eb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
    // 0x22eb94: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EB94u;
    {
        const bool branch_taken_0x22eb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22eb94) {
            ctx->pc = 0x22EBA8u;
            goto label_22eba8;
        }
    }
    ctx->pc = 0x22EB9Cu;
    // 0x22eb9c: 0x94c30056  lhu         $v1, 0x56($a2)
    ctx->pc = 0x22eb9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
    // 0x22eba0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22eba4: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x22eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
label_22eba8:
    // 0x22eba8: 0x8cc60044  lw          $a2, 0x44($a2)
    ctx->pc = 0x22eba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x22ebac: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22EBACu;
    {
        const bool branch_taken_0x22ebac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebac) {
            ctx->pc = 0x22EB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eb90;
        }
    }
    ctx->pc = 0x22EBB4u;
    // 0x22ebb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22EBB4u;
    {
        const bool branch_taken_0x22ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebb4) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EBBCu;
label_22ebbc:
    // 0x22ebbc: 0x8f8684b0  lw          $a2, -0x7B50($gp)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x22ebc0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x22EBC0u;
    {
        const bool branch_taken_0x22ebc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBC0u;
        // 0x22ebc4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebc0) {
            ctx->pc = 0x22EBECu;
            goto label_22ebec;
        }
    }
    ctx->pc = 0x22EBC8u;
label_22ebc8:
    // 0x22ebc8: 0x90c3005d  lbu         $v1, 0x5D($a2)
    ctx->pc = 0x22ebc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
    // 0x22ebcc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EBCCu;
    {
        const bool branch_taken_0x22ebcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ebcc) {
            ctx->pc = 0x22EBE0u;
            goto label_22ebe0;
        }
    }
    ctx->pc = 0x22EBD4u;
    // 0x22ebd4: 0x94c30056  lhu         $v1, 0x56($a2)
    ctx->pc = 0x22ebd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
    // 0x22ebd8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x22ebd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x22ebdc: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x22ebdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ebe0:
    // 0x22ebe0: 0x8cc60044  lw          $a2, 0x44($a2)
    ctx->pc = 0x22ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x22ebe4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22EBE4u;
    {
        const bool branch_taken_0x22ebe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebe4) {
            ctx->pc = 0x22EBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ebc8;
        }
    }
    ctx->pc = 0x22EBECu;
label_22ebec:
    // 0x22ebec: 0x0  nop
    ctx->pc = 0x22ebecu;
    // NOP
label_22ebf0:
    // 0x22ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EBF8u;
    // 0x22ebf8: 0x0  nop
    ctx->pc = 0x22ebf8u;
    // NOP
    // 0x22ebfc: 0x0  nop
    ctx->pc = 0x22ebfcu;
    // NOP
    ctx->pc = 0x22ec00u;
}
