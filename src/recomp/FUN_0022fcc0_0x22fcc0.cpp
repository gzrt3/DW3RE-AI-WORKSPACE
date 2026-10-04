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

// Function: FUN_0022fcc0
// Address: 0x22fcc0 - 0x22fcc8
void FUN_0022fcc0_0x22fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022fcc0_0x22fcc0");
#endif

    ctx->pc = 0x22fcc0u;

    // 0x22fcc0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x22fcc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x22fcc8u;
}
