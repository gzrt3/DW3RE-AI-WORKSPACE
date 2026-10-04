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

// Function: FUN_00223c70
// Address: 0x223c70 - 0x223d84
void FUN_00223c70_0x223c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223c70_0x223c70");
#endif

    switch (ctx->pc) {
        case 0x223cacu: goto label_223cac;
        case 0x223cc0u: goto label_223cc0;
        case 0x223d0cu: goto label_223d0c;
        case 0x223d50u: goto label_223d50;
        default: break;
    }

    ctx->pc = 0x223c70u;

    // 0x223c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223c74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x223c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x223c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223c7c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x223c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x223c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223c88: 0x9030490d  lbu         $s0, 0x490D($at)
    ctx->pc = 0x223c88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x33490Du));
    // 0x223c8c: 0x1603001c  bne         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x223C8Cu;
    {
        const bool branch_taken_0x223c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C8Cu;
        // 0x223c90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c8c) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223C94u;
    // 0x223c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223c98: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x223C98u;
    {
        const bool branch_taken_0x223c98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x223c98) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223CA0u;
    // 0x223ca0: 0x8f9085d0  lw          $s0, -0x7A30($gp)
    ctx->pc = 0x223ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x223ca4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x223CA4u;
    {
        const bool branch_taken_0x223ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ca4) {
            ctx->pc = 0x223CF4u;
            goto label_223cf4;
        }
    }
    ctx->pc = 0x223CACu;
label_223cac:
    // 0x223cac: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x223cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x223cb0: 0x1471000c  bne         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x223CB0u;
    {
        const bool branch_taken_0x223cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cb0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CB8u;
    // 0x223cb8: 0xc0590dc  jal         func_164370
    ctx->pc = 0x223CB8u;
    SET_GPR_U32(ctx, 31, 0x223CC0u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x223CB8u, 0x223CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC0u;
label_223cc0:
    // 0x223cc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223CC0u;
    {
        const bool branch_taken_0x223cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223cc0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CC8u;
    // 0x223cc8: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x223cc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x223ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x223cd0: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
    // 0x223cd4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x223cd8: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x223cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x223cdc: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x223cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
    // 0x223ce0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x223ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_223ce4:
    // 0x223ce4: 0x0  nop
    ctx->pc = 0x223ce4u;
    // NOP
    // 0x223ce8: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x223cec: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x223CECu;
    {
        const bool branch_taken_0x223cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x223cec) {
            ctx->pc = 0x223CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cac;
        }
    }
    ctx->pc = 0x223CF4u;
label_223cf4:
    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
    // 0x223cf8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D84u;
            return;
        }
    }
    ctx->pc = 0x223D00u;
label_223d00:
    // 0x223d00: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x223d04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x223D04u;
    {
        const bool branch_taken_0x223d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d04) {
            ctx->pc = 0x223D44u;
            goto label_223d44;
        }
    }
    ctx->pc = 0x223D0Cu;
label_223d0c:
    // 0x223d0c: 0x90620096  lbu         $v0, 0x96($v1)
    ctx->pc = 0x223d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x223d10: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D18u;
    // 0x223d18: 0x9062009d  lbu         $v0, 0x9D($v1)
    ctx->pc = 0x223d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 157)));
    // 0x223d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D24u;
    // 0x223d24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D24u;
    {
        const bool branch_taken_0x223d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d24) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D2Cu;
    // 0x223d2c: 0x9062009c  lbu         $v0, 0x9C($v1)
    ctx->pc = 0x223d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x223d30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x223d34: 0xa062009c  sb          $v0, 0x9C($v1)
    ctx->pc = 0x223d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 2));
label_223d38:
    // 0x223d38: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x223d3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x223D3Cu;
    {
        const bool branch_taken_0x223d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d3c) {
            ctx->pc = 0x223D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223d0c;
        }
    }
    ctx->pc = 0x223D44u;
label_223d44:
    // 0x223d44: 0x0  nop
    ctx->pc = 0x223d44u;
    // NOP
    // 0x223d48: 0xc088d14  jal         func_223450
    ctx->pc = 0x223D48u;
    SET_GPR_U32(ctx, 31, 0x223D50u);
    ctx->pc = 0x223D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D48u;
    // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223450u, 0x223D48u, 0x223D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D50u;
label_223d50:
    // 0x223d50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223d54: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d54) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D5Cu;
    // 0x223d5c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x223d60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x223d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x223d64: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D6Cu;
    // 0x223d6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D6Cu;
    {
        const bool branch_taken_0x223d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d6c) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D74u;
    // 0x223d74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D7Cu;
    // 0x223d7c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x223d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
label_223d80:
    // 0x223d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x223d84u;
}
