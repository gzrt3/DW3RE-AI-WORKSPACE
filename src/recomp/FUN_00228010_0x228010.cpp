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

// Function: FUN_00228010
// Address: 0x228010 - 0x22801c
void FUN_00228010_0x228010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00228010_0x228010");
#endif

    ctx->pc = 0x228010u;

    // 0x228010: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x228010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x228014: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x228014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x228018: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x228018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    ctx->pc = 0x22801cu;
}
