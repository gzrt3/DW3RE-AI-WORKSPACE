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

// Function: entry_001f7c6c
// Address: 0x1f7c6c - 0x1f7c9c
void entry_001f7c6c_0x1f7c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c6c_0x1f7c6c");
#endif

    ctx->pc = 0x1f7c6cu;

    // 0x1f7c6c: 0x0  nop
    ctx->pc = 0x1f7c6cu;
    // NOP
    // 0x1f7c70: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7C9Cu;
            return;
        }
    }
    ctx->pc = 0x1F7C78u;
    // 0x1f7c78: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c80: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c84: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c88: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c8c: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7C8Cu;
    {
        const bool branch_taken_0x1f7c8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c8c) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C94u;
    // 0x1f7c94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7C94u;
    {
        const bool branch_taken_0x1f7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C94u;
        // 0x1f7c98: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c94) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C9Cu;
}
