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

// Function: entry_0019f470
// Address: 0x19f470 - 0x19f47c
void entry_0019f470_0x19f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f470_0x19f470");
#endif

    ctx->pc = 0x19f470u;

    // 0x19f470: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    // 0x19f474: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19f478: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x19f47cu;
}
