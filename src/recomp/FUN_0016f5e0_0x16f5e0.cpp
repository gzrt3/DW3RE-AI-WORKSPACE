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

// Function: FUN_0016f5e0
// Address: 0x16f5e0 - 0x16f5f0
void FUN_0016f5e0_0x16f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f5e0_0x16f5e0");
#endif

    ctx->pc = 0x16f5e0u;

    // 0x16f5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16f5e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16f5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16f5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x16f5f0u;
}
