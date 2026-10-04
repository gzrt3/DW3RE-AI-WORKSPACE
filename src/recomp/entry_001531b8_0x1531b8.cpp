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

// Function: entry_001531b8
// Address: 0x1531b8 - 0x1531cc
void entry_001531b8_0x1531b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531b8_0x1531b8");
#endif

    ctx->pc = 0x1531b8u;

    // 0x1531b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531E0u;
            return;
        }
    }
    ctx->pc = 0x1531C0u;
    // 0x1531c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1531c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1531C4u;
    {
        const bool branch_taken_0x1531c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531C4u;
        // 0x1531c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531c4) {
            ctx->pc = 0x1531E0u;
            return;
        }
    }
    ctx->pc = 0x1531CCu;
}
