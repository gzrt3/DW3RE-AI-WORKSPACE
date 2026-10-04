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

// Function: entry_00136504
// Address: 0x136504 - 0x13650c
void entry_00136504_0x136504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136504_0x136504");
#endif

    ctx->pc = 0x136504u;

    // 0x136504: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136504u;
    {
        const bool branch_taken_0x136504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136504) {
            ctx->pc = 0x136540u;
            return;
        }
    }
    ctx->pc = 0x13650Cu;
}
