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

// Function: entry_001afd30
// Address: 0x1afd30 - 0x1afd38
void entry_001afd30_0x1afd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd30_0x1afd30");
#endif

    ctx->pc = 0x1afd30u;

    // 0x1afd30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AFD30u;
    {
        const bool branch_taken_0x1afd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD30u;
        // 0x1afd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd30) {
            ctx->pc = 0x1AFDF0u;
            return;
        }
    }
    ctx->pc = 0x1AFD38u;
}
