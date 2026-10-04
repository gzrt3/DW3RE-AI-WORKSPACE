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

// Function: entry_0024a314
// Address: 0x24a314 - 0x24a320
void entry_0024a314_0x24a314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a314_0x24a314");
#endif

    ctx->pc = 0x24a314u;

    // 0x24a314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A320u;
            return;
        }
    }
    ctx->pc = 0x24A31Cu;
    // 0x24a31c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x24a31cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x24a320u;
}
