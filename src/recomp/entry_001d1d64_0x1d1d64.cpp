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

// Function: entry_001d1d64
// Address: 0x1d1d64 - 0x1d1d74
void entry_001d1d64_0x1d1d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1d64_0x1d1d64");
#endif

    ctx->pc = 0x1d1d64u;

    // 0x1d1d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1d68: 0x244201e4  addiu       $v0, $v0, 0x1E4
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 484));
    // 0x1d1d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1d70: 0x244a6c00  addiu       $t2, $v0, 0x6C00
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    ctx->pc = 0x1d1d74u;
}
