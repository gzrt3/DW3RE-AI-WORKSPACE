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

// Function: FUN_001ad508
// Address: 0x1ad508 - 0x1ad510
void FUN_001ad508_0x1ad508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad508_0x1ad508");
#endif

    ctx->pc = 0x1ad508u;

    // 0x1ad508: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1ad508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ad50c: 0xc  syscall     0
    ctx->pc = 0x1ad50cu;
    ctx->pc = 0x1AD510u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1ad510u;
}
