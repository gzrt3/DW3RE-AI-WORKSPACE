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

// Function: entry_001a5700
// Address: 0x1a5700 - 0x1a5714
void entry_001a5700_0x1a5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5700_0x1a5700");
#endif

    ctx->pc = 0x1a5700u;

    // 0x1a5700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5714u;
            return;
        }
    }
    ctx->pc = 0x1A5708u;
    // 0x1a5708: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
    // 0x1a570c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A571Cu;
            return;
        }
    }
    ctx->pc = 0x1A5714u;
}
