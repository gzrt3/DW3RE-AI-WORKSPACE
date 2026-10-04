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

// Function: FUN_001b99d0
// Address: 0x1b99d0 - 0x1b99dc
void FUN_001b99d0_0x1b99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b99d0_0x1b99d0");
#endif

    ctx->pc = 0x1b99d0u;

    // 0x1b99d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b99d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b99d4: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1b99d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b99d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b99d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    ctx->pc = 0x1b99dcu;
}
