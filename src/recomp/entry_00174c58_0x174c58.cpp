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

// Function: entry_00174c58
// Address: 0x174c58 - 0x174c60
void entry_00174c58_0x174c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c58_0x174c58");
#endif

    ctx->pc = 0x174c58u;

    // 0x174c58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174C58u;
    {
        const bool branch_taken_0x174c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C58u;
        // 0x174c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c58) {
            ctx->pc = 0x174CD0u;
            return;
        }
    }
    ctx->pc = 0x174C60u;
}
