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

// Function: entry_0023f9d0
// Address: 0x23f9d0 - 0x23f9d8
void entry_0023f9d0_0x23f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f9d0_0x23f9d0");
#endif

    ctx->pc = 0x23f9d0u;

    // 0x23f9d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F9D0u;
    {
        const bool branch_taken_0x23f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9D0u;
        // 0x23f9d4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9d0) {
            ctx->pc = 0x23F9DCu;
            return;
        }
    }
    ctx->pc = 0x23F9D8u;
}
