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

// Function: entry_0016e138
// Address: 0x16e138 - 0x16e140
void entry_0016e138_0x16e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e138_0x16e138");
#endif

    ctx->pc = 0x16e138u;

    // 0x16e138: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16E138u;
    {
        const bool branch_taken_0x16e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E138u;
        // 0x16e13c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e138) {
            ctx->pc = 0x16E278u;
            return;
        }
    }
    ctx->pc = 0x16E140u;
}
