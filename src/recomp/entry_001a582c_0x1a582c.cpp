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

// Function: entry_001a582c
// Address: 0x1a582c - 0x1a5834
void entry_001a582c_0x1a582c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a582c_0x1a582c");
#endif

    ctx->pc = 0x1a582cu;

    // 0x1a582c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A582Cu;
    {
        const bool branch_taken_0x1a582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A582Cu;
        // 0x1a5830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a582c) {
            ctx->pc = 0x1A5870u;
            return;
        }
    }
    ctx->pc = 0x1A5834u;
}
