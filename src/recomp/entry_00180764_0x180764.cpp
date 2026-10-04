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

// Function: entry_00180764
// Address: 0x180764 - 0x18076c
void entry_00180764_0x180764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180764_0x180764");
#endif

    ctx->pc = 0x180764u;

    // 0x180764: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x180768: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->pc = 0x18076cu;
}
