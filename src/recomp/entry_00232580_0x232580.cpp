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

// Function: entry_00232580
// Address: 0x232580 - 0x2325a4
void entry_00232580_0x232580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232580_0x232580");
#endif

    ctx->pc = 0x232580u;

label_232580:
    // 0x232580: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x232580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x232584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x232588: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x23258c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x23258cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x232590: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x232594: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x232594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x232598: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23259c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23259Cu;
    {
        const bool branch_taken_0x23259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23259c) {
            ctx->pc = 0x232580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232580;
        }
    }
    ctx->pc = 0x2325A4u;
}
