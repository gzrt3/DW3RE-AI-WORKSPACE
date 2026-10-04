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

// Function: entry_00115340
// Address: 0x115340 - 0x11534c
void entry_00115340_0x115340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115340_0x115340");
#endif

    ctx->pc = 0x115340u;

    // 0x115340: 0xae071d74  sw          $a3, 0x1D74($s0)
    ctx->pc = 0x115340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 7));
    // 0x115344: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x115344u;
    {
        const bool branch_taken_0x115344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0xae051d68  sw          $a1, 0x1D68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115344) {
            ctx->pc = 0x115410u;
            return;
        }
    }
    ctx->pc = 0x11534Cu;
}
