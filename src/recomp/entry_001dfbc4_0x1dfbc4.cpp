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

// Function: entry_001dfbc4
// Address: 0x1dfbc4 - 0x1dfbd0
void entry_001dfbc4_0x1dfbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbc4_0x1dfbc4");
#endif

    ctx->pc = 0x1dfbc4u;

    // 0x1dfbc4: 0x0  nop
    ctx->pc = 0x1dfbc4u;
    // NOP
    // 0x1dfbc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DFBC8u;
    {
        const bool branch_taken_0x1dfbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC8u;
        // 0x1dfbcc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc8) {
            ctx->pc = 0x1DFBF8u;
            return;
        }
    }
    ctx->pc = 0x1DFBD0u;
}
