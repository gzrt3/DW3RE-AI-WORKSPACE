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

// Function: entry_001afc50
// Address: 0x1afc50 - 0x1afc58
void entry_001afc50_0x1afc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc50_0x1afc50");
#endif

    ctx->pc = 0x1afc50u;

    // 0x1afc50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC50u;
    {
        const bool branch_taken_0x1afc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc50) {
            ctx->pc = 0x1AFC60u;
            return;
        }
    }
    ctx->pc = 0x1AFC58u;
}
