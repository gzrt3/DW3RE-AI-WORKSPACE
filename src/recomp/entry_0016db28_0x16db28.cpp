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

// Function: entry_0016db28
// Address: 0x16db28 - 0x16db30
void entry_0016db28_0x16db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db28_0x16db28");
#endif

    ctx->pc = 0x16db28u;

    // 0x16db28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB54u;
            return;
        }
    }
    ctx->pc = 0x16DB30u;
}
