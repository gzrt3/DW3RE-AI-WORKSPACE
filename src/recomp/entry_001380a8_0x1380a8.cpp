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

// Function: entry_001380a8
// Address: 0x1380a8 - 0x1380c0
void entry_001380a8_0x1380a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380a8_0x1380a8");
#endif

    ctx->pc = 0x1380a8u;

    // 0x1380a8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1380ac: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1380acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1380b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380B0u;
    {
        const bool branch_taken_0x1380b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B0u;
        // 0x1380b4: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380b0) {
            ctx->pc = 0x1380C0u;
            return;
        }
    }
    ctx->pc = 0x1380B8u;
    // 0x1380b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1380B8u;
    {
        const bool branch_taken_0x1380b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B8u;
        // 0x1380bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380b8) {
            ctx->pc = 0x1380D4u;
            return;
        }
    }
    ctx->pc = 0x1380C0u;
}
