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

// Function: FUN_00225960
// Address: 0x225960 - 0x225be8
void FUN_00225960_0x225960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225960_0x225960");
#endif

    switch (ctx->pc) {
        case 0x2259c8u: goto label_2259c8;
        default: break;
    }

    ctx->pc = 0x225960u;

    // 0x225960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x225964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x225968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22596c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x22596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x225970: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x225970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x225974: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225974u;
    {
        const bool branch_taken_0x225974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225974u;
        // 0x225978: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225974) {
            ctx->pc = 0x22598Cu;
            goto label_22598c;
        }
    }
    ctx->pc = 0x22597Cu;
    // 0x22597c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x22597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x225980: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x225980u;
    {
        const bool branch_taken_0x225980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225980u;
        // 0x225984: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225980) {
            ctx->pc = 0x2259D8u;
            goto label_2259d8;
        }
    }
    ctx->pc = 0x225988u;
    // 0x225988: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x225988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22598c:
    // 0x22598c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x225990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x225994: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x225994u;
    {
        const bool branch_taken_0x225994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225994) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x22599Cu;
    // 0x22599c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x22599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2259a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2259a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2259a4: 0x14430057  bne         $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2259A4u;
    {
        const bool branch_taken_0x2259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2259a4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x2259ACu;
    // 0x2259ac: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x2259acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x2259b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2259b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2259b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2259b8: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2259B8u;
    {
        const bool branch_taken_0x2259b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2259b8) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x2259C0u;
    // 0x2259c0: 0xc089884  jal         func_226210
    ctx->pc = 0x2259C0u;
    SET_GPR_U32(ctx, 31, 0x2259C8u);
    ctx->pc = 0x226210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226210u, 0x2259C0u, 0x2259C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C8u;
label_2259c8:
    // 0x2259c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2259cc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2259CCu;
    {
        const bool branch_taken_0x2259cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259CCu;
        // 0x2259d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259cc) {
            ctx->pc = 0x225BE8u;
            return;
        }
    }
    ctx->pc = 0x2259D4u;
    // 0x2259d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2259d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2259d8:
    // 0x2259d8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2259D8u;
    {
        const bool branch_taken_0x2259d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D8u;
        // 0x2259dc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d8) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x2259E0u;
    // 0x2259e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2259e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2259e8: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x2259e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x2259ec: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2259ECu;
    {
        const bool branch_taken_0x2259ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2259ec) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x2259F4u;
    // 0x2259f4: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x2259f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
    // 0x2259f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2259F8u;
    {
        const bool branch_taken_0x2259f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2259f8) {
            ctx->pc = 0x225A0Cu;
            goto label_225a0c;
        }
    }
    ctx->pc = 0x225A00u;
    // 0x225a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a04: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x225A04u;
    {
        const bool branch_taken_0x225a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a04) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A0Cu;
label_225a0c:
    // 0x225a0c: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225a10: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225a14: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225a14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x225a18: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
    // 0x225a1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225a20: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x225A20u;
    {
        const bool branch_taken_0x225a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a20) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A28u;
    // 0x225a28: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225a2c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x225a30: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
    // 0x225a34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225a38: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A40u;
    // 0x225a40: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225a44: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x225a48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225a4c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x225A4Cu;
    {
        const bool branch_taken_0x225a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a4c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A54u;
    // 0x225a54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x225a58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225a5c: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x225A64u;
    {
        const bool branch_taken_0x225a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a64) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225A6Cu;
    // 0x225a6c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x225a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_225a70:
    // 0x225a70: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x225A70u;
    {
        const bool branch_taken_0x225a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a70) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A78u;
    // 0x225a78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225a80: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x225a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x225a84: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A8Cu;
    // 0x225a8c: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x225a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
    // 0x225a90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225A90u;
    {
        const bool branch_taken_0x225a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225a90) {
            ctx->pc = 0x225AA4u;
            goto label_225aa4;
        }
    }
    ctx->pc = 0x225A98u;
    // 0x225a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a9c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AA4u;
label_225aa4:
    // 0x225aa4: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225aa8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225aac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225aacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x225ab0: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
    // 0x225ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225ab8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AC0u;
    // 0x225ac0: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225ac4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225ac4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x225ac8: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
    // 0x225acc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225ad0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x225AD0u;
    {
        const bool branch_taken_0x225ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ad0) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AD8u;
    // 0x225ad8: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225adc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x225ae0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225ae4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225AE4u;
    {
        const bool branch_taken_0x225ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ae4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AECu;
    // 0x225aec: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x225af0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225af4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x225AF4u;
    {
        const bool branch_taken_0x225af4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225af4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AFCu;
    // 0x225afc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x225AFCu;
    {
        const bool branch_taken_0x225afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225afc) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B04u;
label_225b04:
    // 0x225b04: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x225b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x225b08: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x225B08u;
    {
        const bool branch_taken_0x225b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b08) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B10u;
    // 0x225b10: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x225b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225b14: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x225b18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b18) {
            ctx->pc = 0x225B84u;
            goto label_225b84;
        }
    }
    ctx->pc = 0x225B20u;
    // 0x225b20: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225b24: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225b28: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x225b2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225b30: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x225b34: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b38: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x225B38u;
    {
        const bool branch_taken_0x225b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b38) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B40u;
    // 0x225b40: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225b44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225b44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x225b48: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x225b4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225b50: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B58u;
    // 0x225b58: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x225b5c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x225b60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x225B64u;
    {
        const bool branch_taken_0x225b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b64) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B6Cu;
    // 0x225b6c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x225b70: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225b74: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x225B7Cu;
    {
        const bool branch_taken_0x225b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B7Cu;
        // 0x225b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b7c) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B84u;
label_225b84:
    // 0x225b84: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225b88: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225b8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225b90: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x225b94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x225B98u;
    {
        const bool branch_taken_0x225b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b98) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BA0u;
    // 0x225ba0: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225ba4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225ba4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x225ba8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x225bac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225bb0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x225BB0u;
    {
        const bool branch_taken_0x225bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bb0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BB8u;
    // 0x225bb8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x225bbc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x225bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225bc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225BC0u;
    {
        const bool branch_taken_0x225bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bc0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BC8u;
    // 0x225bc8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x225bcc: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x225bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x225bd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x225BD0u;
    {
        const bool branch_taken_0x225bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bd0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BD8u;
    // 0x225bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225BD8u;
    {
        const bool branch_taken_0x225bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD8u;
        // 0x225bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd8) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225BE0u;
label_225be0:
    // 0x225be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225be4:
    // 0x225be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x225be8u;
}
