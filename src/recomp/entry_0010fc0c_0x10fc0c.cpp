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

// Function: entry_0010fc0c
// Address: 0x10fc0c - 0x10fc1c
void entry_0010fc0c_0x10fc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc0c_0x10fc0c");
#endif

    ctx->pc = 0x10fc0cu;

    // 0x10fc0c: 0x15c30003  bne         $t6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FC0Cu;
    {
        const bool branch_taken_0x10fc0c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        if (branch_taken_0x10fc0c) {
            ctx->pc = 0x10FC1Cu;
            return;
        }
    }
    ctx->pc = 0x10FC14u;
    // 0x10fc14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FC14u;
    {
        const bool branch_taken_0x10fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC14u;
        // 0x10fc18: 0x240e0060  addiu       $t6, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc14) {
            ctx->pc = 0x10FC20u;
            return;
        }
    }
    ctx->pc = 0x10FC1Cu;
}
