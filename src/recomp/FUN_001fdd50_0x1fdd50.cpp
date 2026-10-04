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

// Function: FUN_001fdd50
// Address: 0x1fdd50 - 0x1fdd58
void FUN_001fdd50_0x1fdd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fdd50_0x1fdd50");
#endif

    ctx->pc = 0x1fdd50u;

    // 0x1fdd50: 0x8f83905c  lw          $v1, -0x6FA4($gp)
    ctx->pc = 0x1fdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
    // 0x1fdd54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1fdd58u;
}
