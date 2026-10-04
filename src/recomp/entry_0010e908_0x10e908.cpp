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

// Function: entry_0010e908
// Address: 0x10e908 - 0x10e928
void entry_0010e908_0x10e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e908_0x10e908");
#endif

    ctx->pc = 0x10e908u;

label_10e908:
    // 0x10e908: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e90c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10e910: 0x28860009  slti        $a2, $a0, 0x9
    ctx->pc = 0x10e910u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e914: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e918: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e91c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x10e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x10e920: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10E920u;
    {
        const bool branch_taken_0x10e920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E920u;
        // 0x10e924: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e920) {
            ctx->pc = 0x10E908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e908;
        }
    }
    ctx->pc = 0x10E928u;
}
