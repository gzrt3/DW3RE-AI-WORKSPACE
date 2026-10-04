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

// Function: FUN_00226ab0
// Address: 0x226ab0 - 0x226ba4
void FUN_00226ab0_0x226ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226ab0_0x226ab0");
#endif

    switch (ctx->pc) {
        case 0x226ae0u: goto label_226ae0;
        case 0x226b00u: goto label_226b00;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b44u: goto label_226b44;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b74u: goto label_226b74;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b9cu: goto label_226b9c;
        default: break;
    }

    ctx->pc = 0x226ab0u;

    // 0x226ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ac4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226AC8u;
    {
        const bool branch_taken_0x226ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AC8u;
        // 0x226acc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ac8) {
            ctx->pc = 0x226AE8u;
            goto label_226ae8;
        }
    }
    ctx->pc = 0x226AD0u;
    // 0x226ad0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226ad4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226ad8: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226AD8u;
    SET_GPR_U32(ctx, 31, 0x226AE0u);
    ctx->pc = 0x226ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AD8u;
    // 0x226adc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226AD8u, 0x226AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AE0u;
label_226ae0:
    // 0x226ae0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x226AE0u;
    {
        const bool branch_taken_0x226ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AE0u;
        // 0x226ae4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ae0) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226AE8u;
label_226ae8:
    // 0x226ae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226aec: 0x14460023  bne         $v0, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x226AECu;
    {
        const bool branch_taken_0x226aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x226aec) {
            ctx->pc = 0x226B7Cu;
            goto label_226b7c;
        }
    }
    ctx->pc = 0x226AF4u;
    // 0x226af4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226af8: 0xc04494c  jal         func_112530
    ctx->pc = 0x226AF8u;
    SET_GPR_U32(ctx, 31, 0x226B00u);
    ctx->pc = 0x226AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AF8u;
    // 0x226afc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226AF8u, 0x226B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B00u;
label_226b00:
    // 0x226b00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226B00u;
    {
        const bool branch_taken_0x226b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B00u;
        // 0x226b04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b00) {
            ctx->pc = 0x226B0Cu;
            goto label_226b0c;
        }
    }
    ctx->pc = 0x226B08u;
    // 0x226b08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226b0c:
    // 0x226b0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226b10: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x226b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x226b14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226B14u;
    {
        const bool branch_taken_0x226b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226b14) {
            ctx->pc = 0x226B34u;
            goto label_226b34;
        }
    }
    ctx->pc = 0x226B1Cu;
    // 0x226b1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b20: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b24: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B24u;
    SET_GPR_U32(ctx, 31, 0x226B2Cu);
    ctx->pc = 0x226B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B24u;
    // 0x226b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B24u, 0x226B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B2Cu;
label_226b2c:
    // 0x226b2c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x226B2Cu;
    {
        const bool branch_taken_0x226b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b2c) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B34u;
label_226b34:
    // 0x226b34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b38: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b3c: 0xc04494c  jal         func_112530
    ctx->pc = 0x226B3Cu;
    SET_GPR_U32(ctx, 31, 0x226B44u);
    ctx->pc = 0x226B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B3Cu;
    // 0x226b40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226B3Cu, 0x226B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B44u;
label_226b44:
    // 0x226b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226B44u;
    {
        const bool branch_taken_0x226b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b44) {
            ctx->pc = 0x226B64u;
            goto label_226b64;
        }
    }
    ctx->pc = 0x226B4Cu;
    // 0x226b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b50: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b54: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B54u;
    SET_GPR_U32(ctx, 31, 0x226B5Cu);
    ctx->pc = 0x226B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B54u;
    // 0x226b58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B54u, 0x226B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x226B5Cu;
    {
        const bool branch_taken_0x226b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b5c) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B64u;
label_226b64:
    // 0x226b64: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b68: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b6c: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B6Cu;
    SET_GPR_U32(ctx, 31, 0x226B74u);
    ctx->pc = 0x226B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B6Cu;
    // 0x226b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B6Cu, 0x226B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B74u;
label_226b74:
    // 0x226b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226B74u;
    {
        const bool branch_taken_0x226b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b74) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B7Cu;
label_226b7c:
    // 0x226b7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b84: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226B8Cu;
    {
        const bool branch_taken_0x226b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B8Cu;
        // 0x226b90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b8c) {
            ctx->pc = 0x226B9Cu;
            goto label_226b9c;
        }
    }
    ctx->pc = 0x226B94u;
    // 0x226b94: 0xc06e45c  jal         func_1B9170
    ctx->pc = 0x226B94u;
    SET_GPR_U32(ctx, 31, 0x226B9Cu);
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x226B94u, 0x226B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B9Cu;
label_226b9c:
    // 0x226b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226ba4u;
}
