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

// Function: entry_00134c94
// Address: 0x134c94 - 0x134c9c
void entry_00134c94_0x134c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c94_0x134c94");
#endif

    ctx->pc = 0x134c94u;

    // 0x134c94: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x134C94u;
    {
        const bool branch_taken_0x134c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c94) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134C9Cu;
}
