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

// Function: entry_001f6e5c
// Address: 0x1f6e5c - 0x1f6e74
void entry_001f6e5c_0x1f6e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e5c_0x1f6e5c");
#endif

    ctx->pc = 0x1f6e5cu;

    // 0x1f6e5c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e60: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1f6e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f6e64: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6E64u;
    {
        const bool branch_taken_0x1f6e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e64) {
            ctx->pc = 0x1F6EA8u;
            return;
        }
    }
    ctx->pc = 0x1F6E6Cu;
    // 0x1f6e6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F6E6Cu;
    {
        const bool branch_taken_0x1f6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e6c) {
            ctx->pc = 0x1F6EA8u;
            return;
        }
    }
    ctx->pc = 0x1F6E74u;
}
