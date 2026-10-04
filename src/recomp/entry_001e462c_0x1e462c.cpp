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

// Function: entry_001e462c
// Address: 0x1e462c - 0x1e4638
void entry_001e462c_0x1e462c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e462c_0x1e462c");
#endif

    ctx->pc = 0x1e462cu;

    // 0x1e462c: 0x0  nop
    ctx->pc = 0x1e462cu;
    // NOP
    // 0x1e4630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0xa0e60ee3  sb          $a2, 0xEE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3811), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E4644u;
            return;
        }
    }
    ctx->pc = 0x1E4638u;
}
