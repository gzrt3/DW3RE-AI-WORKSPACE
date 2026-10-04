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

// Function: entry_001959f0
// Address: 0x1959f0 - 0x1959f8
void entry_001959f0_0x1959f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959f0_0x1959f0");
#endif

    ctx->pc = 0x1959f0u;

    // 0x1959f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1959F0u;
    {
        const bool branch_taken_0x1959f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F0u;
        // 0x1959f4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959f0) {
            ctx->pc = 0x195A3Cu;
            return;
        }
    }
    ctx->pc = 0x1959F8u;
}
