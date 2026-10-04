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

// Function: entry_001329b4
// Address: 0x1329b4 - 0x1329c4
void entry_001329b4_0x1329b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001329b4_0x1329b4");
#endif

    ctx->pc = 0x1329b4u;

    // 0x1329b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329B4u;
    {
        const bool branch_taken_0x1329b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329B4u;
        // 0x1329b8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329b4) {
            ctx->pc = 0x1329C4u;
            return;
        }
    }
    ctx->pc = 0x1329BCu;
    // 0x1329bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1329BCu;
    {
        const bool branch_taken_0x1329bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329BCu;
        // 0x1329c0: 0x2484e7f0  addiu       $a0, $a0, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329bc) {
            ctx->pc = 0x132A00u;
            return;
        }
    }
    ctx->pc = 0x1329C4u;
}
