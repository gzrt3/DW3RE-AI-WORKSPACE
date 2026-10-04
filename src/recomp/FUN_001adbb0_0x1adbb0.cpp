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

// Function: FUN_001adbb0
// Address: 0x1adbb0 - 0x1adc7c
void FUN_001adbb0_0x1adbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adbb0_0x1adbb0");
#endif

    switch (ctx->pc) {
        case 0x1adbf8u: goto label_1adbf8;
        case 0x1adc10u: goto label_1adc10;
        case 0x1adc28u: goto label_1adc28;
        case 0x1adc30u: goto label_1adc30;
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc50u: goto label_1adc50;
        case 0x1adc60u: goto label_1adc60;
        default: break;
    }

    ctx->pc = 0x1adbb0u;

    // 0x1adbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adbb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1adbb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1adbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1adbbc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x1adbc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1adbc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1adbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1adbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adbcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1adbccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10001810u));
    // 0x1adbd0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1adbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1adbd4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1ADBD4u;
    {
        const bool branch_taken_0x1adbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBD4u;
        // 0x1adbd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbd4) {
            ctx->pc = 0x1ADC70u;
            goto label_1adc70;
        }
    }
    ctx->pc = 0x1ADBDCu;
    // 0x1adbdc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1adbe0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1adbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adbe4: 0x245071c0  addiu       $s0, $v0, 0x71C0
    ctx->pc = 0x1adbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
    // 0x1adbe8: 0x8c4471c0  lw          $a0, 0x71C0($v0)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2871C0u));
    // 0x1adbec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x2871C4u));
    // 0x1adbf0: 0xc06b6d2  jal         func_1ADB48
    ctx->pc = 0x1ADBF0u;
    SET_GPR_U32(ctx, 31, 0x1ADBF8u);
    ctx->pc = 0x1ADBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBF0u;
    // 0x1adbf4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB48u, 0x1ADBF0u, 0x1ADBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBF8u;
label_1adbf8:
    // 0x1adbf8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1adbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1adbfc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1adbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1adc00: 0x24a56a58  addiu       $a1, $a1, 0x6A58
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27224));
    // 0x1adc04: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x1adc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x1adc08: 0xc06b6d6  jal         func_1ADB58
    ctx->pc = 0x1ADC08u;
    SET_GPR_U32(ctx, 31, 0x1ADC10u);
    ctx->pc = 0x1ADC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC08u;
    // 0x1adc0c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB58u, 0x1ADC08u, 0x1ADC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC10u;
label_1adc10:
    // 0x1adc10: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1adc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1adc14: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1adc18: 0x24a57198  addiu       $a1, $a1, 0x7198
    ctx->pc = 0x1adc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29080));
    // 0x1adc1c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1adc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1adc20: 0xc06b6d6  jal         func_1ADB58
    ctx->pc = 0x1ADC20u;
    SET_GPR_U32(ctx, 31, 0x1ADC28u);
    ctx->pc = 0x1ADC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC20u;
    // 0x1adc24: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB58u, 0x1ADC20u, 0x1ADC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC28u;
label_1adc28:
    // 0x1adc28: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1ADC28u;
    SET_GPR_U32(ctx, 31, 0x1ADC30u);
    ctx->pc = 0x1ADC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC28u;
    // 0x1adc2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1ADC28u, 0x1ADC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC30u;
label_1adc30:
    // 0x1adc30: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1ADC30u;
    SET_GPR_U32(ctx, 31, 0x1ADC38u);
    ctx->pc = 0x1ADC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC30u;
    // 0x1adc34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1ADC30u, 0x1ADC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC38u;
label_1adc38:
    // 0x1adc38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1adc3c: 0xc06b6d2  jal         func_1ADB48
    ctx->pc = 0x1ADC3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC44u);
    ctx->pc = 0x1ADC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC3Cu;
    // 0x1adc40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB48u, 0x1ADC3Cu, 0x1ADC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC44u;
label_1adc44:
    // 0x1adc44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1adc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adc48:
    // 0x1adc48: 0xc06b6e8  jal         func_1ADBA0
    ctx->pc = 0x1ADC48u;
    SET_GPR_U32(ctx, 31, 0x1ADC50u);
    ctx->pc = 0x1ADC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC48u;
    // 0x1adc4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADBA0u, 0x1ADC48u, 0x1ADC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC50u;
label_1adc50:
    // 0x1adc50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1adc54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1adc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc58: 0xc06b6d2  jal         func_1ADB48
    ctx->pc = 0x1ADC58u;
    SET_GPR_U32(ctx, 31, 0x1ADC60u);
    ctx->pc = 0x1ADC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC58u;
    // 0x1adc5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB48u, 0x1ADC58u, 0x1ADC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC60u;
label_1adc60:
    // 0x1adc60: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1adc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1adc64: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1ADC64u;
    {
        const bool branch_taken_0x1adc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adc64) {
            ctx->pc = 0x1ADC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADC64u;
            // 0x1adc68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc48;
        }
    }
    ctx->pc = 0x1ADC6Cu;
    // 0x1adc6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1adc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1adc70:
    // 0x1adc70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adc74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adc74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1adc7cu;
}
