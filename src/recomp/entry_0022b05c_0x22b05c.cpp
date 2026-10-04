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

// Function: entry_0022b05c
// Address: 0x22b05c - 0x22b074
void entry_0022b05c_0x22b05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b05c_0x22b05c");
#endif

    ctx->pc = 0x22b05cu;

    // 0x22b05c: 0x0  nop
    ctx->pc = 0x22b05cu;
    // NOP
    // 0x22b060: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x22b064: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x22b068: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b06c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B06Cu;
    {
        const bool branch_taken_0x22b06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b06c) {
            ctx->pc = 0x22B084u;
            return;
        }
    }
    ctx->pc = 0x22B074u;
}
