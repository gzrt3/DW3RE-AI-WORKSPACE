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

// Function: entry_00151710
// Address: 0x151710 - 0x151718
void entry_00151710_0x151710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151710_0x151710");
#endif

    ctx->pc = 0x151710u;

    // 0x151710: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x151710u;
    {
        const bool branch_taken_0x151710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151710) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x151718u;
}
