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

// Function: entry_001e6d18
// Address: 0x1e6d18 - 0x1e6d24
void entry_001e6d18_0x1e6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6d18_0x1e6d18");
#endif

    ctx->pc = 0x1e6d18u;

    // 0x1e6d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6D18u;
    {
        const bool branch_taken_0x1e6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d18) {
            ctx->pc = 0x1E6D24u;
            return;
        }
    }
    ctx->pc = 0x1E6D20u;
    // 0x1e6d20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1e6d24u;
}
