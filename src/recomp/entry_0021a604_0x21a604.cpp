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

// Function: entry_0021a604
// Address: 0x21a604 - 0x21a610
void entry_0021a604_0x21a604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a604_0x21a604");
#endif

    ctx->pc = 0x21a604u;

    // 0x21a604: 0x0  nop
    ctx->pc = 0x21a604u;
    // NOP
    // 0x21a608: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21A608u;
    {
        const bool branch_taken_0x21a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A608u;
        // 0x21a60c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a608) {
            ctx->pc = 0x21A644u;
            return;
        }
    }
    ctx->pc = 0x21A610u;
}
