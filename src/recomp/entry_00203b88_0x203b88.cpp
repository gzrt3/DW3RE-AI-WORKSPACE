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

// Function: entry_00203b88
// Address: 0x203b88 - 0x203b90
void entry_00203b88_0x203b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b88_0x203b88");
#endif

    ctx->pc = 0x203b88u;

    // 0x203b88: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x203B88u;
    {
        const bool branch_taken_0x203b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b88) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203B90u;
}
