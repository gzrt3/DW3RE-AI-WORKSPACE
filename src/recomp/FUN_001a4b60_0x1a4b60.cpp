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

// Function: FUN_001a4b60
// Address: 0x1a4b60 - 0x1a4b68
void FUN_001a4b60_0x1a4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4b60_0x1a4b60");
#endif

    ctx->pc = 0x1a4b60u;

    // 0x1a4b60: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1a4b64: 0xc  syscall     0
    ctx->pc = 0x1a4b64u;
    ctx->pc = 0x1A4B68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4b68u;
}
