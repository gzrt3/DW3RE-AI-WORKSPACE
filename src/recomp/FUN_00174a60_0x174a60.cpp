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

// Function: FUN_00174a60
// Address: 0x174a60 - 0x174cd4
void FUN_00174a60_0x174a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174a60_0x174a60");
#endif

    switch (ctx->pc) {
        case 0x174a78u: goto label_174a78;
        case 0x174a8cu: goto label_174a8c;
        case 0x174b14u: goto label_174b14;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b94u: goto label_174b94;
        case 0x174ba4u: goto label_174ba4;
        case 0x174bf0u: goto label_174bf0;
        case 0x174c1cu: goto label_174c1c;
        case 0x174c30u: goto label_174c30;
        case 0x174c44u: goto label_174c44;
        case 0x174c90u: goto label_174c90;
        case 0x174c9cu: goto label_174c9c;
        case 0x174cc8u: goto label_174cc8;
        default: break;
    }

    ctx->pc = 0x174a60u;

    // 0x174a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a70: 0xc05b648  jal         func_16D920
    ctx->pc = 0x174A70u;
    SET_GPR_U32(ctx, 31, 0x174A78u);
    ctx->pc = 0x174A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A70u;
    // 0x174a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D920u, 0x174A70u, 0x174A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A78u;
label_174a78:
    // 0x174a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a7c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x174A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A7Cu;
        // 0x174a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174A98u;
            goto label_174a98;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0xc05ae70  jal         func_16B9C0
    ctx->pc = 0x174A84u;
    SET_GPR_U32(ctx, 31, 0x174A8Cu);
    ctx->pc = 0x16B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9C0u, 0x174A84u, 0x174A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A8Cu;
label_174a8c:
    // 0x174a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A8Cu;
    {
        const bool branch_taken_0x174a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a8c) {
            ctx->pc = 0x174AA0u;
            goto label_174aa0;
        }
    }
    ctx->pc = 0x174A94u;
    // 0x174a94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a98:
    // 0x174a98: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x174A98u;
    {
        const bool branch_taken_0x174a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a98) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174AA0u;
label_174aa0:
    // 0x174aa0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174aa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174aa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174AA8u;
    {
        const bool branch_taken_0x174aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA8u;
        // 0x174aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa8) {
            ctx->pc = 0x174AD8u;
            goto label_174ad8;
        }
    }
    ctx->pc = 0x174AB0u;
    // 0x174ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174ab4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174AB4u;
    {
        const bool branch_taken_0x174ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174ab4) {
            ctx->pc = 0x174AD4u;
            goto label_174ad4;
        }
    }
    ctx->pc = 0x174ABCu;
    // 0x174abc: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x174ABCu;
    {
        const bool branch_taken_0x174abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174abc) {
            ctx->pc = 0x174CB0u;
            goto label_174cb0;
        }
    }
    ctx->pc = 0x174AC4u;
    // 0x174ac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174ac8: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x174ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x174acc: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x174ACCu;
    {
        const bool branch_taken_0x174acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174acc) {
            ctx->pc = 0x174CB0u;
            goto label_174cb0;
        }
    }
    ctx->pc = 0x174AD4u;
label_174ad4:
    // 0x174ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174ad8:
    // 0x174ad8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174AD8u;
    {
        const bool branch_taken_0x174ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174ad8) {
            ctx->pc = 0x174B34u;
            goto label_174b34;
        }
    }
    ctx->pc = 0x174AE0u;
    // 0x174ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174ae4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x174ae8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x174aec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174AECu;
    {
        const bool branch_taken_0x174aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174aec) {
            ctx->pc = 0x174B00u;
            goto label_174b00;
        }
    }
    ctx->pc = 0x174AF4u;
    // 0x174af4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x174af8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174AF8u;
    {
        const bool branch_taken_0x174af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174af8) {
            ctx->pc = 0x174B1Cu;
            goto label_174b1c;
        }
    }
    ctx->pc = 0x174B00u;
label_174b00:
    // 0x174b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174b08: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x174b0c: 0xc05b64c  jal         func_16D930
    ctx->pc = 0x174B0Cu;
    SET_GPR_U32(ctx, 31, 0x174B14u);
    ctx->pc = 0x174B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B0Cu;
    // 0x174b10: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D930u, 0x174B0Cu, 0x174B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B14u;
label_174b14:
    // 0x174b14: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x174B14u;
    {
        const bool branch_taken_0x174b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B14u;
        // 0x174b18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b14) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B1Cu;
label_174b1c:
    // 0x174b1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174b20: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x174b24: 0xc05b64c  jal         func_16D930
    ctx->pc = 0x174B24u;
    SET_GPR_U32(ctx, 31, 0x174B2Cu);
    ctx->pc = 0x174B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B24u;
    // 0x174b28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D930u, 0x174B24u, 0x174B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B2Cu;
label_174b2c:
    // 0x174b2c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x174B2Cu;
    {
        const bool branch_taken_0x174b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B2Cu;
        // 0x174b30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b2c) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B34u;
label_174b34:
    // 0x174b34: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174C60u;
            goto label_174c60;
        }
    }
    ctx->pc = 0x174B3Cu;
    // 0x174b3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b40: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x174b44: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x174B44u;
    {
        const bool branch_taken_0x174b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B44u;
        // 0x174b48: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b44) {
            ctx->pc = 0x174BB0u;
            goto label_174bb0;
        }
    }
    ctx->pc = 0x174B4Cu;
    // 0x174b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174b50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x174b54: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x174b58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x174b5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174b64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x174b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b68: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x174b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x174b6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B9Cu;
            goto label_174b9c;
        }
    }
    ctx->pc = 0x174B74u;
    // 0x174b74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174B74u;
    {
        const bool branch_taken_0x174b74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x174B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B74u;
        // 0x174b78: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b74) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B7Cu;
    // 0x174b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x2444003d  addiu       $a0, $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x174B8Cu;
            goto label_174b8c;
        }
    }
    ctx->pc = 0x174B84u;
    // 0x174b84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x174b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_174b88:
    // 0x174b88: 0x2444003d  addiu       $a0, $v0, 0x3D
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
label_174b8c:
    // 0x174b8c: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174B8Cu;
    SET_GPR_U32(ctx, 31, 0x174B94u);
    ctx->pc = 0x174B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B8Cu;
    // 0x174b90: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174B8Cu, 0x174B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B94u;
label_174b94:
    // 0x174b94: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x174B94u;
    {
        const bool branch_taken_0x174b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B94u;
        // 0x174b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b94) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174B9Cu;
    SET_GPR_U32(ctx, 31, 0x174BA4u);
    ctx->pc = 0x174BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B9Cu;
    // 0x174ba0: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174B9Cu, 0x174BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BA4u;
label_174ba4:
    // 0x174ba4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x174BA4u;
    {
        const bool branch_taken_0x174ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA4u;
        // 0x174ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ba4) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BACu;
    // 0x174bac: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x174bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_174bb0:
    // 0x174bb0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x174BB0u;
    {
        const bool branch_taken_0x174bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BB0u;
        // 0x174bb4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bb0) {
            ctx->pc = 0x174C3Cu;
            goto label_174c3c;
        }
    }
    ctx->pc = 0x174BB8u;
    // 0x174bb8: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x174bbc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x174BBCu;
    {
        const bool branch_taken_0x174bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bbc) {
            ctx->pc = 0x174C38u;
            goto label_174c38;
        }
    }
    ctx->pc = 0x174BC4u;
    // 0x174bc4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174bc8: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x174bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x174bcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x174BCCu;
    {
        const bool branch_taken_0x174bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bcc) {
            ctx->pc = 0x174BF8u;
            goto label_174bf8;
        }
    }
    ctx->pc = 0x174BD4u;
    // 0x174bd4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x174BD4u;
    {
        const bool branch_taken_0x174bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174bd4) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BDCu;
    // 0x174bdc: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x174be0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x174BE0u;
    {
        const bool branch_taken_0x174be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174be0) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BE8u;
    // 0x174be8: 0xc05b6d8  jal         func_16DB60
    ctx->pc = 0x174BE8u;
    SET_GPR_U32(ctx, 31, 0x174BF0u);
    ctx->pc = 0x174BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BE8u;
    // 0x174bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB60u, 0x174BE8u, 0x174BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BF0u;
label_174bf0:
    // 0x174bf0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174BF0u;
    {
        const bool branch_taken_0x174bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bf0) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BF8u;
label_174bf8:
    // 0x174bf8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x174bfc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174BFCu;
    {
        const bool branch_taken_0x174bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x174bfc) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x174C04u;
    // 0x174c04: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x174c08: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174C08u;
    {
        const bool branch_taken_0x174c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x174c08) {
            ctx->pc = 0x174C24u;
            goto label_174c24;
        }
    }
    ctx->pc = 0x174C10u;
label_174c10:
    // 0x174c10: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
    // 0x174c14: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174C14u;
    SET_GPR_U32(ctx, 31, 0x174C1Cu);
    ctx->pc = 0x174C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C14u;
    // 0x174c18: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174C14u, 0x174C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C1Cu;
label_174c1c:
    // 0x174c1c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174C1Cu;
    {
        const bool branch_taken_0x174c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C1Cu;
        // 0x174c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c1c) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C24u;
label_174c24:
    // 0x174c24: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
    // 0x174c28: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174C28u;
    SET_GPR_U32(ctx, 31, 0x174C30u);
    ctx->pc = 0x174C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C28u;
    // 0x174c2c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174C28u, 0x174C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C30u;
label_174c30:
    // 0x174c30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174C30u;
    {
        const bool branch_taken_0x174c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C30u;
        // 0x174c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c30) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C38u;
label_174c38:
    // 0x174c38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_174c3c:
    // 0x174c3c: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x174C3Cu;
    SET_GPR_U32(ctx, 31, 0x174C44u);
    ctx->pc = 0x174C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C3Cu;
    // 0x174c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x174C3Cu, 0x174C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174c48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x174c4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174C4Cu;
    {
        const bool branch_taken_0x174c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c4c) {
            ctx->pc = 0x174C58u;
            goto label_174c58;
        }
    }
    ctx->pc = 0x174C54u;
    // 0x174c54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174c58:
    // 0x174c58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174C58u;
    {
        const bool branch_taken_0x174c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C58u;
        // 0x174c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c58) {
            ctx->pc = 0x174CD0u;
            goto label_174cd0;
        }
    }
    ctx->pc = 0x174C60u;
label_174c60:
    // 0x174c60: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174c64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174c68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174c6c: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x174c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x174c70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174c74: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x174c78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x174c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174c84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x174c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174c88: 0xc05b66c  jal         func_16D9B0
    ctx->pc = 0x174C88u;
    SET_GPR_U32(ctx, 31, 0x174C90u);
    ctx->pc = 0x174C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C88u;
    // 0x174c8c: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D9B0u, 0x174C88u, 0x174C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C90u;
label_174c90:
    // 0x174c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174c94:
    // 0x174c94: 0xc05b848  jal         func_16E120
    ctx->pc = 0x174C94u;
    SET_GPR_U32(ctx, 31, 0x174C9Cu);
    ctx->pc = 0x174C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C94u;
    // 0x174c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E120u, 0x174C94u, 0x174C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C9Cu;
label_174c9c:
    // 0x174c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ca0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174CA0u;
    {
        const bool branch_taken_0x174ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x174ca0) {
            ctx->pc = 0x174CB4u;
            goto label_174cb4;
        }
    }
    ctx->pc = 0x174CA8u;
    // 0x174ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174CA8u;
    {
        const bool branch_taken_0x174ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca8) {
            ctx->pc = 0x174CB4u;
            goto label_174cb4;
        }
    }
    ctx->pc = 0x174CB0u;
label_174cb0:
    // 0x174cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174cb4:
    // 0x174cb4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_174cb8:
    // 0x174cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174CB8u;
    {
        const bool branch_taken_0x174cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cb8) {
            ctx->pc = 0x174CD0u;
            goto label_174cd0;
        }
    }
    ctx->pc = 0x174CC0u;
    // 0x174cc0: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x174CC0u;
    SET_GPR_U32(ctx, 31, 0x174CC8u);
    ctx->pc = 0x174CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CC0u;
    // 0x174cc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x174CC0u, 0x174CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CC8u;
label_174cc8:
    // 0x174cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174ccc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_174cd0:
    // 0x174cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x174cd4u;
}
