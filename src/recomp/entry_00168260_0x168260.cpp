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

// Function: entry_00168260
// Address: 0x168260 - 0x168268
void entry_00168260_0x168260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168260_0x168260");
#endif

    ctx->pc = 0x168260u;

    // 0x168260: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168260u;
    {
        const bool branch_taken_0x168260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x168260) {
            ctx->pc = 0x168284u;
            return;
        }
    }
    ctx->pc = 0x168268u;
}
