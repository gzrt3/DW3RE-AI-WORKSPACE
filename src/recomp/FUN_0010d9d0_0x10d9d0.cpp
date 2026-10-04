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

// Function: FUN_0010d9d0
// Address: 0x10d9d0 - 0x10d9e8
void FUN_0010d9d0_0x10d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d9d0_0x10d9d0");
#endif

    ctx->pc = 0x10d9d0u;

    // 0x10d9d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10d9d4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x10d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x10d9d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d9dc: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x10d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x10d9e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10d9e4: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x10d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    ctx->pc = 0x10d9e8u;
}
