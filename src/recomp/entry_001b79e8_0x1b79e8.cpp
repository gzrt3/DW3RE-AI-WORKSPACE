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

// Function: entry_001b79e8
// Address: 0x1b79e8 - 0x1b7a00
void entry_001b79e8_0x1b79e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b79e8_0x1b79e8");
#endif

    ctx->pc = 0x1b79e8u;

    // 0x1b79e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B79E8u;
    {
        const bool branch_taken_0x1b79e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E8u;
        // 0x1b79ec: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e8) {
            ctx->pc = 0x1B7A00u;
            return;
        }
    }
    ctx->pc = 0x1B79F0u;
    // 0x1b79f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b79f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B79F8u;
    {
        const bool branch_taken_0x1b79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F8u;
        // 0x1b79fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f8) {
            ctx->pc = 0x1B7A9Cu;
            return;
        }
    }
    ctx->pc = 0x1B7A00u;
}
