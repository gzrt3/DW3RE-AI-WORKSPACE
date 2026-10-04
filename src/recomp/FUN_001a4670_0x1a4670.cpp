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

// Function: FUN_001a4670
// Address: 0x1a4670 - 0x1a4678
void FUN_001a4670_0x1a4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4670_0x1a4670");
#endif

    ctx->pc = 0x1a4670u;

    // 0x1a4670: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a4674: 0xc  syscall     0
    ctx->pc = 0x1a4674u;
    ctx->pc = 0x1A4678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4678u;
}
