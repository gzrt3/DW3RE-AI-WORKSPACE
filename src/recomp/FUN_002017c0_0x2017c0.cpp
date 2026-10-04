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

// Function: FUN_002017c0
// Address: 0x2017c0 - 0x2017d8
void FUN_002017c0_0x2017c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002017c0_0x2017c0");
#endif

    ctx->pc = 0x2017c0u;

    // 0x2017c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2017c4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2017c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2017cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2017d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2017d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2017d4: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    ctx->pc = 0x2017d8u;
}
