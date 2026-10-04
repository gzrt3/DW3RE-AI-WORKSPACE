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

// Function: entry_001153b4
// Address: 0x1153b4 - 0x1153c4
void entry_001153b4_0x1153b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153b4_0x1153b4");
#endif

    ctx->pc = 0x1153b4u;

    // 0x1153b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153B4u;
    {
        const bool branch_taken_0x1153b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B4u;
        // 0x1153b8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b4) {
            ctx->pc = 0x1153C4u;
            return;
        }
    }
    ctx->pc = 0x1153BCu;
    // 0x1153bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1153BCu;
    {
        const bool branch_taken_0x1153bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153BCu;
        // 0x1153c0: 0x2463e7f0  addiu       $v1, $v1, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153bc) {
            ctx->pc = 0x115400u;
            return;
        }
    }
    ctx->pc = 0x1153C4u;
}
