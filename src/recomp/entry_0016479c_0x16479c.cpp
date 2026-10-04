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

// Function: entry_0016479c
// Address: 0x16479c - 0x1647a8
void entry_0016479c_0x16479c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016479c_0x16479c");
#endif

    ctx->pc = 0x16479cu;

    // 0x16479c: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x16479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
    // 0x1647a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1647A0u;
    {
        const bool branch_taken_0x1647a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A0u;
        // 0x1647a4: 0xaf828658  sw          $v0, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647a0) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647A8u;
}
