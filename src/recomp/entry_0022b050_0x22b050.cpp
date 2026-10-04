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

// Function: entry_0022b050
// Address: 0x22b050 - 0x22b058
void entry_0022b050_0x22b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b050_0x22b050");
#endif

    ctx->pc = 0x22b050u;

    // 0x22b050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22B050u;
    {
        const bool branch_taken_0x22b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B050u;
        // 0x22b054: 0xac4a005c  sw          $t2, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b050) {
            ctx->pc = 0x22B05Cu;
            return;
        }
    }
    ctx->pc = 0x22B058u;
}
