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

// Function: entry_00134cd8
// Address: 0x134cd8 - 0x134ce0
void entry_00134cd8_0x134cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134cd8_0x134cd8");
#endif

    ctx->pc = 0x134cd8u;

    // 0x134cd8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x134CD8u;
    {
        const bool branch_taken_0x134cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cd8) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134CE0u;
}
