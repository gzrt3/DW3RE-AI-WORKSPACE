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

// Function: entry_00240304
// Address: 0x240304 - 0x240318
void entry_00240304_0x240304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240304_0x240304");
#endif

    ctx->pc = 0x240304u;

    // 0x240304: 0x0  nop
    ctx->pc = 0x240304u;
    // NOP
    // 0x240308: 0x10a90003  beq         $a1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240308u;
    {
        const bool branch_taken_0x240308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x240308) {
            ctx->pc = 0x240318u;
            return;
        }
    }
    ctx->pc = 0x240310u;
    // 0x240310: 0x14a80012  bne         $a1, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x240310u;
    {
        const bool branch_taken_0x240310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x240310) {
            ctx->pc = 0x24035Cu;
            return;
        }
    }
    ctx->pc = 0x240318u;
}
