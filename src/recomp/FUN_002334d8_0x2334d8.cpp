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

// Function: FUN_002334d8
// Address: 0x2334d8 - 0x2334dc
void FUN_002334d8_0x2334d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002334d8_0x2334d8");
#endif

    ctx->pc = 0x2334d8u;

    // 0x2334d8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->pc = 0x2334dcu;
}
