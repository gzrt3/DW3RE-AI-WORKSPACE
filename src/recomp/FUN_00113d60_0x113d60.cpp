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

// Function: FUN_00113d60
// Address: 0x113d60 - 0x113d7c
void FUN_00113d60_0x113d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113d60_0x113d60");
#endif

    ctx->pc = 0x113d60u;

    // 0x113d60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x113d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113d64: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x113d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113d68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x113d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113d6c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x113d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x113d70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x113d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x113d74: 0x24423c00  addiu       $v0, $v0, 0x3C00
    ctx->pc = 0x113d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15360));
    // 0x113d78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    ctx->pc = 0x113d7cu;
}
