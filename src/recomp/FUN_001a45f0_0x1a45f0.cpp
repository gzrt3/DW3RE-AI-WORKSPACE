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

// Function: FUN_001a45f0
// Address: 0x1a45f0 - 0x1a45f8
void FUN_001a45f0_0x1a45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a45f0_0x1a45f0");
#endif

    ctx->pc = 0x1a45f0u;

    // 0x1a45f0: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1a45f4: 0xc  syscall     0
    ctx->pc = 0x1a45f4u;
    ctx->pc = 0x1A45F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a45f8u;
}
