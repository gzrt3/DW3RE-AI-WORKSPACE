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

// Function: FUN_0019afc8
// Address: 0x19afc8 - 0x19b090
void FUN_0019afc8_0x19afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019afc8_0x19afc8");
#endif

    switch (ctx->pc) {
        case 0x19b020u: goto label_19b020;
        case 0x19b030u: goto label_19b030;
        case 0x19b048u: goto label_19b048;
        default: break;
    }

    ctx->pc = 0x19afc8u;

    // 0x19afc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19afcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19afd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19afd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19afd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19afe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19afe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19afe8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AFECu;
    {
        const bool branch_taken_0x19afec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afec) {
            ctx->pc = 0x19B000u;
            goto label_19b000;
        }
    }
    ctx->pc = 0x19AFF4u;
    // 0x19aff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19aff8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B07Cu;
            goto label_19b07c;
        }
    }
    ctx->pc = 0x19B000u;
label_19b000:
    // 0x19b000: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19b004: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x19b008: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x19b008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x19b00c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19B078u;
            goto label_19b078;
        }
    }
    ctx->pc = 0x19B014u;
    // 0x19b014: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x19b018: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19b01c: 0x0  nop
    ctx->pc = 0x19b01cu;
    // NOP
label_19b020:
    // 0x19b020: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B020u;
    {
        const bool branch_taken_0x19b020 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x19b020) {
            ctx->pc = 0x19B068u;
            goto label_19b068;
        }
    }
    ctx->pc = 0x19B028u;
    // 0x19b028: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19B028u;
    SET_GPR_U32(ctx, 31, 0x19B030u);
    ctx->pc = 0x19B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B028u;
    // 0x19b02c: 0x26649f90  addiu       $a0, $s3, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19B028u, 0x19B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B030u;
label_19b030:
    // 0x19b030: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19b034: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19b038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b03c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B068u;
            goto label_19b068;
        }
    }
    ctx->pc = 0x19B044u;
    // 0x19b044: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19b048:
    // 0x19b048: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19b048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19b04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b050: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b054: 0x0  nop
    ctx->pc = 0x19b054u;
    // NOP
    // 0x19b058: 0x0  nop
    ctx->pc = 0x19b058u;
    // NOP
    // 0x19b05c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B05Cu;
    {
        const bool branch_taken_0x19b05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b05c) {
            ctx->pc = 0x19B048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b048;
        }
    }
    ctx->pc = 0x19B064u;
    // 0x19b064: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19b064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19b068:
    // 0x19b068: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19b06c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x19b06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x19b070: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19B070u;
    {
        const bool branch_taken_0x19b070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B070u;
        // 0x19b074: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b070) {
            ctx->pc = 0x19B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b020;
        }
    }
    ctx->pc = 0x19B078u;
label_19b078:
    // 0x19b078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b07c:
    // 0x19b07c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b080: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19b080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19b084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19b090u;
}
