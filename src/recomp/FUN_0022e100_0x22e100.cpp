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

// Function: FUN_0022e100
// Address: 0x22e100 - 0x22e114
void FUN_0022e100_0x22e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022e100_0x22e100");
#endif

    ctx->pc = 0x22e100u;

    // 0x22e100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22e104: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22e108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22e10c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x22e114u;
}
