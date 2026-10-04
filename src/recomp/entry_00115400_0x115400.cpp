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

// Function: entry_00115400
// Address: 0x115400 - 0x115408
void entry_00115400_0x115400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115400_0x115400");
#endif

    ctx->pc = 0x115400u;

    // 0x115400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115400u;
    {
        const bool branch_taken_0x115400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115400u;
        // 0x115404: 0xae031d74  sw          $v1, 0x1D74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115400) {
            ctx->pc = 0x115410u;
            return;
        }
    }
    ctx->pc = 0x115408u;
}
