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

// Function: FUN_0015b6a0
// Address: 0x15b6a0 - 0x15b6b8
void FUN_0015b6a0_0x15b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b6a0_0x15b6a0");
#endif

    ctx->pc = 0x15b6a0u;

    // 0x15b6a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15b6a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15b6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15b6ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b6b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b6b4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x15b6b8u;
}
