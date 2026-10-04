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

// Function: entry_001d583c
// Address: 0x1d583c - 0x1d5874
void entry_001d583c_0x1d583c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d583c_0x1d583c");
#endif

    ctx->pc = 0x1d583cu;

    // 0x1d583c: 0x0  nop
    ctx->pc = 0x1d583cu;
    // NOP
    // 0x1d5840: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d5844: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D58ACu;
            return;
        }
    }
    ctx->pc = 0x1D584Cu;
    // 0x1d584c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d5850: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d5854: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1d5858: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5858u;
    {
        const bool branch_taken_0x1d5858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5858) {
            ctx->pc = 0x1D5874u;
            return;
        }
    }
    ctx->pc = 0x1D5860u;
    // 0x1d5860: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5860u;
    {
        const bool branch_taken_0x1d5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5860) {
            ctx->pc = 0x1D5874u;
            return;
        }
    }
    ctx->pc = 0x1D5868u;
    // 0x1d5868: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d586c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D586Cu;
    {
        const bool branch_taken_0x1d586c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d586c) {
            ctx->pc = 0x1D58A0u;
            return;
        }
    }
    ctx->pc = 0x1D5874u;
}
