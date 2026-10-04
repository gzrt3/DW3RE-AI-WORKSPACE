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

// Function: entry_001a1b2c
// Address: 0x1a1b2c - 0x1a1b34
void entry_001a1b2c_0x1a1b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b2c_0x1a1b2c");
#endif

    ctx->pc = 0x1a1b2cu;

    // 0x1a1b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1B2Cu;
    {
        const bool branch_taken_0x1a1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B2Cu;
        // 0x1a1b30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b2c) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B34u;
}
