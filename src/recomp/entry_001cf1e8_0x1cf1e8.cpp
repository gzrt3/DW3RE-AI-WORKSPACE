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

// Function: entry_001cf1e8
// Address: 0x1cf1e8 - 0x1cf1f4
void entry_001cf1e8_0x1cf1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf1e8_0x1cf1e8");
#endif

    ctx->pc = 0x1cf1e8u;

    // 0x1cf1e8: 0x6810  mfhi        $t5
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x1cf1ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF1ECu;
    {
        const bool branch_taken_0x1cf1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1ec) {
            ctx->pc = 0x1CF204u;
            return;
        }
    }
    ctx->pc = 0x1CF1F4u;
}
