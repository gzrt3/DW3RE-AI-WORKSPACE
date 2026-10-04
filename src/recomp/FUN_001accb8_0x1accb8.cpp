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

// Function: FUN_001accb8
// Address: 0x1accb8 - 0x1accc0
void FUN_001accb8_0x1accb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001accb8_0x1accb8");
#endif

    ctx->pc = 0x1accb8u;

    // 0x1accb8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1accb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1accbc: 0xc  syscall     0
    ctx->pc = 0x1accbcu;
    ctx->pc = 0x1ACCC0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1accc0u;
}
