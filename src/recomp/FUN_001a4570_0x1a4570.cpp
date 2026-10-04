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

// Function: FUN_001a4570
// Address: 0x1a4570 - 0x1a4578
void FUN_001a4570_0x1a4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4570_0x1a4570");
#endif

    ctx->pc = 0x1a4570u;

    // 0x1a4570: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a4574: 0xc  syscall     0
    ctx->pc = 0x1a4574u;
    ctx->pc = 0x1A4578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4578u;
}
