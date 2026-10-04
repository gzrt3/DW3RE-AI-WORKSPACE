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

// Function: entry_0011532c
// Address: 0x11532c - 0x115334
void entry_0011532c_0x11532c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011532c_0x11532c");
#endif

    ctx->pc = 0x11532cu;

    // 0x11532c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11532Cu;
    {
        const bool branch_taken_0x11532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11532Cu;
        // 0x115330: 0xae071d70  sw          $a3, 0x1D70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11532c) {
            ctx->pc = 0x115410u;
            return;
        }
    }
    ctx->pc = 0x115334u;
}
