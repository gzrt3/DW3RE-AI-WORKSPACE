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

// Function: entry_0022ec30
// Address: 0x22ec30 - 0x22ec44
void entry_0022ec30_0x22ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec30_0x22ec30");
#endif

    ctx->pc = 0x22ec30u;

    // 0x22ec30: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22ec34: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC18u;
            return;
        }
    }
    ctx->pc = 0x22EC3Cu;
    // 0x22ec3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22EC3Cu;
    {
        const bool branch_taken_0x22ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec3c) {
            ctx->pc = 0x22EC7Cu;
            return;
        }
    }
    ctx->pc = 0x22EC44u;
}
