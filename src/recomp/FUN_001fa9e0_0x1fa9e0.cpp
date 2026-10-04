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

// Function: FUN_001fa9e0
// Address: 0x1fa9e0 - 0x1fa9f8
void FUN_001fa9e0_0x1fa9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa9e0_0x1fa9e0");
#endif

    ctx->pc = 0x1fa9e0u;

    // 0x1fa9e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fa9e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1fa9e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fa9ec: 0x2442a5a0  addiu       $v0, $v0, -0x5A60
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
    // 0x1fa9f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fa9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fa9f4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1fa9f8u;
}
