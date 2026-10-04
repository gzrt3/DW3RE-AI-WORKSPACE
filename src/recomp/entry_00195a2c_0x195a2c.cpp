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

// Function: entry_00195a2c
// Address: 0x195a2c - 0x195a38
void entry_00195a2c_0x195a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a2c_0x195a2c");
#endif

    ctx->pc = 0x195a2cu;

    // 0x195a2c: 0x0  nop
    ctx->pc = 0x195a2cu;
    // NOP
    // 0x195a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195A30u;
    {
        const bool branch_taken_0x195a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a30) {
            ctx->pc = 0x195A3Cu;
            return;
        }
    }
    ctx->pc = 0x195A38u;
}
