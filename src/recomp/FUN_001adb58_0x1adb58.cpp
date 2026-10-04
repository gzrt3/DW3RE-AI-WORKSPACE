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

// Function: FUN_001adb58
// Address: 0x1adb58 - 0x1adb60
void FUN_001adb58_0x1adb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adb58_0x1adb58");
#endif

    ctx->pc = 0x1adb58u;

    // 0x1adb58: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1adb5c: 0xc  syscall     0
    ctx->pc = 0x1adb5cu;
    ctx->pc = 0x1ADB60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1adb60u;
}
