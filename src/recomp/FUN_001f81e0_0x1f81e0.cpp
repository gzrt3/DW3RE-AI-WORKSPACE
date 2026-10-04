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

// Function: FUN_001f81e0
// Address: 0x1f81e0 - 0x1f81fc
void FUN_001f81e0_0x1f81e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f81e0_0x1f81e0");
#endif

    ctx->pc = 0x1f81e0u;

    // 0x1f81e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1f81e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1f81e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f81e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f81ec: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
    // 0x1f81f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f81f4: 0x2442c558  addiu       $v0, $v0, -0x3AA8
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x1f81f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1f81fcu;
}
