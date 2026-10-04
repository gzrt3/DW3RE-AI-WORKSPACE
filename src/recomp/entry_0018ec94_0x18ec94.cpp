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

// Function: entry_0018ec94
// Address: 0x18ec94 - 0x18ec98
void entry_0018ec94_0x18ec94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec94_0x18ec94");
#endif

    ctx->pc = 0x18ec94u;

    // 0x18ec94: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18EC9Cu;
}
