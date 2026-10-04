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

// Function: entry_001ee2f0
// Address: 0x1ee2f0 - 0x1ee300
void entry_001ee2f0_0x1ee2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee2f0_0x1ee2f0");
#endif

    ctx->pc = 0x1ee2f0u;

    // 0x1ee2f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE2F0u;
    {
        const bool branch_taken_0x1ee2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2f0) {
            ctx->pc = 0x1EE300u;
            return;
        }
    }
    ctx->pc = 0x1EE2F8u;
    // 0x1ee2f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EE2F8u;
    {
        const bool branch_taken_0x1ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f8) {
            ctx->pc = 0x1EE390u;
            return;
        }
    }
    ctx->pc = 0x1EE300u;
}
