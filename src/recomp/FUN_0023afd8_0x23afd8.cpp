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

// Function: FUN_0023afd8
// Address: 0x23afd8 - 0x23b108
void FUN_0023afd8_0x23afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023afd8_0x23afd8");
#endif

    switch (ctx->pc) {
        case 0x23b028u: goto label_23b028;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b060u: goto label_23b060;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0d8u: goto label_23b0d8;
        default: break;
    }

    ctx->pc = 0x23afd8u;

    // 0x23afd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23afdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23afe0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23afe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23afe8: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x23afe8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
    // 0x23afec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23afecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23aff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23aff4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23aff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aff8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23affc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23affcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b000: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23b004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23b008: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x23b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23b00c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x23b010: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x23b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23b014: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23b018: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x23b018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23b01c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B01Cu;
    {
        const bool branch_taken_0x23b01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B01Cu;
        // 0x23b020: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b01c) {
            ctx->pc = 0x23B044u;
            goto label_23b044;
        }
    }
    ctx->pc = 0x23B024u;
    // 0x23b024: 0x0  nop
    ctx->pc = 0x23b024u;
    // NOP
label_23b028:
    // 0x23b028: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x23b02c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x23b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23b030: 0x0  nop
    ctx->pc = 0x23b030u;
    // NOP
    // 0x23b034: 0x0  nop
    ctx->pc = 0x23b034u;
    // NOP
    // 0x23b038: 0x0  nop
    ctx->pc = 0x23b038u;
    // NOP
    // 0x23b03c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B03Cu;
    {
        const bool branch_taken_0x23b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B03Cu;
        // 0x23b040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b03c) {
            ctx->pc = 0x23B028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b028;
        }
    }
    ctx->pc = 0x23B044u;
label_23b044:
    // 0x23b044: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23B044u;
    SET_GPR_U32(ctx, 31, 0x23B04Cu);
    ctx->pc = 0x23B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B044u;
    // 0x23b048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23B044u, 0x23B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B04Cu;
label_23b04c:
    // 0x23b04c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b050: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x23B050u;
    {
        const bool branch_taken_0x23b050 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B050u;
        // 0x23b054: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b050) {
            ctx->pc = 0x23B07Cu;
            goto label_23b07c;
        }
    }
    ctx->pc = 0x23B058u;
    // 0x23b058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b05c: 0x0  nop
    ctx->pc = 0x23b05cu;
    // NOP
label_23b060:
    // 0x23b060: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23b064: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23b064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x23b068: 0x0  nop
    ctx->pc = 0x23b068u;
    // NOP
    // 0x23b06c: 0x0  nop
    ctx->pc = 0x23b06cu;
    // NOP
    // 0x23b070: 0x0  nop
    ctx->pc = 0x23b070u;
    // NOP
    // 0x23b074: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B074u;
    {
        const bool branch_taken_0x23b074 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B074u;
        // 0x23b078: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b074) {
            ctx->pc = 0x23B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b060;
        }
    }
    ctx->pc = 0x23B07Cu;
label_23b07c:
    // 0x23b07c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23b080: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x23b084: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x23b084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x23b088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b08c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0D8u;
            goto label_23b0d8;
        }
    }
    ctx->pc = 0x23B094u;
    // 0x23b094: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23b098: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23b098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b09c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23b0a0:
    // 0x23b0a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b0a4: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x23b0a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b0ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x23b0b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x23b0b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b0b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23b0bc: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x23b0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23b0c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23B0C0u;
    {
        const bool branch_taken_0x23b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C0u;
        // 0x23b0c4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c0) {
            ctx->pc = 0x23B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0a0;
        }
    }
    ctx->pc = 0x23B0C8u;
    // 0x23b0c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23B0C8u;
    {
        const bool branch_taken_0x23b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C8u;
        // 0x23b0cc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c8) {
            ctx->pc = 0x23B0F4u;
            goto label_23b0f4;
        }
    }
    ctx->pc = 0x23B0D0u;
    // 0x23b0d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B0D0u;
    {
        const bool branch_taken_0x23b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0D0u;
        // 0x23b0d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0d0) {
            ctx->pc = 0x23B0F4u;
            goto label_23b0f4;
        }
    }
    ctx->pc = 0x23B0D8u;
label_23b0d8:
    // 0x23b0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b0dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23b0e0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23b0e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x23b0e8: 0x0  nop
    ctx->pc = 0x23b0e8u;
    // NOP
    // 0x23b0ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B0ECu;
    {
        const bool branch_taken_0x23b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0ECu;
        // 0x23b0f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0ec) {
            ctx->pc = 0x23B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0d8;
        }
    }
    ctx->pc = 0x23B0F4u;
label_23b0f4:
    // 0x23b0f4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x23b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23b0f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0fc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x23b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x23b100: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23B100u;
    SET_GPR_U32(ctx, 31, 0x23B108u);
    ctx->pc = 0x23B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B100u;
    // 0x23b104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23B100u, 0x23B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B108u;
}
