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

// Function: entry_0019f6e8
// Address: 0x19f6e8 - 0x19f6f0
void entry_0019f6e8_0x19f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6e8_0x19f6e8");
#endif

    ctx->pc = 0x19f6e8u;

    // 0x19f6e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19f6ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x19f6f0u;
}
