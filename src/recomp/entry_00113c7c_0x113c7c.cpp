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

// Function: entry_00113c7c
// Address: 0x113c7c - 0x113c8c
void entry_00113c7c_0x113c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c7c_0x113c7c");
#endif

    ctx->pc = 0x113c7cu;

    // 0x113c7c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x113c80: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x113c80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x113c84: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x113C84u;
    {
        const bool branch_taken_0x113c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113c84) {
            ctx->pc = 0x113C24u;
            return;
        }
    }
    ctx->pc = 0x113C8Cu;
}
