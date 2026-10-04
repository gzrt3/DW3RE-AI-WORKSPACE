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

// Function: entry_0016db88
// Address: 0x16db88 - 0x16db90
void entry_0016db88_0x16db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db88_0x16db88");
#endif

    ctx->pc = 0x16db88u;

    // 0x16db88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16DB88u;
    {
        const bool branch_taken_0x16db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db88) {
            ctx->pc = 0x16DBA4u;
            return;
        }
    }
    ctx->pc = 0x16DB90u;
}
