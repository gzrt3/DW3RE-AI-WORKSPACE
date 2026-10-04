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

// Function: entry_00134d08
// Address: 0x134d08 - 0x134d10
void entry_00134d08_0x134d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d08_0x134d08");
#endif

    ctx->pc = 0x134d08u;

    // 0x134d08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x134D08u;
    {
        const bool branch_taken_0x134d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d08) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134D10u;
}
