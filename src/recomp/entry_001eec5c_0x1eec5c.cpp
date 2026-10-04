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

// Function: entry_001eec5c
// Address: 0x1eec5c - 0x1eec8c
void entry_001eec5c_0x1eec5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec5c_0x1eec5c");
#endif

    ctx->pc = 0x1eec5cu;

    // 0x1eec5c: 0x0  nop
    ctx->pc = 0x1eec5cu;
    // NOP
    // 0x1eec60: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC60u;
    {
        const bool branch_taken_0x1eec60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eec60) {
            ctx->pc = 0x1EEC8Cu;
            return;
        }
    }
    ctx->pc = 0x1EEC68u;
    // 0x1eec68: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eec70: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eec74: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec78: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eec7c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEC7Cu;
    {
        const bool branch_taken_0x1eec7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec7c) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EEC84u;
    // 0x1eec84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EEC84u;
    {
        const bool branch_taken_0x1eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC84u;
        // 0x1eec88: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec84) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EEC8Cu;
}
