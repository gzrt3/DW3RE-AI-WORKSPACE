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

// Function: entry_0021597c
// Address: 0x21597c - 0x215984
void entry_0021597c_0x21597c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021597c_0x21597c");
#endif

    ctx->pc = 0x21597cu;

    // 0x21597c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21597Cu;
    {
        const bool branch_taken_0x21597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21597Cu;
        // 0x215980: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21597c) {
            ctx->pc = 0x215988u;
            return;
        }
    }
    ctx->pc = 0x215984u;
}
