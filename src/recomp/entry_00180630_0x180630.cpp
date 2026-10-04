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

// Function: entry_00180630
// Address: 0x180630 - 0x18063c
void entry_00180630_0x180630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180630_0x180630");
#endif

    ctx->pc = 0x180630u;

    // 0x180630: 0x8f828804  lw          $v0, -0x77FC($gp)
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x180634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180638: 0xaf828804  sw          $v0, -0x77FC($gp)
    ctx->pc = 0x180638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
    ctx->pc = 0x18063cu;
}
