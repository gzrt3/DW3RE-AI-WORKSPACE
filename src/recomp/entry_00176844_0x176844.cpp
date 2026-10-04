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

// Function: entry_00176844
// Address: 0x176844 - 0x17684c
void entry_00176844_0x176844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176844_0x176844");
#endif

    ctx->pc = 0x176844u;

    // 0x176844: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x176844u;
    {
        const bool branch_taken_0x176844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176844) {
            ctx->pc = 0x17694Cu;
            return;
        }
    }
    ctx->pc = 0x17684Cu;
}
