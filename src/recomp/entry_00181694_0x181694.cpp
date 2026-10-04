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

// Function: entry_00181694
// Address: 0x181694 - 0x1816a0
void entry_00181694_0x181694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181694_0x181694");
#endif

    ctx->pc = 0x181694u;

    // 0x181694: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x181694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181698: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x181698u;
    {
        const bool branch_taken_0x181698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181698) {
            ctx->pc = 0x181774u;
            return;
        }
    }
    ctx->pc = 0x1816A0u;
}
