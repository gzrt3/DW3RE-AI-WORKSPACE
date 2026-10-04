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

// Function: FUN_001a2b20
// Address: 0x1a2b20 - 0x1a2b2c
void FUN_001a2b20_0x1a2b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2b20_0x1a2b20");
#endif

    ctx->pc = 0x1a2b20u;

    // 0x1a2b20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2b24: 0xac47009c  sw          $a3, 0x9C($v0)
    ctx->pc = 0x1a2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 7));
    // 0x1a2b28: 0xac450094  sw          $a1, 0x94($v0)
    ctx->pc = 0x1a2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->pc = 0x1a2b2cu;
}
