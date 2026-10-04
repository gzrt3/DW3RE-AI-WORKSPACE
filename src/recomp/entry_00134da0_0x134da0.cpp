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

// Function: entry_00134da0
// Address: 0x134da0 - 0x134db8
void entry_00134da0_0x134da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134da0_0x134da0");
#endif

    ctx->pc = 0x134da0u;

    // 0x134da0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x134da4: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x134da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x134da8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134DA8u;
    {
        const bool branch_taken_0x134da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134da8) {
            ctx->pc = 0x134DB8u;
            return;
        }
    }
    ctx->pc = 0x134DB0u;
    // 0x134db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134db0) {
            ctx->pc = 0x134DD4u;
            return;
        }
    }
    ctx->pc = 0x134DB8u;
}
