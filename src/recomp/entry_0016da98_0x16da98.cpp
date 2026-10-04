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

// Function: entry_0016da98
// Address: 0x16da98 - 0x16daa0
void entry_0016da98_0x16da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016da98_0x16da98");
#endif

    ctx->pc = 0x16da98u;

    // 0x16da98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16DA98u;
    {
        const bool branch_taken_0x16da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da98) {
            ctx->pc = 0x16DAE4u;
            return;
        }
    }
    ctx->pc = 0x16DAA0u;
}
