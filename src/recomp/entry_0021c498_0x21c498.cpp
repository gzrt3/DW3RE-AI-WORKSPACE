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

// Function: entry_0021c498
// Address: 0x21c498 - 0x21c4a0
void entry_0021c498_0x21c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c498_0x21c498");
#endif

    ctx->pc = 0x21c498u;

    // 0x21c498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21C498u;
    {
        const bool branch_taken_0x21c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C498u;
        // 0x21c49c: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c498) {
            ctx->pc = 0x21C4C4u;
            return;
        }
    }
    ctx->pc = 0x21C4A0u;
}
