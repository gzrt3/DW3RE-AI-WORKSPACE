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

// Function: FUN_002217f0
// Address: 0x2217f0 - 0x221800
void FUN_002217f0_0x2217f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002217f0_0x2217f0");
#endif

    ctx->pc = 0x2217f0u;

    // 0x2217f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2217f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2217f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2217f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2217fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2217fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x221800u;
}
