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

// Function: entry_00134c04
// Address: 0x134c04 - 0x134c10
void entry_00134c04_0x134c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c04_0x134c04");
#endif

    ctx->pc = 0x134c04u;

    // 0x134c04: 0x0  nop
    ctx->pc = 0x134c04u;
    // NOP
    // 0x134c08: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x134C08u;
    {
        const bool branch_taken_0x134c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c08) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134C10u;
}
