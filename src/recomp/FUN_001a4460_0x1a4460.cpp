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

// Function: FUN_001a4460
// Address: 0x1a4460 - 0x1a4468
void FUN_001a4460_0x1a4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4460_0x1a4460");
#endif

    ctx->pc = 0x1a4460u;

    // 0x1a4460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4464: 0xc  syscall     0
    ctx->pc = 0x1a4464u;
    ctx->pc = 0x1A4468u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4468u;
}
