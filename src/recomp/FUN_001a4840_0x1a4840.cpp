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

// Function: FUN_001a4840
// Address: 0x1a4840 - 0x1a4848
void FUN_001a4840_0x1a4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4840_0x1a4840");
#endif

    ctx->pc = 0x1a4840u;

    // 0x1a4840: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a4844: 0xc  syscall     0
    ctx->pc = 0x1a4844u;
    ctx->pc = 0x1A4848u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4848u;
}
