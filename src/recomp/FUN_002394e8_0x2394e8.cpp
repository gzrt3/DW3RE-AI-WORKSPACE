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

// Function: FUN_002394e8
// Address: 0x2394e8 - 0x2394ec
void FUN_002394e8_0x2394e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002394e8_0x2394e8");
#endif

    ctx->pc = 0x2394e8u;

    // 0x2394e8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2394e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    ctx->pc = 0x2394ecu;
}
