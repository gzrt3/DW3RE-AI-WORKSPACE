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

// Function: entry_001e45e8
// Address: 0x1e45e8 - 0x1e45f4
void entry_001e45e8_0x1e45e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45e8_0x1e45e8");
#endif

    ctx->pc = 0x1e45e8u;

    // 0x1e45e8: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x1e45e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e45ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E45C8u;
            return;
        }
    }
    ctx->pc = 0x1E45F4u;
}
