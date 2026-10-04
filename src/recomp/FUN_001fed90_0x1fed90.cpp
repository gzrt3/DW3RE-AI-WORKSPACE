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

// Function: FUN_001fed90
// Address: 0x1fed90 - 0x1fed98
void FUN_001fed90_0x1fed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fed90_0x1fed90");
#endif

    ctx->pc = 0x1fed90u;

    // 0x1fed90: 0x8f83908c  lw          $v1, -0x6F74($gp)
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x1fed94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fed94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1fed98u;
}
