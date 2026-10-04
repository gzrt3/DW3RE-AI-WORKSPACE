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

// Function: FUN_001ae2a0
// Address: 0x1ae2a0 - 0x1ae2a8
void FUN_001ae2a0_0x1ae2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae2a0_0x1ae2a0");
#endif

    ctx->pc = 0x1ae2a0u;

    // 0x1ae2a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae2a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x1ae2a8u;
}
