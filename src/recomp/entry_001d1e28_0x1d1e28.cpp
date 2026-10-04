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

// Function: entry_001d1e28
// Address: 0x1d1e28 - 0x1d1e30
void entry_001d1e28_0x1d1e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e28_0x1d1e28");
#endif

    ctx->pc = 0x1d1e28u;

    // 0x1d1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1e2c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1d1e30u;
}
