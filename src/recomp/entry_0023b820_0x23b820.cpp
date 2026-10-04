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

// Function: entry_0023b820
// Address: 0x23b820 - 0x23b828
void entry_0023b820_0x23b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b820_0x23b820");
#endif

    ctx->pc = 0x23b820u;

    // 0x23b820: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B820u;
    {
        const bool branch_taken_0x23b820 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23b820) {
            ctx->pc = 0x23B844u;
            return;
        }
    }
    ctx->pc = 0x23B828u;
}
