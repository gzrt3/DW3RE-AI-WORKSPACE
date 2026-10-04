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

// Function: entry_001755d0
// Address: 0x1755d0 - 0x1755e4
void entry_001755d0_0x1755d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755d0_0x1755d0");
#endif

    ctx->pc = 0x1755d0u;

    // 0x1755d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1755d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1755d4: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755D4u;
    {
        const bool branch_taken_0x1755d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755D4u;
        // 0x1755d8: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755d4) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755DCu;
    // 0x1755dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755E4u;
}
