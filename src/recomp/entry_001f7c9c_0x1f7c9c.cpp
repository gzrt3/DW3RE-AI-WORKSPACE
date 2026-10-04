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

// Function: entry_001f7c9c
// Address: 0x1f7c9c - 0x1f7cc8
void entry_001f7c9c_0x1f7c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c9c_0x1f7c9c");
#endif

    ctx->pc = 0x1f7c9cu;

    // 0x1f7c9c: 0x0  nop
    ctx->pc = 0x1f7c9cu;
    // NOP
    // 0x1f7ca0: 0x154b0009  bne         $t2, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7CA0u;
    {
        const bool branch_taken_0x1f7ca0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x1f7ca0) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7CA8u;
    // 0x1f7ca8: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7cac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7cb0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7cb4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7cb8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7cbc: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7CBCu;
    {
        const bool branch_taken_0x1f7cbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cbc) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7CC4u;
    // 0x1f7cc4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1f7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1f7cc8u;
}
