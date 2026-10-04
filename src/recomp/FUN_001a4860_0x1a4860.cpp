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

// Function: FUN_001a4860
// Address: 0x1a4860 - 0x1a4868
void FUN_001a4860_0x1a4860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4860_0x1a4860");
#endif

    ctx->pc = 0x1a4860u;

    // 0x1a4860: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a4864: 0xc  syscall     0
    ctx->pc = 0x1a4864u;
    ctx->pc = 0x1A4868u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4868u;
}
