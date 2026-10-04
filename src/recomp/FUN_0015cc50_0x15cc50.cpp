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

// Function: FUN_0015cc50
// Address: 0x15cc50 - 0x15cc60
void FUN_0015cc50_0x15cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015cc50_0x15cc50");
#endif

    ctx->pc = 0x15cc50u;

    // 0x15cc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15cc54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x15cc58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cc5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x15cc60u;
}
