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

// Function: entry_001755a4
// Address: 0x1755a4 - 0x1755ac
void entry_001755a4_0x1755a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755a4_0x1755a4");
#endif

    ctx->pc = 0x1755a4u;

    // 0x1755a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1755A4u;
    {
        const bool branch_taken_0x1755a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755a4) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755ACu;
}
