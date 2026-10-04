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

// Function: entry_001380d4
// Address: 0x1380d4 - 0x1380ec
void entry_001380d4_0x1380d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380d4_0x1380d4");
#endif

    ctx->pc = 0x1380d4u;

    // 0x1380d4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1380d8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1380dc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380DCu;
    {
        const bool branch_taken_0x1380dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1380dc) {
            ctx->pc = 0x1380ECu;
            return;
        }
    }
    ctx->pc = 0x1380E4u;
    // 0x1380e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E4u;
        // 0x1380e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x138104u;
            return;
        }
    }
    ctx->pc = 0x1380ECu;
}
