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

// Function: entry_00148080
// Address: 0x148080 - 0x14808c
void entry_00148080_0x148080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148080_0x148080");
#endif

    ctx->pc = 0x148080u;

    // 0x148080: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x148084: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x148084u;
    {
        const bool branch_taken_0x148084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x148084) {
            ctx->pc = 0x14804Cu;
            return;
        }
    }
    ctx->pc = 0x14808Cu;
}
