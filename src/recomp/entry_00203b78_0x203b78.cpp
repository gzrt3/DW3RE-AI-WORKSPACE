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

// Function: entry_00203b78
// Address: 0x203b78 - 0x203b80
void entry_00203b78_0x203b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b78_0x203b78");
#endif

    ctx->pc = 0x203b78u;

    // 0x203b78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x203B78u;
    {
        const bool branch_taken_0x203b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b78) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203B80u;
}
