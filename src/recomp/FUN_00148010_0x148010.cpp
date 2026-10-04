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

// Function: FUN_00148010
// Address: 0x148010 - 0x148094
void FUN_00148010_0x148010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148010_0x148010");
#endif

    switch (ctx->pc) {
        case 0x148028u: goto label_148028;
        case 0x14804cu: goto label_14804c;
        default: break;
    }

    ctx->pc = 0x148010u;

    // 0x148010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148014: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x148014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x148018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14801c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148020: 0xc0700b4  jal         func_1C02D0
    ctx->pc = 0x148020u;
    SET_GPR_U32(ctx, 31, 0x148028u);
    ctx->pc = 0x148024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148020u;
    // 0x148024: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C02D0u, 0x148020u, 0x148028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148028u;
label_148028:
    // 0x148028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148028u;
    {
        const bool branch_taken_0x148028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148028) {
            ctx->pc = 0x148038u;
            goto label_148038;
        }
    }
    ctx->pc = 0x148030u;
    // 0x148030: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x148030u;
    {
        const bool branch_taken_0x148030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148030u;
        // 0x148034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148030) {
            ctx->pc = 0x148090u;
            goto label_148090;
        }
    }
    ctx->pc = 0x148038u;
label_148038:
    // 0x148038: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x148038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x14803c: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x14803Cu;
    {
        const bool branch_taken_0x14803c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x148040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14803Cu;
        // 0x148040: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14803c) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x148044u;
    // 0x148044: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x148044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x148048: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x148048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14804c:
    // 0x14804c: 0x90e40094  lbu         $a0, 0x94($a3)
    ctx->pc = 0x14804cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x148050: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x148050u;
    {
        const bool branch_taken_0x148050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x148050) {
            ctx->pc = 0x148080u;
            goto label_148080;
        }
    }
    ctx->pc = 0x148058u;
    // 0x148058: 0x90e40095  lbu         $a0, 0x95($a3)
    ctx->pc = 0x148058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 149)));
    // 0x14805c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14805Cu;
    {
        const bool branch_taken_0x14805c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14805c) {
            ctx->pc = 0x148080u;
            goto label_148080;
        }
    }
    ctx->pc = 0x148064u;
    // 0x148064: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x148064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x148068: 0xa0d00005  sb          $s0, 0x5($a2)
    ctx->pc = 0x148068u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 16));
    // 0x14806c: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x14806cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x148070: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x148070u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x148074: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x148074u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x148078: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x148078u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x14807c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_148080:
    // 0x148080: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x148084: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x148084u;
    {
        const bool branch_taken_0x148084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x148084) {
            ctx->pc = 0x14804Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14804c;
        }
    }
    ctx->pc = 0x14808Cu;
label_14808c:
    // 0x14808c: 0x0  nop
    ctx->pc = 0x14808cu;
    // NOP
label_148090:
    // 0x148090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x148094u;
}
