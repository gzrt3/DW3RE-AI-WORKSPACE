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

// Function: FUN_00238738
// Address: 0x238738 - 0x23873c
void FUN_00238738_0x238738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238738_0x238738");
#endif

    ctx->pc = 0x238738u;

    // 0x238738: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x23873cu;
}
