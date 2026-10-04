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

// Function: entry_00167bb4
// Address: 0x167bb4 - 0x167bbc
void entry_00167bb4_0x167bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167bb4_0x167bb4");
#endif

    ctx->pc = 0x167bb4u;

    // 0x167bb4: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x167BB4u;
    {
        const bool branch_taken_0x167bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bb4) {
            ctx->pc = 0x167D94u;
            return;
        }
    }
    ctx->pc = 0x167BBCu;
}
