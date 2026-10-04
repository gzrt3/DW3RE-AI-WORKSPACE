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

// Function: FUN_00105a60
// Address: 0x105a60 - 0x105a70
void FUN_00105a60_0x105a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105a60_0x105a60");
#endif

    ctx->pc = 0x105a60u;

    // 0x105a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x105a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x105a64: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x105a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x105a68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x105a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x105a6c: 0x2463b140  addiu       $v1, $v1, -0x4EC0
    ctx->pc = 0x105a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947136));
    ctx->pc = 0x105a70u;
}
