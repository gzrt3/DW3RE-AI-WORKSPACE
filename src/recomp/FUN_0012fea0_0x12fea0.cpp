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

// Function: FUN_0012fea0
// Address: 0x12fea0 - 0x12fff4
void FUN_0012fea0_0x12fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fea0_0x12fea0");
#endif

    switch (ctx->pc) {
        case 0x12fef4u: goto label_12fef4;
        case 0x12ff04u: goto label_12ff04;
        case 0x12ff14u: goto label_12ff14;
        case 0x12ff24u: goto label_12ff24;
        case 0x12ff34u: goto label_12ff34;
        case 0x12ff44u: goto label_12ff44;
        case 0x12ff54u: goto label_12ff54;
        case 0x12ff64u: goto label_12ff64;
        case 0x12ff74u: goto label_12ff74;
        case 0x12ff90u: goto label_12ff90;
        case 0x12ffe0u: goto label_12ffe0;
        case 0x12fff0u: goto label_12fff0;
        default: break;
    }

    ctx->pc = 0x12fea0u;

    // 0x12fea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fea8: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x12fea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12feac: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x12feacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x12feb0: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x12FEB0u;
    {
        const bool branch_taken_0x12feb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEB0u;
        // 0x12feb4: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feb0) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FEB8u;
    // 0x12feb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12febc: 0x24a55770  addiu       $a1, $a1, 0x5770
    ctx->pc = 0x12febcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22384));
    // 0x12fec0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fec8: 0x600008  jr          $v1
    ctx->pc = 0x12FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FED0u: goto label_12fed0;
            case 0x12FF0Cu: goto label_12ff0c;
            case 0x12FF1Cu: goto label_12ff1c;
            case 0x12FF2Cu: goto label_12ff2c;
            case 0x12FF3Cu: goto label_12ff3c;
            case 0x12FF4Cu: goto label_12ff4c;
            case 0x12FF5Cu: goto label_12ff5c;
            case 0x12FF6Cu: goto label_12ff6c;
            case 0x12FF7Cu: goto label_12ff7c;
            case 0x12FFCCu: goto label_12ffcc;
            case 0x12FFE8u: goto label_12ffe8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FEC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12FED0u;
label_12fed0:
    // 0x12fed0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x12fed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x12fed4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12fed8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x12fed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x12fedc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FEDCu;
    {
        const bool branch_taken_0x12fedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEDCu;
        // 0x12fee0: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fedc) {
            ctx->pc = 0x12FEECu;
            goto label_12feec;
        }
    }
    ctx->pc = 0x12FEE4u;
    // 0x12fee4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FEE4u;
    {
        const bool branch_taken_0x12fee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fee4) {
            ctx->pc = 0x12FEFCu;
            goto label_12fefc;
        }
    }
    ctx->pc = 0x12FEECu;
label_12feec:
    // 0x12feec: 0xc08a094  jal         func_228250
    ctx->pc = 0x12FEECu;
    SET_GPR_U32(ctx, 31, 0x12FEF4u);
    ctx->pc = 0x228250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228250u, 0x12FEECu, 0x12FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEF4u;
label_12fef4:
    // 0x12fef4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12FEF4u;
    {
        const bool branch_taken_0x12fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEF4u;
        // 0x12fef8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fef4) {
            ctx->pc = 0x12FFF4u;
            return;
        }
    }
    ctx->pc = 0x12FEFCu;
label_12fefc:
    // 0x12fefc: 0xc08a488  jal         func_229220
    ctx->pc = 0x12FEFCu;
    SET_GPR_U32(ctx, 31, 0x12FF04u);
    ctx->pc = 0x229220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229220u, 0x12FEFCu, 0x12FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF04u;
label_12ff04:
    // 0x12ff04: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12FF04u;
    {
        const bool branch_taken_0x12ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff04) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF0Cu;
label_12ff0c:
    // 0x12ff0c: 0xc05d470  jal         func_1751C0
    ctx->pc = 0x12FF0Cu;
    SET_GPR_U32(ctx, 31, 0x12FF14u);
    ctx->pc = 0x1751C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751C0u, 0x12FF0Cu, 0x12FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF14u;
label_12ff14:
    // 0x12ff14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12FF14u;
    {
        const bool branch_taken_0x12ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff14) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF1Cu;
label_12ff1c:
    // 0x12ff1c: 0xc040208  jal         func_100820
    ctx->pc = 0x12FF1Cu;
    SET_GPR_U32(ctx, 31, 0x12FF24u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x12FF1Cu, 0x12FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF24u;
label_12ff24:
    // 0x12ff24: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x12FF24u;
    {
        const bool branch_taken_0x12ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff24) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF2Cu;
label_12ff2c:
    // 0x12ff2c: 0xc08c248  jal         func_230920
    ctx->pc = 0x12FF2Cu;
    SET_GPR_U32(ctx, 31, 0x12FF34u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x12FF2Cu, 0x12FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF34u;
label_12ff34:
    // 0x12ff34: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12FF34u;
    {
        const bool branch_taken_0x12ff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff34) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF3Cu;
label_12ff3c:
    // 0x12ff3c: 0xc05efcc  jal         func_17BF30
    ctx->pc = 0x12FF3Cu;
    SET_GPR_U32(ctx, 31, 0x12FF44u);
    ctx->pc = 0x12FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF3Cu;
    // 0x12ff40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF30u, 0x12FF3Cu, 0x12FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF44u;
label_12ff44:
    // 0x12ff44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12FF44u;
    {
        const bool branch_taken_0x12ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff44) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF4Cu;
label_12ff4c:
    // 0x12ff4c: 0xc05dd08  jal         func_177420
    ctx->pc = 0x12FF4Cu;
    SET_GPR_U32(ctx, 31, 0x12FF54u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x12FF4Cu, 0x12FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF54u;
label_12ff54:
    // 0x12ff54: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12FF54u;
    {
        const bool branch_taken_0x12ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff54) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF5Cu;
label_12ff5c:
    // 0x12ff5c: 0xc08a00c  jal         func_228030
    ctx->pc = 0x12FF5Cu;
    SET_GPR_U32(ctx, 31, 0x12FF64u);
    ctx->pc = 0x228030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228030u, 0x12FF5Cu, 0x12FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF64u;
label_12ff64:
    // 0x12ff64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12FF64u;
    {
        const bool branch_taken_0x12ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff64) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF6Cu;
label_12ff6c:
    // 0x12ff6c: 0xc04c000  jal         func_130000
    ctx->pc = 0x12FF6Cu;
    SET_GPR_U32(ctx, 31, 0x12FF74u);
    ctx->pc = 0x130000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130000u, 0x12FF6Cu, 0x12FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF74u;
label_12ff74:
    // 0x12ff74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FF74u;
    {
        const bool branch_taken_0x12ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff74) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF7Cu;
label_12ff7c:
    // 0x12ff7c: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x12ff7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x12ff80: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12FF80u;
    {
        const bool branch_taken_0x12ff80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF80u;
        // 0x12ff84: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff80) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FF88u;
    // 0x12ff88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ff8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12ff90:
    // 0x12ff90: 0x90e30094  lbu         $v1, 0x94($a3)
    ctx->pc = 0x12ff90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x12ff94: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FF94u;
    {
        const bool branch_taken_0x12ff94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x12ff94) {
            ctx->pc = 0x12FFB4u;
            goto label_12ffb4;
        }
    }
    ctx->pc = 0x12FF9Cu;
    // 0x12ff9c: 0x90e30096  lbu         $v1, 0x96($a3)
    ctx->pc = 0x12ff9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x12ffa0: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FFA0u;
    {
        const bool branch_taken_0x12ffa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x12ffa0) {
            ctx->pc = 0x12FFB4u;
            goto label_12ffb4;
        }
    }
    ctx->pc = 0x12FFA8u;
    // 0x12ffa8: 0x8ce30090  lw          $v1, 0x90($a3)
    ctx->pc = 0x12ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x12ffac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12ffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12ffb0: 0xace30090  sw          $v1, 0x90($a3)
    ctx->pc = 0x12ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
label_12ffb4:
    // 0x12ffb4: 0x0  nop
    ctx->pc = 0x12ffb4u;
    // NOP
    // 0x12ffb8: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x12ffbc: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FFBCu;
    {
        const bool branch_taken_0x12ffbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ffbc) {
            ctx->pc = 0x12FF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ff90;
        }
    }
    ctx->pc = 0x12FFC4u;
    // 0x12ffc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12FFC4u;
    {
        const bool branch_taken_0x12ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffc4) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FFCCu;
label_12ffcc:
    // 0x12ffcc: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ffd0: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x12ffd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x12ffd4: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x12ffd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ffd8: 0xc08acc4  jal         func_22B310
    ctx->pc = 0x12FFD8u;
    SET_GPR_U32(ctx, 31, 0x12FFE0u);
    ctx->pc = 0x12FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFD8u;
    // 0x12ffdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B310u, 0x12FFD8u, 0x12FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFE0u;
label_12ffe0:
    // 0x12ffe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12FFE0u;
    {
        const bool branch_taken_0x12ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffe0) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FFE8u;
label_12ffe8:
    // 0x12ffe8: 0xc08b3fc  jal         func_22CFF0
    ctx->pc = 0x12FFE8u;
    SET_GPR_U32(ctx, 31, 0x12FFF0u);
    ctx->pc = 0x12FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFE8u;
    // 0x12ffec: 0x84840004  lh          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFF0u, 0x12FFE8u, 0x12FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFF0u;
label_12fff0:
    // 0x12fff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12fff4u;
}
