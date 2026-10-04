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

// Function: entry_00144cfc
// Address: 0x144cfc - 0x144d1c
void entry_00144cfc_0x144cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144cfc_0x144cfc");
#endif

    ctx->pc = 0x144cfcu;

label_144cfc:
    // 0x144cfc: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x144d00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x144d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x144d04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144d08: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x144d0c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x144d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x144d10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144d14: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144D14u;
    {
        const bool branch_taken_0x144d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d14) {
            ctx->pc = 0x144CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144cfc;
        }
    }
    ctx->pc = 0x144D1Cu;
}
