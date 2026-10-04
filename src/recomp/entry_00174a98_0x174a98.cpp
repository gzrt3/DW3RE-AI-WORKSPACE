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

// Function: entry_00174a98
// Address: 0x174a98 - 0x174aa0
void entry_00174a98_0x174a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a98_0x174a98");
#endif

    ctx->pc = 0x174a98u;

    // 0x174a98: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x174A98u;
    {
        const bool branch_taken_0x174a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a98) {
            ctx->pc = 0x174CB8u;
            return;
        }
    }
    ctx->pc = 0x174AA0u;
}
