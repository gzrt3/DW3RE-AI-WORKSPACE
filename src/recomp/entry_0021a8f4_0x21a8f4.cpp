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

// Function: entry_0021a8f4
// Address: 0x21a8f4 - 0x21a900
void entry_0021a8f4_0x21a8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a8f4_0x21a8f4");
#endif

    ctx->pc = 0x21a8f4u;

    // 0x21a8f4: 0x0  nop
    ctx->pc = 0x21a8f4u;
    // NOP
    // 0x21a8f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21A8F8u;
    {
        const bool branch_taken_0x21a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F8u;
        // 0x21a8fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f8) {
            ctx->pc = 0x21A934u;
            return;
        }
    }
    ctx->pc = 0x21A900u;
}
