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

// Function: entry_00199238
// Address: 0x199238 - 0x199254
void entry_00199238_0x199238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199238_0x199238");
#endif

    ctx->pc = 0x199238u;

label_199238:
    // 0x199238: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19923c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19923Cu;
    {
        const bool branch_taken_0x19923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19923Cu;
        // 0x199240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19923c) {
            ctx->pc = 0x19928Cu;
            return;
        }
    }
    ctx->pc = 0x199244u;
    // 0x199244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199248: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x199248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x19924c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19924Cu;
    {
        const bool branch_taken_0x19924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19924Cu;
        // 0x199250: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19924c) {
            ctx->pc = 0x199238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199238;
        }
    }
    ctx->pc = 0x199254u;
}
