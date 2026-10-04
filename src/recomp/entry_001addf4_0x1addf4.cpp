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

// Function: entry_001addf4
// Address: 0x1addf4 - 0x1adee0
void entry_001addf4_0x1addf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001addf4_0x1addf4");
#endif

    switch (ctx->pc) {
        case 0x1ade0cu: goto label_1ade0c;
        case 0x1ade28u: goto label_1ade28;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade60u: goto label_1ade60;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade9cu: goto label_1ade9c;
        case 0x1adeb8u: goto label_1adeb8;
        case 0x1adec8u: goto label_1adec8;
        default: break;
    }

    ctx->pc = 0x1addf4u;

    // 0x1addf4: 0x26305c80  addiu       $s0, $s1, 0x5C80
    ctx->pc = 0x1addf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23680));
    // 0x1addf8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1addfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade00: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1ade04: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1ADE04u;
    SET_GPR_U32(ctx, 31, 0x1ADE0Cu);
    ctx->pc = 0x1ADE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE04u;
    // 0x1ade08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1ADE04u, 0x1ADE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE0Cu;
label_1ade0c:
    // 0x1ade0c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ade10: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1ADE10u;
    {
        const bool branch_taken_0x1ade10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE10u;
        // 0x1ade14: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade10) {
            ctx->pc = 0x1ADDD0u;
            return;
        }
    }
    ctx->pc = 0x1ADE18u;
    // 0x1ade18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ade18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1ADE1Cu;
    {
        const bool branch_taken_0x1ade1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE1Cu;
        // 0x1ade20: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade1c) {
            ctx->pc = 0x1ADE4Cu;
            goto label_1ade4c;
        }
    }
    ctx->pc = 0x1ADE24u;
    // 0x1ade24: 0x0  nop
    ctx->pc = 0x1ade24u;
    // NOP
label_1ade28:
    // 0x1ade28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ade2c: 0x0  nop
    ctx->pc = 0x1ade2cu;
    // NOP
label_1ade30:
    // 0x1ade30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ade30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ade34: 0x0  nop
    ctx->pc = 0x1ade34u;
    // NOP
    // 0x1ade38: 0x0  nop
    ctx->pc = 0x1ade38u;
    // NOP
    // 0x1ade3c: 0x0  nop
    ctx->pc = 0x1ade3cu;
    // NOP
    // 0x1ade40: 0x0  nop
    ctx->pc = 0x1ade40u;
    // NOP
    // 0x1ade44: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ADE44u;
    {
        const bool branch_taken_0x1ade44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ade44) {
            ctx->pc = 0x1ADE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade30;
        }
    }
    ctx->pc = 0x1ADE4Cu;
label_1ade4c:
    // 0x1ade4c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ade50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade54: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1ade54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1ade58: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1ADE58u;
    SET_GPR_U32(ctx, 31, 0x1ADE60u);
    ctx->pc = 0x1ADE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE58u;
    // 0x1ade5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1ADE58u, 0x1ADE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE60u;
label_1ade60:
    // 0x1ade60: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1ade64: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1ADE64u;
    {
        const bool branch_taken_0x1ade64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE64u;
        // 0x1ade68: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade64) {
            ctx->pc = 0x1ADE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade28;
        }
    }
    ctx->pc = 0x1ADE6Cu;
    // 0x1ade6c: 0xc06bbd4  jal         func_1AEF50
    ctx->pc = 0x1ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE74u);
    ctx->pc = 0x1AEF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF50u, 0x1ADE6Cu, 0x1ADE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE74u;
label_1ade74:
    // 0x1ade74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ade74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ade7c: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1ade80: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADE80u;
    {
        const bool branch_taken_0x1ade80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE80u;
        // 0x1ade84: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade80) {
            ctx->pc = 0x1ADEC0u;
            goto label_1adec0;
        }
    }
    ctx->pc = 0x1ADE88u;
    // 0x1ade88: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
    // 0x1ade8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADE8Cu;
    {
        const bool branch_taken_0x1ade8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE8Cu;
        // 0x1ade90: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade8c) {
            ctx->pc = 0x1ADEB8u;
            goto label_1adeb8;
        }
    }
    ctx->pc = 0x1ADE94u;
    // 0x1ade94: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1ADE94u;
    SET_GPR_U32(ctx, 31, 0x1ADE9Cu);
    ctx->pc = 0x1ADE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE94u;
    // 0x1ade98: 0x2484a840  addiu       $a0, $a0, -0x57C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1ADE94u, 0x1ADE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE9Cu;
label_1ade9c:
    // 0x1ade9c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1adea0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adea4: 0x2484a868  addiu       $a0, $a0, -0x5798
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944872));
    // 0x1adea8: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1adeac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1adeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1adeb0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1ADEB0u;
    SET_GPR_U32(ctx, 31, 0x1ADEB8u);
    ctx->pc = 0x1ADEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEB0u;
    // 0x1adeb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1ADEB0u, 0x1ADEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEB8u;
label_1adeb8:
    // 0x1adeb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADEB8u;
    {
        const bool branch_taken_0x1adeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEB8u;
        // 0x1adebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adeb8) {
            ctx->pc = 0x1ADEC8u;
            goto label_1adec8;
        }
    }
    ctx->pc = 0x1ADEC0u;
label_1adec0:
    // 0x1adec0: 0xc06b7b8  jal         func_1ADEE0
    ctx->pc = 0x1ADEC0u;
    SET_GPR_U32(ctx, 31, 0x1ADEC8u);
    ctx->pc = 0x1ADEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEC0u;
    // 0x1adec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADEE0u, 0x1ADEC0u, 0x1ADEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEC8u;
label_1adec8:
    // 0x1adec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aded0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aded4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aded8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADEE0u;
}
