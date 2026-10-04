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

// Function: FUN_001a4b40
// Address: 0x1a4b40 - 0x1a4b48
void FUN_001a4b40_0x1a4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4b40_0x1a4b40");
#endif

    ctx->pc = 0x1a4b40u;

    // 0x1a4b40: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1a4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a4b44: 0xc  syscall     0
    ctx->pc = 0x1a4b44u;
    ctx->pc = 0x1A4B48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4b48u;
}
