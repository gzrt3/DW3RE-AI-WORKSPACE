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

// Function: FUN_001ad780
// Address: 0x1ad780 - 0x1ad788
void FUN_001ad780_0x1ad780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad780_0x1ad780");
#endif

    ctx->pc = 0x1ad780u;

    // 0x1ad780: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1ad784: 0xc  syscall     0
    ctx->pc = 0x1ad784u;
    ctx->pc = 0x1AD788u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1ad788u;
}
