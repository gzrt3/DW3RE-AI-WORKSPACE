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

// Function: FUN_001a4c30
// Address: 0x1a4c30 - 0x1a4c38
void FUN_001a4c30_0x1a4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4c30_0x1a4c30");
#endif

    ctx->pc = 0x1a4c30u;

    // 0x1a4c30: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1a4c34: 0xc  syscall     0
    ctx->pc = 0x1a4c34u;
    ctx->pc = 0x1A4C38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4c38u;
}
