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

// Function: FUN_001a4c50
// Address: 0x1a4c50 - 0x1a4c58
void FUN_001a4c50_0x1a4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4c50_0x1a4c50");
#endif

    ctx->pc = 0x1a4c50u;

    // 0x1a4c50: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1a4c54: 0xc  syscall     0
    ctx->pc = 0x1a4c54u;
    ctx->pc = 0x1A4C58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4c58u;
}
