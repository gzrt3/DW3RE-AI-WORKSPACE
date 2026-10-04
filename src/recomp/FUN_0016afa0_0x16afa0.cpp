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

// Function: FUN_0016afa0
// Address: 0x16afa0 - 0x16b0cc
void FUN_0016afa0_0x16afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016afa0_0x16afa0");
#endif

    switch (ctx->pc) {
        case 0x16afbcu: goto label_16afbc;
        case 0x16b04cu: goto label_16b04c;
        case 0x16b064u: goto label_16b064;
        default: break;
    }

    ctx->pc = 0x16afa0u;

    // 0x16afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16afa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16afa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16afac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16afb0: 0x8f9185b0  lw          $s1, -0x7A50($gp)
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x16afb4: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x16AFB4u;
    {
        const bool branch_taken_0x16afb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afb4) {
            ctx->pc = 0x16B0C4u;
            goto label_16b0c4;
        }
    }
    ctx->pc = 0x16AFBCu;
label_16afbc:
    // 0x16afbc: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x16afbcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x16afc0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x16afc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x16afc4: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16afc8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AFC8u;
    {
        const bool branch_taken_0x16afc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFC8u;
        // 0x16afcc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc8) {
            ctx->pc = 0x16AFF0u;
            goto label_16aff0;
        }
    }
    ctx->pc = 0x16AFD0u;
    // 0x16afd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16afd4: 0x8c231edc  lw          $v1, 0x1EDC($at)
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
    // 0x16afd8: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x16afdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16afe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AFE0u;
    {
        const bool branch_taken_0x16afe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe0) {
            ctx->pc = 0x16AFF0u;
            goto label_16aff0;
        }
    }
    ctx->pc = 0x16AFE8u;
    // 0x16afe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AFE8u;
    {
        const bool branch_taken_0x16afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe8) {
            ctx->pc = 0x16AFF4u;
            goto label_16aff4;
        }
    }
    ctx->pc = 0x16AFF0u;
label_16aff0:
    // 0x16aff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16aff4:
    // 0x16aff4: 0x0  nop
    ctx->pc = 0x16aff4u;
    // NOP
    // 0x16aff8: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16AFF8u;
    {
        const bool branch_taken_0x16aff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF8u;
        // 0x16affc: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aff8) {
            ctx->pc = 0x16B0B4u;
            goto label_16b0b4;
        }
    }
    ctx->pc = 0x16B000u;
    // 0x16b000: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x16b000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16b004: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x16B004u;
    {
        const bool branch_taken_0x16b004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B004u;
        // 0x16b008: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b004) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B00Cu;
    // 0x16b00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b010: 0x8c251edc  lw          $a1, 0x1EDC($at)
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
    // 0x16b014: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x16b018: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x16b018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x16b01c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16B01Cu;
    {
        const bool branch_taken_0x16b01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b01c) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B024u;
    // 0x16b024: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16b028: 0x802027  not         $a0, $a0
    ctx->pc = 0x16b028u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x16b02c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16b02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x16b030: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16b034: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16B034u;
    {
        const bool branch_taken_0x16b034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B034u;
        // 0x16b038: 0xac241edc  sw          $a0, 0x1EDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b034) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B03Cu;
    // 0x16b03c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b040: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16b044: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B074u;
            goto label_16b074;
        }
    }
    ctx->pc = 0x16B04Cu;
label_16b04c:
    // 0x16b04c: 0x0  nop
    ctx->pc = 0x16b04cu;
    // NOP
    // 0x16b050: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b054: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16b058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b05c: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b068: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16B070u;
    // 0x16b070: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16b070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16b074:
    // 0x16b074: 0x0  nop
    ctx->pc = 0x16b074u;
    // NOP
    // 0x16b078: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16b07c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16b07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b080: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x16b084: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
    // 0x16b088: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b08c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16b08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16b090: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16b090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16b094: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16b098: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b0a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16b0a4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b0a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b0ac: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16b0b0:
    // 0x16b0b0: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x16b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_16b0b4:
    // 0x16b0b4: 0x0  nop
    ctx->pc = 0x16b0b4u;
    // NOP
    // 0x16b0b8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16b0bc: 0x1620ffbf  bnez        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x16B0BCu;
    {
        const bool branch_taken_0x16b0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b0bc) {
            ctx->pc = 0x16AFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16B0C4u;
label_16b0c4:
    // 0x16b0c4: 0x0  nop
    ctx->pc = 0x16b0c4u;
    // NOP
    // 0x16b0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16b0ccu;
}
