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

// Function: entry_001cae2c
// Address: 0x1cae2c - 0x1cae34
void entry_001cae2c_0x1cae2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cae2c_0x1cae2c");
#endif

    ctx->pc = 0x1cae2cu;

    // 0x1cae2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAE2Cu;
    {
        const bool branch_taken_0x1cae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae2c) {
            ctx->pc = 0x1CAE40u;
            return;
        }
    }
    ctx->pc = 0x1CAE34u;
}
