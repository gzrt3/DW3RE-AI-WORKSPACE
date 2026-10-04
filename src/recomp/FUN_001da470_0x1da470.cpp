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

// Function: FUN_001da470
// Address: 0x1da470 - 0x1da480
void FUN_001da470_0x1da470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001da470_0x1da470");
#endif

    ctx->pc = 0x1da470u;

    // 0x1da470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1da474: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1da478: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1da478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1da47c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1da47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1da480u;
}
