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

// Function: entry_00168218
// Address: 0x168218 - 0x168238
void entry_00168218_0x168218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168218_0x168218");
#endif

    ctx->pc = 0x168218u;

    // 0x168218: 0x130b000e  beq         $t8, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x168218u;
    {
        const bool branch_taken_0x168218 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 11));
        if (branch_taken_0x168218) {
            ctx->pc = 0x168254u;
            return;
        }
    }
    ctx->pc = 0x168220u;
    // 0x168220: 0x130a0008  beq         $t8, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x168220u;
    {
        const bool branch_taken_0x168220 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 10));
        if (branch_taken_0x168220) {
            ctx->pc = 0x168244u;
            return;
        }
    }
    ctx->pc = 0x168228u;
    // 0x168228: 0x13090003  beq         $t8, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 9));
        if (branch_taken_0x168228) {
            ctx->pc = 0x168238u;
            return;
        }
    }
    ctx->pc = 0x168230u;
    // 0x168230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168230u;
    {
        const bool branch_taken_0x168230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168230) {
            ctx->pc = 0x168260u;
            return;
        }
    }
    ctx->pc = 0x168238u;
}
