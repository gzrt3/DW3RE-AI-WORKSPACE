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

// Function: entry_0019e19c
// Address: 0x19e19c - 0x19e1a4
void entry_0019e19c_0x19e19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e19c_0x19e19c");
#endif

    ctx->pc = 0x19e19cu;

    // 0x19e19c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19E19Cu;
    {
        const bool branch_taken_0x19e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E19Cu;
        // 0x19e1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e19c) {
            ctx->pc = 0x19E1A8u;
            return;
        }
    }
    ctx->pc = 0x19E1A4u;
}
