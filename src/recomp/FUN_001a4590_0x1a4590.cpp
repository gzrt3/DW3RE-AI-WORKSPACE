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

// Function: FUN_001a4590
// Address: 0x1a4590 - 0x1a4598
void FUN_001a4590_0x1a4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4590_0x1a4590");
#endif

    ctx->pc = 0x1a4590u;

    // 0x1a4590: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1a4594: 0xc  syscall     0
    ctx->pc = 0x1a4594u;
    ctx->pc = 0x1A4598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1a4598u;
}
