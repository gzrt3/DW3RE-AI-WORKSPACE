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

// Function: entry_0022b074
// Address: 0x22b074 - 0x22b084
void entry_0022b074_0x22b074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b074_0x22b074");
#endif

    ctx->pc = 0x22b074u;

    // 0x22b074: 0x0  nop
    ctx->pc = 0x22b074u;
    // NOP
    // 0x22b078: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x22b07c: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22B07Cu;
    {
        const bool branch_taken_0x22b07c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b07c) {
            ctx->pc = 0x22B014u;
            return;
        }
    }
    ctx->pc = 0x22B084u;
}
