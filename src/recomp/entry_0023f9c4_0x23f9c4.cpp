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

// Function: entry_0023f9c4
// Address: 0x23f9c4 - 0x23f9d0
void entry_0023f9c4_0x23f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f9c4_0x23f9c4");
#endif

    ctx->pc = 0x23f9c4u;

    // 0x23f9c4: 0x0  nop
    ctx->pc = 0x23f9c4u;
    // NOP
    // 0x23f9c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23F9C8u;
    {
        const bool branch_taken_0x23f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C8u;
        // 0x23f9cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9c8) {
            ctx->pc = 0x23F9DCu;
            return;
        }
    }
    ctx->pc = 0x23F9D0u;
}
