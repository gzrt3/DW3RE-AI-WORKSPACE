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

// Function: FUN_00229850
// Address: 0x229850 - 0x229854
void FUN_00229850_0x229850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00229850_0x229850");
#endif

    ctx->pc = 0x229850u;

    // 0x229850: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    ctx->pc = 0x229854u;
}
