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

// Function: entry_00223d38
// Address: 0x223d38 - 0x223d44
void entry_00223d38_0x223d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223d38_0x223d38");
#endif

    ctx->pc = 0x223d38u;

    // 0x223d38: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x223d3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x223D3Cu;
    {
        const bool branch_taken_0x223d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d3c) {
            ctx->pc = 0x223D0Cu;
            return;
        }
    }
    ctx->pc = 0x223D44u;
}
