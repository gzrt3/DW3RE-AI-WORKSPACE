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

// Function: FUN_0022afd0
// Address: 0x22afd0 - 0x22b0bc
void FUN_0022afd0_0x22afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022afd0_0x22afd0");
#endif

    switch (ctx->pc) {
        case 0x22afe8u: goto label_22afe8;
        case 0x22b014u: goto label_22b014;
        default: break;
    }

    ctx->pc = 0x22afd0u;

    // 0x22afd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22afd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22afd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22afdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22afdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22afe0: 0xc0590dc  jal         func_164370
    ctx->pc = 0x22AFE0u;
    SET_GPR_U32(ctx, 31, 0x22AFE8u);
    ctx->pc = 0x22AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFE0u;
    // 0x22afe4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22AFE0u, 0x22AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFE8u;
label_22afe8:
    // 0x22afe8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x22AFE8u;
    {
        const bool branch_taken_0x22afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afe8) {
            ctx->pc = 0x22B0B8u;
            goto label_22b0b8;
        }
    }
    ctx->pc = 0x22AFF0u;
    // 0x22aff0: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x22aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x22aff4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x22aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x22aff8: 0x8f8a85d0  lw          $t2, -0x7A30($gp)
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x22affc: 0x11400021  beqz        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x22AFFCu;
    {
        const bool branch_taken_0x22affc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFFCu;
        // 0x22b000: 0x320800ff  andi        $t0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22affc) {
            ctx->pc = 0x22B084u;
            goto label_22b084;
        }
    }
    ctx->pc = 0x22B004u;
    // 0x22b004: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x22b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x22b008: 0x2406008b  addiu       $a2, $zero, 0x8B
    ctx->pc = 0x22b008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x22b00c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x22b00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22b010: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x22b010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22b014:
    // 0x22b014: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x22b014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x22b018: 0x14690016  bne         $v1, $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B074u;
            goto label_22b074;
        }
    }
    ctx->pc = 0x22B020u;
    // 0x22b020: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x22b020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x22b024: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22B024u;
    {
        const bool branch_taken_0x22b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x22b024) {
            ctx->pc = 0x22B074u;
            goto label_22b074;
        }
    }
    ctx->pc = 0x22B02Cu;
    // 0x22b02c: 0x9143009d  lbu         $v1, 0x9D($t2)
    ctx->pc = 0x22b02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 157)));
    // 0x22b030: 0x1067000a  beq         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x22B030u;
    {
        const bool branch_taken_0x22b030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x22b030) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22B038u;
    // 0x22b038: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B038u;
    {
        const bool branch_taken_0x22b038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x22b038) {
            ctx->pc = 0x22B058u;
            goto label_22b058;
        }
    }
    ctx->pc = 0x22B040u;
    // 0x22b040: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B040u;
    {
        const bool branch_taken_0x22b040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22b040) {
            ctx->pc = 0x22B050u;
            goto label_22b050;
        }
    }
    ctx->pc = 0x22B048u;
    // 0x22b048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B048u;
    {
        const bool branch_taken_0x22b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b048) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22B050u;
label_22b050:
    // 0x22b050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22B050u;
    {
        const bool branch_taken_0x22b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B050u;
        // 0x22b054: 0xac4a005c  sw          $t2, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b050) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22B058u;
label_22b058:
    // 0x22b058: 0xac4a0060  sw          $t2, 0x60($v0)
    ctx->pc = 0x22b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 10));
label_22b05c:
    // 0x22b05c: 0x0  nop
    ctx->pc = 0x22b05cu;
    // NOP
    // 0x22b060: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x22b064: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x22b068: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b06c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B06Cu;
    {
        const bool branch_taken_0x22b06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b06c) {
            ctx->pc = 0x22B084u;
            goto label_22b084;
        }
    }
    ctx->pc = 0x22B074u;
label_22b074:
    // 0x22b074: 0x0  nop
    ctx->pc = 0x22b074u;
    // NOP
    // 0x22b078: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x22b07c: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22B07Cu;
    {
        const bool branch_taken_0x22b07c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b07c) {
            ctx->pc = 0x22B014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b014;
        }
    }
    ctx->pc = 0x22B084u;
label_22b084:
    // 0x22b084: 0x0  nop
    ctx->pc = 0x22b084u;
    // NOP
    // 0x22b088: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x22b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x22b08c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x22b090: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b094: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B094u;
    {
        const bool branch_taken_0x22b094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B094u;
        // 0x22b098: 0x3c044170  lui         $a0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b094) {
            ctx->pc = 0x22B0B8u;
            goto label_22b0b8;
        }
    }
    ctx->pc = 0x22B09Cu;
    // 0x22b09c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x22b0a0: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x22b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x22b0a4: 0x2463b0d0  addiu       $v1, $v1, -0x4F30
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947024));
    // 0x22b0a8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x22b0ac: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x22b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x22b0b0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x22b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x22b0b4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22b0b8:
    // 0x22b0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x22b0bcu;
}
