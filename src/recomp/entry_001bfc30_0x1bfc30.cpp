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

// Function: entry_001bfc30
// Address: 0x1bfc30 - 0x1bfd80
void entry_001bfc30_0x1bfc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfc30_0x1bfc30");
#endif

    switch (ctx->pc) {
        case 0x1bfca4u: goto label_1bfca4;
        default: break;
    }

    ctx->pc = 0x1bfc30u;

    // 0x1bfc30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bfc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfc38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfc3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfc44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC48u;
        // 0x1bfc4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC50u;
    // 0x1bfc50: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x1bfc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
    // 0x1bfc54: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1BFC54u;
    {
        const bool branch_taken_0x1bfc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC54u;
        // 0x1bfc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc54) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC5Cu;
    // 0x1bfc5c: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x1bfc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
    // 0x1bfc60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFC60u;
    {
        const bool branch_taken_0x1bfc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc60) {
            ctx->pc = 0x1BFC70u;
            goto label_1bfc70;
        }
    }
    ctx->pc = 0x1BFC68u;
    // 0x1bfc68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1BFC68u;
    {
        const bool branch_taken_0x1bfc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC68u;
        // 0x1bfc6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc68) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC70u;
label_1bfc70:
    // 0x1bfc70: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x1bfc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x1bfc74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFC74u;
    {
        const bool branch_taken_0x1bfc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc74) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFC7Cu;
    // 0x1bfc7c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1bfc80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFC80u;
    {
        const bool branch_taken_0x1bfc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC80u;
        // 0x1bfc84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc80) {
            ctx->pc = 0x1BFC90u;
            goto label_1bfc90;
        }
    }
    ctx->pc = 0x1BFC88u;
label_1bfc88:
    // 0x1bfc88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BFC88u;
    {
        const bool branch_taken_0x1bfc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC88u;
        // 0x1bfc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc88) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC90u;
label_1bfc90:
    // 0x1bfc90: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1bfc90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc94: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1bfc98: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1bfc9c: 0x25291300  addiu       $t1, $t1, 0x1300
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4864));
    // 0x1bfca0: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1bfca4:
    // 0x1bfca4: 0x0  nop
    ctx->pc = 0x1bfca4u;
    // NOP
    // 0x1bfca8: 0x12d3021  addu        $a2, $t1, $t5
    ctx->pc = 0x1bfca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1bfcac: 0x90c3367c  lbu         $v1, 0x367C($a2)
    ctx->pc = 0x1bfcacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
    // 0x1bfcb0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BFCB0u;
    {
        const bool branch_taken_0x1bfcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfcb0) {
            ctx->pc = 0x1BFD38u;
            goto label_1bfd38;
        }
    }
    ctx->pc = 0x1BFCB8u;
    // 0x1bfcb8: 0x8cc63668  lw          $a2, 0x3668($a2)
    ctx->pc = 0x1bfcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13928)));
    // 0x1bfcbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfcbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcc0: 0x9087021b  lbu         $a3, 0x21B($a0)
    ctx->pc = 0x1bfcc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 539)));
    // 0x1bfcc4: 0x9083021a  lbu         $v1, 0x21A($a0)
    ctx->pc = 0x1bfcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 538)));
    // 0x1bfcc8: 0x90c8021b  lbu         $t0, 0x21B($a2)
    ctx->pc = 0x1bfcc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 539)));
    // 0x1bfccc: 0x90c6021a  lbu         $a2, 0x21A($a2)
    ctx->pc = 0x1bfcccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 538)));
    // 0x1bfcd0: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1bfcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1bfcd4: 0x100382a  slt         $a3, $t0, $zero
    ctx->pc = 0x1bfcd4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfcd8: 0x86022  neg         $t4, $t0
    ctx->pc = 0x1bfcd8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 8), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1bfcdc: 0x107600a  movz        $t4, $t0, $a3
    ctx->pc = 0x1bfcdcu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 8));
    // 0x1bfce0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1bfce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bfce4: 0xc0182a  slt         $v1, $a2, $zero
    ctx->pc = 0x1bfce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfce8: 0x63822  neg         $a3, $a2
    ctx->pc = 0x1bfce8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 6), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfcec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFCECu;
    {
        const bool branch_taken_0x1bfcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCECu;
        // 0x1bfcf0: 0xc3380a  movz        $a3, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcec) {
            ctx->pc = 0x1BFD10u;
            goto label_1bfd10;
        }
    }
    ctx->pc = 0x1BFCF4u;
    // 0x1bfcf4: 0x28e10004  slti        $at, $a3, 0x4
    ctx->pc = 0x1bfcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfcf8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFCF8u;
    {
        const bool branch_taken_0x1bfcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCF8u;
        // 0x1bfcfc: 0x29810004  slti        $at, $t4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcf8) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD00u;
    // 0x1bfd00: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFD00u;
    {
        const bool branch_taken_0x1bfd00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd00) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD08u;
    // 0x1bfd08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFD08u;
    {
        const bool branch_taken_0x1bfd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD08u;
        // 0x1bfd0c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd08) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD10u;
label_1bfd10:
    // 0x1bfd10: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1bfd10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bfd14: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFD14u;
    {
        const bool branch_taken_0x1bfd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD14u;
        // 0x1bfd18: 0x29810006  slti        $at, $t4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd14) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD1Cu;
    // 0x1bfd1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFD1Cu;
    {
        const bool branch_taken_0x1bfd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd1c) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD24u;
    // 0x1bfd24: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfd28:
    // 0x1bfd28: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFD28u;
    {
        const bool branch_taken_0x1bfd28 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd28) {
            ctx->pc = 0x1BFD38u;
            goto label_1bfd38;
        }
    }
    ctx->pc = 0x1BFD30u;
    // 0x1bfd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFD30u;
    {
        const bool branch_taken_0x1bfd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD30u;
        // 0x1bfd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd30) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1bfd3c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x1bfd3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfd40: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BFD40u;
    {
        const bool branch_taken_0x1bfd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD40u;
        // 0x1bfd44: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd40) {
            ctx->pc = 0x1BFCA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfca4;
        }
    }
    ctx->pc = 0x1BFD48u;
label_1bfd48:
    // 0x1bfd48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD50u;
    // 0x1bfd50: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x1bfd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1bfd54: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFD54u;
    {
        const bool branch_taken_0x1bfd54 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bfd54) {
            ctx->pc = 0x1BFD6Cu;
            goto label_1bfd6c;
        }
    }
    ctx->pc = 0x1BFD5Cu;
    // 0x1bfd5c: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1bfd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bfd60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd64: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1bfd64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bfd68: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x1bfd68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bfd6c:
    // 0x1bfd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD74u;
    // 0x1bfd74: 0x0  nop
    ctx->pc = 0x1bfd74u;
    // NOP
    // 0x1bfd78: 0x0  nop
    ctx->pc = 0x1bfd78u;
    // NOP
    // 0x1bfd7c: 0x0  nop
    ctx->pc = 0x1bfd7cu;
    // NOP
    ctx->pc = 0x1bfd80u;
}
