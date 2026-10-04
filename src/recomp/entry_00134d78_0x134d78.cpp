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

// Function: entry_00134d78
// Address: 0x134d78 - 0x134d80
void entry_00134d78_0x134d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d78_0x134d78");
#endif

    ctx->pc = 0x134d78u;

    // 0x134d78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x134D78u;
    {
        const bool branch_taken_0x134d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d78) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134D80u;
}
