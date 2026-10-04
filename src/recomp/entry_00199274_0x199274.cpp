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

// Function: entry_00199274
// Address: 0x199274 - 0x199280
void entry_00199274_0x199274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199274_0x199274");
#endif

    ctx->pc = 0x199274u;

    // 0x199274: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199278: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199278u;
    {
        const bool branch_taken_0x199278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199278u;
        // 0x19927c: 0x24849be0  addiu       $a0, $a0, -0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199278) {
            ctx->pc = 0x199294u;
            return;
        }
    }
    ctx->pc = 0x199280u;
}
