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

// Function: entry_00134bd0
// Address: 0x134bd0 - 0x134be8
void entry_00134bd0_0x134bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134bd0_0x134bd0");
#endif

    ctx->pc = 0x134bd0u;

    // 0x134bd0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x134bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x134bd4: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x134bd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134BD8u;
    {
        const bool branch_taken_0x134bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134bd8) {
            ctx->pc = 0x134BE8u;
            return;
        }
    }
    ctx->pc = 0x134BE0u;
    // 0x134be0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134BE0u;
    {
        const bool branch_taken_0x134be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134be0) {
            ctx->pc = 0x134C04u;
            return;
        }
    }
    ctx->pc = 0x134BE8u;
}
