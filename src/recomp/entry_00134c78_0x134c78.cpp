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

// Function: entry_00134c78
// Address: 0x134c78 - 0x134c88
void entry_00134c78_0x134c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c78_0x134c78");
#endif

    ctx->pc = 0x134c78u;

    // 0x134c78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134C78u;
    {
        const bool branch_taken_0x134c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c78) {
            ctx->pc = 0x134C88u;
            return;
        }
    }
    ctx->pc = 0x134C80u;
    // 0x134c80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134C80u;
    {
        const bool branch_taken_0x134c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c80) {
            ctx->pc = 0x134C94u;
            return;
        }
    }
    ctx->pc = 0x134C88u;
}
