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

// Function: entry_001bfe74
// Address: 0x1bfe74 - 0x1bfe84
void entry_001bfe74_0x1bfe74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfe74_0x1bfe74");
#endif

    ctx->pc = 0x1bfe74u;

    // 0x1bfe74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFE74u;
    {
        const bool branch_taken_0x1bfe74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe74) {
            ctx->pc = 0x1BFE84u;
            return;
        }
    }
    ctx->pc = 0x1BFE7Cu;
    // 0x1bfe7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFE7Cu;
    {
        const bool branch_taken_0x1bfe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe7c) {
            ctx->pc = 0x1BFEA4u;
            return;
        }
    }
    ctx->pc = 0x1BFE84u;
}
