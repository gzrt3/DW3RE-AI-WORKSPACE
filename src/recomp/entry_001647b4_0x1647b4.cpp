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

// Function: entry_001647b4
// Address: 0x1647b4 - 0x1647c0
void entry_001647b4_0x1647b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001647b4_0x1647b4");
#endif

    ctx->pc = 0x1647b4u;

    // 0x1647b4: 0xaf838668  sw          $v1, -0x7998($gp)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 3));
    // 0x1647b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1647B8u;
    {
        const bool branch_taken_0x1647b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0xaf828664  sw          $v0, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b8) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647C0u;
}
