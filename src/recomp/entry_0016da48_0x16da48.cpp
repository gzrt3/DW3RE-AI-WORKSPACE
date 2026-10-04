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

// Function: entry_0016da48
// Address: 0x16da48 - 0x16da50
void entry_0016da48_0x16da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016da48_0x16da48");
#endif

    ctx->pc = 0x16da48u;

    // 0x16da48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DA48u;
    {
        const bool branch_taken_0x16da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da48) {
            ctx->pc = 0x16DA68u;
            return;
        }
    }
    ctx->pc = 0x16DA50u;
}
