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

// Function: FUN_001a4580
// Address: 0x1a4580 - 0x1a4588
void FUN_001a4580_0x1a4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4580_0x1a4580");
#endif

    ctx->pc = 0x1a4580u;

    // 0x1a4580: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a4584: 0xc  syscall     0
    ctx->pc = 0x1a4584u;
    ctx->pc = 0x1A4588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4588u;
}
