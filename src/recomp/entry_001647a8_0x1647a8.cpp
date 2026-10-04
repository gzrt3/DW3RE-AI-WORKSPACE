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

// Function: entry_001647a8
// Address: 0x1647a8 - 0x1647b4
void entry_001647a8_0x1647a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001647a8_0x1647a8");
#endif

    ctx->pc = 0x1647a8u;

    // 0x1647a8: 0xaf838680  sw          $v1, -0x7980($gp)
    ctx->pc = 0x1647a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 3));
    // 0x1647ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1647ACu;
    {
        const bool branch_taken_0x1647ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647ACu;
        // 0x1647b0: 0xaf82867c  sw          $v0, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647ac) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647B4u;
}
