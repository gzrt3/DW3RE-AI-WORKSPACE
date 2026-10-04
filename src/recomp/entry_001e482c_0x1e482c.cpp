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

// Function: entry_001e482c
// Address: 0x1e482c - 0x1e4838
void entry_001e482c_0x1e482c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e482c_0x1e482c");
#endif

    ctx->pc = 0x1e482cu;

    // 0x1e482c: 0x0  nop
    ctx->pc = 0x1e482cu;
    // NOP
    // 0x1e4830: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x1e4834: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1e4838u;
}
