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

// Function: entry_0021ac64
// Address: 0x21ac64 - 0x21ac70
void entry_0021ac64_0x21ac64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ac64_0x21ac64");
#endif

    ctx->pc = 0x21ac64u;

    // 0x21ac64: 0x0  nop
    ctx->pc = 0x21ac64u;
    // NOP
    // 0x21ac68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21AC68u;
    {
        const bool branch_taken_0x21ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC68u;
        // 0x21ac6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac68) {
            ctx->pc = 0x21ACA4u;
            return;
        }
    }
    ctx->pc = 0x21AC70u;
}
