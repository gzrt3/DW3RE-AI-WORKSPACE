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

// Function: entry_001e4748
// Address: 0x1e4748 - 0x1e4750
void entry_001e4748_0x1e4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4748_0x1e4748");
#endif

    ctx->pc = 0x1e4748u;

    // 0x1e4748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4748u;
    {
        const bool branch_taken_0x1e4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0xa0a21d43  sb          $v0, 0x1D43($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4748) {
            ctx->pc = 0x1E4754u;
            return;
        }
    }
    ctx->pc = 0x1E4750u;
}
