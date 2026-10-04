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

// Function: entry_00236c58
// Address: 0x236c58 - 0x236c60
void entry_00236c58_0x236c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236c58_0x236c58");
#endif

    ctx->pc = 0x236c58u;

    // 0x236c58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C58u;
    {
        const bool branch_taken_0x236c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C58u;
        // 0x236c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c58) {
            ctx->pc = 0x236C70u;
            return;
        }
    }
    ctx->pc = 0x236C60u;
}
