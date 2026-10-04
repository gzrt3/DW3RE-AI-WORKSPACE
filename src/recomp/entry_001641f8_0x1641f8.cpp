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

// Function: entry_001641f8
// Address: 0x1641f8 - 0x164204
void entry_001641f8_0x1641f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641f8_0x1641f8");
#endif

    ctx->pc = 0x1641f8u;

    // 0x1641f8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1641fc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1641FCu;
    {
        const bool branch_taken_0x1641fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1641fc) {
            ctx->pc = 0x1641B4u;
            return;
        }
    }
    ctx->pc = 0x164204u;
}
