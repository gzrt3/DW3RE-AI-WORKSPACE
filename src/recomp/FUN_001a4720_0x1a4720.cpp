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

// Function: FUN_001a4720
// Address: 0x1a4720 - 0x1a4728
void FUN_001a4720_0x1a4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4720_0x1a4720");
#endif

    ctx->pc = 0x1a4720u;

    // 0x1a4720: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a4724: 0xc  syscall     0
    ctx->pc = 0x1a4724u;
    ctx->pc = 0x1A4728u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4728u;
}
