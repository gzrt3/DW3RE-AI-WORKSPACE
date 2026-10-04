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

// Function: entry_001f1fa4
// Address: 0x1f1fa4 - 0x1f1fb0
void entry_001f1fa4_0x1f1fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1fa4_0x1f1fa4");
#endif

    ctx->pc = 0x1f1fa4u;

    // 0x1f1fa4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1FA4u;
    {
        const bool branch_taken_0x1f1fa4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA4u;
        // 0x1f1fa8: 0xaf838fc0  sw          $v1, -0x7040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fa4) {
            ctx->pc = 0x1F1FB0u;
            return;
        }
    }
    ctx->pc = 0x1F1FACu;
    // 0x1f1fac: 0xaf808fc4  sw          $zero, -0x703C($gp)
    ctx->pc = 0x1f1facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 0));
    ctx->pc = 0x1f1fb0u;
}
