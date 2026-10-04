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

// Function: entry_00199280
// Address: 0x199280 - 0x19928c
void entry_00199280_0x199280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199280_0x199280");
#endif

    ctx->pc = 0x199280u;

    // 0x199280: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199284u;
    {
        const bool branch_taken_0x199284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x24849c10  addiu       $a0, $a0, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199284) {
            ctx->pc = 0x199294u;
            return;
        }
    }
    ctx->pc = 0x19928Cu;
}
