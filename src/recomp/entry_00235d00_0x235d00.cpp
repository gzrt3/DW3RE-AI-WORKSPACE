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

// Function: entry_00235d00
// Address: 0x235d00 - 0x235d08
void entry_00235d00_0x235d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235d00_0x235d00");
#endif

    ctx->pc = 0x235d00u;

    // 0x235d00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235D00u;
    {
        const bool branch_taken_0x235d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D00u;
        // 0x235d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d00) {
            ctx->pc = 0x235D18u;
            return;
        }
    }
    ctx->pc = 0x235D08u;
}
