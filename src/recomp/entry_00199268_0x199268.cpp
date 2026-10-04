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

// Function: entry_00199268
// Address: 0x199268 - 0x199274
void entry_00199268_0x199268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199268_0x199268");
#endif

    ctx->pc = 0x199268u;

    // 0x199268: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19926c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19926Cu;
    {
        const bool branch_taken_0x19926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19926Cu;
        // 0x199270: 0x24849bb0  addiu       $a0, $a0, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19926c) {
            ctx->pc = 0x199294u;
            return;
        }
    }
    ctx->pc = 0x199274u;
}
