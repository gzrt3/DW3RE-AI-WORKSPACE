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

// Function: entry_0010fb2c
// Address: 0x10fb2c - 0x10fb44
void entry_0010fb2c_0x10fb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb2c_0x10fb2c");
#endif

    ctx->pc = 0x10fb2cu;

    // 0x10fb2c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FB2Cu;
    {
        const bool branch_taken_0x10fb2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB2Cu;
        // 0x10fb30: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb2c) {
            ctx->pc = 0x10FB44u;
            return;
        }
    }
    ctx->pc = 0x10FB34u;
    // 0x10fb34: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fb38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB38u;
    {
        const bool branch_taken_0x10fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB38u;
        // 0x10fb3c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb38) {
            ctx->pc = 0x10FB48u;
            return;
        }
    }
    ctx->pc = 0x10FB40u;
    // 0x10fb40: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x10fb40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fb44u;
}
