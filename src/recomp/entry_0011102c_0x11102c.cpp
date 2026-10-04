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

// Function: entry_0011102c
// Address: 0x11102c - 0x111040
void entry_0011102c_0x11102c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011102c_0x11102c");
#endif

    ctx->pc = 0x11102cu;

    // 0x11102c: 0x0  nop
    ctx->pc = 0x11102cu;
    // NOP
    // 0x111030: 0x15c40003  bne         $t6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111030u;
    {
        const bool branch_taken_0x111030 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 4));
        if (branch_taken_0x111030) {
            ctx->pc = 0x111040u;
            return;
        }
    }
    ctx->pc = 0x111038u;
    // 0x111038: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x111038u;
    {
        const bool branch_taken_0x111038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111038u;
        // 0x11103c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111038) {
            ctx->pc = 0x111060u;
            return;
        }
    }
    ctx->pc = 0x111040u;
}
