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

// Function: entry_0021b2cc
// Address: 0x21b2cc - 0x21b2d8
void entry_0021b2cc_0x21b2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b2cc_0x21b2cc");
#endif

    ctx->pc = 0x21b2ccu;

    // 0x21b2cc: 0x0  nop
    ctx->pc = 0x21b2ccu;
    // NOP
    // 0x21b2d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21B2D0u;
    {
        const bool branch_taken_0x21b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D0u;
        // 0x21b2d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2d0) {
            ctx->pc = 0x21B30Cu;
            return;
        }
    }
    ctx->pc = 0x21B2D8u;
}
