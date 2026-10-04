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

// Function: entry_0010084c
// Address: 0x10084c - 0x100858
void entry_0010084c_0x10084c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010084c_0x10084c");
#endif

    ctx->pc = 0x10084cu;

    // 0x10084c: 0x0  nop
    ctx->pc = 0x10084cu;
    // NOP
    // 0x100850: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x100850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x100854: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x100854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->pc = 0x100858u;
}
