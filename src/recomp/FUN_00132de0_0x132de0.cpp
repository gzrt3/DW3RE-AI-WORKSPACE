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

// Function: FUN_00132de0
// Address: 0x132de0 - 0x132df4
void FUN_00132de0_0x132de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132de0_0x132de0");
#endif

    ctx->pc = 0x132de0u;

    // 0x132de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132de4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x132de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x132de8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132dec: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x132decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x132df0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x132df4u;
}
