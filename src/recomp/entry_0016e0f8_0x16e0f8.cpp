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

// Function: entry_0016e0f8
// Address: 0x16e0f8 - 0x16e110
void entry_0016e0f8_0x16e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e0f8_0x16e0f8");
#endif

    ctx->pc = 0x16e0f8u;

    // 0x16e0f8: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16e0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e100: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E100u;
    {
        const bool branch_taken_0x16e100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e100) {
            ctx->pc = 0x16E110u;
            return;
        }
    }
    ctx->pc = 0x16E108u;
    // 0x16e108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E108u;
    {
        const bool branch_taken_0x16e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e108) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16E110u;
}
