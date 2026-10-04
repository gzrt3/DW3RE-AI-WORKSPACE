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

// Function: FUN_001a46d0
// Address: 0x1a46d0 - 0x1a46d8
void FUN_001a46d0_0x1a46d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a46d0_0x1a46d0");
#endif

    ctx->pc = 0x1a46d0u;

    // 0x1a46d0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1a46d4: 0xc  syscall     0
    ctx->pc = 0x1a46d4u;
    ctx->pc = 0x1A46D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a46d8u;
}
