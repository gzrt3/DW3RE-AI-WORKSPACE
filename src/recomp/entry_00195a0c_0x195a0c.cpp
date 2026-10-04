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

// Function: entry_00195a0c
// Address: 0x195a0c - 0x195a18
void entry_00195a0c_0x195a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a0c_0x195a0c");
#endif

    ctx->pc = 0x195a0cu;

    // 0x195a0c: 0x0  nop
    ctx->pc = 0x195a0cu;
    // NOP
    // 0x195a10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x195A10u;
    {
        const bool branch_taken_0x195a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A10u;
        // 0x195a14: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a10) {
            ctx->pc = 0x195A3Cu;
            return;
        }
    }
    ctx->pc = 0x195A18u;
}
