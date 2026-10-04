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

// Function: entry_0013d7d8
// Address: 0x13d7d8 - 0x13d7e4
void entry_0013d7d8_0x13d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7d8_0x13d7d8");
#endif

    ctx->pc = 0x13d7d8u;

    // 0x13d7d8: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x13d7d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13d7dc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13D7DCu;
    {
        const bool branch_taken_0x13d7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7dc) {
            ctx->pc = 0x13D780u;
            return;
        }
    }
    ctx->pc = 0x13D7E4u;
}
