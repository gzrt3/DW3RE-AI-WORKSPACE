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

// Function: entry_001e21c0
// Address: 0x1e21c0 - 0x1e21e0
void entry_001e21c0_0x1e21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e21c0_0x1e21c0");
#endif

    ctx->pc = 0x1e21c0u;

    // 0x1e21c0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E21C0u;
    {
        const bool branch_taken_0x1e21c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e21c0) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E21C8u;
    // 0x1e21c8: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e21cc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1e21ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e21d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E21D0u;
    {
        const bool branch_taken_0x1e21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21d0) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E21D8u;
    // 0x1e21d8: 0xaf838d3c  sw          $v1, -0x72C4($gp)
    ctx->pc = 0x1e21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 3));
    // 0x1e21dc: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    ctx->pc = 0x1e21e0u;
}
