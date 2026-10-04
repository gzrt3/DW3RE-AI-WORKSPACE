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

// Function: entry_001114fc
// Address: 0x1114fc - 0x111504
void entry_001114fc_0x1114fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114fc_0x1114fc");
#endif

    ctx->pc = 0x1114fcu;

    // 0x1114fc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1114FCu;
    {
        const bool branch_taken_0x1114fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114FCu;
        // 0x111500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114fc) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x111504u;
}
