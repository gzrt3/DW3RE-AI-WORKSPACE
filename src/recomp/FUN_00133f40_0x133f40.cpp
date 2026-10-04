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

// Function: FUN_00133f40
// Address: 0x133f40 - 0x133f50
void FUN_00133f40_0x133f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133f40_0x133f40");
#endif

    ctx->pc = 0x133f40u;

    // 0x133f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133f44: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x133f48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x133f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x133f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x133f50u;
}
