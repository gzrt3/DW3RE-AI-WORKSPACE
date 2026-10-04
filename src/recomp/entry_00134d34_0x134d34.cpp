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

// Function: entry_00134d34
// Address: 0x134d34 - 0x134d3c
void entry_00134d34_0x134d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d34_0x134d34");
#endif

    ctx->pc = 0x134d34u;

    // 0x134d34: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x134D34u;
    {
        const bool branch_taken_0x134d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d34) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134D3Cu;
}
