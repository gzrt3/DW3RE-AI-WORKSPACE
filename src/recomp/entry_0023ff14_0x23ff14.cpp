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

// Function: entry_0023ff14
// Address: 0x23ff14 - 0x240030
void entry_0023ff14_0x23ff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ff14_0x23ff14");
#endif

    switch (ctx->pc) {
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x240018u: goto label_240018;
        default: break;
    }

    ctx->pc = 0x23ff14u;

    // 0x23ff14: 0x0  nop
    ctx->pc = 0x23ff14u;
    // NOP
    // 0x23ff18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23ff1c: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x23ff20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x23FF20u;
    {
        const bool branch_taken_0x23ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF20u;
        // 0x23ff24: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff20) {
            ctx->pc = 0x23FE98u;
            return;
        }
    }
    ctx->pc = 0x23FF28u;
    // 0x23ff28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ff28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff30:
    // 0x23ff30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23ff34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ff38: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23ff3c: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
    // 0x23ff40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ff44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff48: 0x240601a8  addiu       $a2, $zero, 0x1A8
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x23ff4c: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x23FF4Cu;
    SET_GPR_U32(ctx, 31, 0x23FF54u);
    ctx->pc = 0x23FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF4Cu;
    // 0x23ff50: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x23FF4Cu, 0x23FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF54u;
label_23ff54:
    // 0x23ff54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23ff58: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23ff58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23ff5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0x261001a8  addiu       $s0, $s0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff30;
        }
    }
    ctx->pc = 0x23FF64u;
    // 0x23ff64: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x23ff68: 0xc0902f0  jal         func_240BC0
    ctx->pc = 0x23FF68u;
    SET_GPR_U32(ctx, 31, 0x23FF70u);
    ctx->pc = 0x23FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF68u;
    // 0x23ff6c: 0x2484ff78  addiu       $a0, $a0, -0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BC0u, 0x23FF68u, 0x23FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF70u;
label_23ff70:
    // 0x23ff70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23ff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff74:
    // 0x23ff74: 0x0  nop
    ctx->pc = 0x23ff74u;
    // NOP
    // 0x23ff78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23ff7c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23ff80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ff84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ff88: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23ff8c: 0x90224ec5  lbu         $v0, 0x4EC5($at)
    ctx->pc = 0x23ff8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20165)));
    // 0x23ff90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FF90u;
    {
        const bool branch_taken_0x23ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF90u;
        // 0x23ff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff90) {
            ctx->pc = 0x23FFF0u;
            goto label_23fff0;
        }
    }
    ctx->pc = 0x23FF98u;
    // 0x23ff98: 0xc056a20  jal         func_15A880
    ctx->pc = 0x23FF98u;
    SET_GPR_U32(ctx, 31, 0x23FFA0u);
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x23FF98u, 0x23FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFA0u;
label_23ffa0:
    // 0x23ffa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffa8: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23ffac: 0xc056a04  jal         func_15A810
    ctx->pc = 0x23FFACu;
    SET_GPR_U32(ctx, 31, 0x23FFB4u);
    ctx->pc = 0x23FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFACu;
    // 0x23ffb0: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x23FFACu, 0x23FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFB4u;
label_23ffb4:
    // 0x23ffb4: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x23FFB4u;
    SET_GPR_U32(ctx, 31, 0x23FFBCu);
    ctx->pc = 0x23FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFB4u;
    // 0x23ffb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x23FFB4u, 0x23FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFBCu;
label_23ffbc:
    // 0x23ffbc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23ffc0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x23ffc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ffc8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23ffcc: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x23FFCCu;
    SET_GPR_U32(ctx, 31, 0x23FFD4u);
    ctx->pc = 0x23FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFCCu;
    // 0x23ffd0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x23FFCCu, 0x23FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFD4u;
label_23ffd4:
    // 0x23ffd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x23ffd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ffdc: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x23ffe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ffe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ffe8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23ffec: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x23ffecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_23fff0:
    // 0x23fff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23fff4: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x23fff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x23fff8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x23FFF8u;
    {
        const bool branch_taken_0x23fff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fff8) {
            ctx->pc = 0x23FF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff74;
        }
    }
    ctx->pc = 0x240000u;
    // 0x240000: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x240004: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x240008: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x240008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
    // 0x24000c: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x24000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x240010: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x240010u;
    SET_GPR_U32(ctx, 31, 0x240018u);
    ctx->pc = 0x240014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240010u;
    // 0x240014: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x240010u, 0x240018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240018u;
label_240018:
    // 0x240018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24001c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24001cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240024: 0x3e00008  jr          $ra
    ctx->pc = 0x240024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240024u;
        // 0x240028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24002Cu;
    // 0x24002c: 0x0  nop
    ctx->pc = 0x24002cu;
    // NOP
    ctx->pc = 0x240030u;
}
