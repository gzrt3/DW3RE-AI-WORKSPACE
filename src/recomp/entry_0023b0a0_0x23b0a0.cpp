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

// Function: entry_0023b0a0
// Address: 0x23b0a0 - 0x23b0d8
void entry_0023b0a0_0x23b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b0a0_0x23b0a0");
#endif

    ctx->pc = 0x23b0a0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x23B0D8u;
}
