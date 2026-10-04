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

// Function: entry_001695f4
// Address: 0x1695f4 - 0x1695fc
void entry_001695f4_0x1695f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001695f4_0x1695f4");
#endif

    ctx->pc = 0x1695f4u;

    // 0x1695f4: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1695f8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1695fcu;
}
