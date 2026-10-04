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

// Function: FUN_001a4af0
// Address: 0x1a4af0 - 0x1a4af8
void FUN_001a4af0_0x1a4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4af0_0x1a4af0");
#endif

    ctx->pc = 0x1a4af0u;

    // 0x1a4af0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1a4af4: 0xc  syscall     0
    ctx->pc = 0x1a4af4u;
    ctx->pc = 0x1A4AF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4af8u;
}
