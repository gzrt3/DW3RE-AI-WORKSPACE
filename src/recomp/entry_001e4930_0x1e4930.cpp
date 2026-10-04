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

// Function: entry_001e4930
// Address: 0x1e4930 - 0x1e4938
void entry_001e4930_0x1e4930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4930_0x1e4930");
#endif

    ctx->pc = 0x1e4930u;

    // 0x1e4930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xa0a21983  sb          $v0, 0x1983($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E493Cu;
            return;
        }
    }
    ctx->pc = 0x1E4938u;
}
