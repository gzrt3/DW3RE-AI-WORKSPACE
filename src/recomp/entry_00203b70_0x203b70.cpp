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

// Function: entry_00203b70
// Address: 0x203b70 - 0x203b78
void entry_00203b70_0x203b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b70_0x203b70");
#endif

    ctx->pc = 0x203b70u;

    // 0x203b70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x203B70u;
    {
        const bool branch_taken_0x203b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b70) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203B78u;
}
