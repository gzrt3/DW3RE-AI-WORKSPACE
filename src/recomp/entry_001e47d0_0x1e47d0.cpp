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

// Function: entry_001e47d0
// Address: 0x1e47d0 - 0x1e47dc
void entry_001e47d0_0x1e47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47d0_0x1e47d0");
#endif

    ctx->pc = 0x1e47d0u;

    // 0x1e47d0: 0x1a7182a  slt         $v1, $t5, $a3
    ctx->pc = 0x1e47d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e47d4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E47D4u;
    {
        const bool branch_taken_0x1e47d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e47d4) {
            ctx->pc = 0x1E47ACu;
            return;
        }
    }
    ctx->pc = 0x1E47DCu;
}
