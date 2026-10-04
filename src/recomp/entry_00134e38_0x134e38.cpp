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

// Function: entry_00134e38
// Address: 0x134e38 - 0x134e40
void entry_00134e38_0x134e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e38_0x134e38");
#endif

    ctx->pc = 0x134e38u;

    // 0x134e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134E38u;
    {
        const bool branch_taken_0x134e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e38) {
            ctx->pc = 0x134E4Cu;
            return;
        }
    }
    ctx->pc = 0x134E40u;
}
