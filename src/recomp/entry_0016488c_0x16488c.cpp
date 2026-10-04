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

// Function: entry_0016488c
// Address: 0x16488c - 0x164894
void entry_0016488c_0x16488c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016488c_0x16488c");
#endif

    ctx->pc = 0x16488cu;

    // 0x16488c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16488Cu;
    {
        const bool branch_taken_0x16488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16488c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164894u;
}
