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

// Function: entry_001ec80c
// Address: 0x1ec80c - 0x1ec814
void entry_001ec80c_0x1ec80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec80c_0x1ec80c");
#endif

    ctx->pc = 0x1ec80cu;

    // 0x1ec80c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC80Cu;
    {
        const bool branch_taken_0x1ec80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec80c) {
            ctx->pc = 0x1EC82Cu;
            return;
        }
    }
    ctx->pc = 0x1EC814u;
}
