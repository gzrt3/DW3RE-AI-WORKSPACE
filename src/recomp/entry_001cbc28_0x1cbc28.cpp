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

// Function: entry_001cbc28
// Address: 0x1cbc28 - 0x1cbc30
void entry_001cbc28_0x1cbc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc28_0x1cbc28");
#endif

    ctx->pc = 0x1cbc28u;

    // 0x1cbc28: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1CBC28u;
    {
        const bool branch_taken_0x1cbc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC28u;
        // 0x1cbc2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc28) {
            ctx->pc = 0x1CBE20u;
            return;
        }
    }
    ctx->pc = 0x1CBC30u;
}
