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

// Function: FUN_001a2b68
// Address: 0x1a2b68 - 0x1a2b70
void FUN_001a2b68_0x1a2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2b68_0x1a2b68");
#endif

    ctx->pc = 0x1a2b68u;

    // 0x1a2b68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1a2b70u;
}
