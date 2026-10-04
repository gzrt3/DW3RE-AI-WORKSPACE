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

// Function: entry_001b1b9c
// Address: 0x1b1b9c - 0x1b1bb0
void entry_001b1b9c_0x1b1b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b9c_0x1b1b9c");
#endif

    ctx->pc = 0x1b1b9cu;

    // 0x1b1b9c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1B9Cu;
    {
        const bool branch_taken_0x1b1b9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B9Cu;
        // 0x1b1ba0: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b9c) {
            ctx->pc = 0x1B1BB0u;
            return;
        }
    }
    ctx->pc = 0x1B1BA4u;
    // 0x1b1ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1BA8u;
    {
        const bool branch_taken_0x1b1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA8u;
        // 0x1b1bac: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ba8) {
            ctx->pc = 0x1B1BB8u;
            return;
        }
    }
    ctx->pc = 0x1B1BB0u;
}
