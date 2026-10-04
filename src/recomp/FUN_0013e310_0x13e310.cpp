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

// Function: FUN_0013e310
// Address: 0x13e310 - 0x13e324
void FUN_0013e310_0x13e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e310_0x13e310");
#endif

    ctx->pc = 0x13e310u;

    // 0x13e310: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13e314: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e318: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13e31c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13e320: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x13e324u;
}
