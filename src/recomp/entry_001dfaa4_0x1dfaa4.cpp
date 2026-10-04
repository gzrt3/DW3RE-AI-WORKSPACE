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

// Function: entry_001dfaa4
// Address: 0x1dfaa4 - 0x1dfab0
void entry_001dfaa4_0x1dfaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfaa4_0x1dfaa4");
#endif

    ctx->pc = 0x1dfaa4u;

    // 0x1dfaa4: 0x0  nop
    ctx->pc = 0x1dfaa4u;
    // NOP
    // 0x1dfaa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DFAA8u;
    {
        const bool branch_taken_0x1dfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA8u;
        // 0x1dfaac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa8) {
            ctx->pc = 0x1DFAE4u;
            return;
        }
    }
    ctx->pc = 0x1DFAB0u;
}
