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

// Function: entry_0019f5f8
// Address: 0x19f5f8 - 0x19f604
void entry_0019f5f8_0x19f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5f8_0x19f5f8");
#endif

    ctx->pc = 0x19f5f8u;

    // 0x19f5f8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x19f5fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f600: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x19f604u;
}
