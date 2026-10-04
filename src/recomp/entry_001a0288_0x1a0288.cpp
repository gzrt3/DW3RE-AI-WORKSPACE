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

// Function: entry_001a0288
// Address: 0x1a0288 - 0x1a029c
void entry_001a0288_0x1a0288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0288_0x1a0288");
#endif

    ctx->pc = 0x1a0288u;

    // 0x1a0288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a028c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A028Cu;
    {
        const bool branch_taken_0x1a028c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A028Cu;
        // 0x1a0290: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a028c) {
            ctx->pc = 0x1A02ACu;
            return;
        }
    }
    ctx->pc = 0x1A0294u;
    // 0x1a0294: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0294u;
    {
        const bool branch_taken_0x1a0294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0294u;
        // 0x1a0298: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0294) {
            ctx->pc = 0x1A02BCu;
            return;
        }
    }
    ctx->pc = 0x1A029Cu;
}
