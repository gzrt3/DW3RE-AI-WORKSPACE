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

// Function: FUN_001a72f8
// Address: 0x1a72f8 - 0x1a7300
void FUN_001a72f8_0x1a72f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a72f8_0x1a72f8");
#endif

    ctx->pc = 0x1a72f8u;

    // 0x1a72f8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a72fc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->pc = 0x1a7300u;
}
