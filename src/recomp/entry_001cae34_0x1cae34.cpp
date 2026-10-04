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

// Function: entry_001cae34
// Address: 0x1cae34 - 0x1cae40
void entry_001cae34_0x1cae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cae34_0x1cae34");
#endif

    ctx->pc = 0x1cae34u;

    // 0x1cae34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAE34u;
    {
        const bool branch_taken_0x1cae34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE34u;
        // 0x1cae38: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae34) {
            ctx->pc = 0x1CAE40u;
            return;
        }
    }
    ctx->pc = 0x1CAE3Cu;
    // 0x1cae3c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1cae40u;
}
