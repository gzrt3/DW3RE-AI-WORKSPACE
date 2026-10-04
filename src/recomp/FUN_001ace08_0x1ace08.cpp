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

// Function: FUN_001ace08
// Address: 0x1ace08 - 0x1ace10
void FUN_001ace08_0x1ace08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ace08_0x1ace08");
#endif

    ctx->pc = 0x1ace08u;

    // 0x1ace08: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1ace0c: 0xc  syscall     0
    ctx->pc = 0x1ace0cu;
    ctx->pc = 0x1ACE10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1ace10u;
}
