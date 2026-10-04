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

// Function: FUN_00171e80
// Address: 0x171e80 - 0x171e9c
void FUN_00171e80_0x171e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171e80_0x171e80");
#endif

    ctx->pc = 0x171e80u;

    // 0x171e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x171e84: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x171e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x171e88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x171e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x171e8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x171e90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x171e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x171e94: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x171e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x171e98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x171e9cu;
}
