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

// Function: entry_00287068
// Address: 0x287068 - 0x28706c
void entry_00287068_0x287068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287068_0x287068");
#endif

    ctx->pc = 0x287068u;

    // 0x287068: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287068u;
    {
        const bool branch_taken_0x287068 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x287068) {
            ctx->pc = 0x287080u;
            return;
        }
    }
    ctx->pc = 0x287070u;
}
