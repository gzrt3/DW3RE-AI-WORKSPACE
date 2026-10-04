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

// Function: entry_0015aa6c
// Address: 0x15aa6c - 0x15aa74
void entry_0015aa6c_0x15aa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa6c_0x15aa6c");
#endif

    ctx->pc = 0x15aa6cu;

    // 0x15aa6c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15AA6Cu;
    {
        const bool branch_taken_0x15aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA6Cu;
        // 0x15aa70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa6c) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA74u;
}
