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

// Function: entry_00180bd4
// Address: 0x180bd4 - 0x180bf4
void entry_00180bd4_0x180bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180bd4_0x180bd4");
#endif

    ctx->pc = 0x180bd4u;

label_180bd4:
    // 0x180bd4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x180bd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x180bdc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x180be0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x180be4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180be8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180bec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180BECu;
    {
        const bool branch_taken_0x180bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BECu;
        // 0x180bf0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bec) {
            ctx->pc = 0x180BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180BF4u;
}
