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

// Function: entry_0023f8a0
// Address: 0x23f8a0 - 0x23f8bc
void entry_0023f8a0_0x23f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f8a0_0x23f8a0");
#endif

    ctx->pc = 0x23f8a0u;

label_23f8a0:
    // 0x23f8a0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x23f8a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23f8a8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x23f8ac: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x23f8b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23f8b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23F8B4u;
    {
        const bool branch_taken_0x23f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f8b4) {
            ctx->pc = 0x23F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F8BCu;
}
