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

// Function: FUN_001a4760
// Address: 0x1a4760 - 0x1a4768
void FUN_001a4760_0x1a4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4760_0x1a4760");
#endif

    ctx->pc = 0x1a4760u;

    // 0x1a4760: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x1a4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x1a4764: 0xc  syscall     0
    ctx->pc = 0x1a4764u;
    ctx->pc = 0x1A4768u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4768u;
}
