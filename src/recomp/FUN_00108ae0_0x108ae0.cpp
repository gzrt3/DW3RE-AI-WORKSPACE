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

// Function: FUN_00108ae0
// Address: 0x108ae0 - 0x108af4
void FUN_00108ae0_0x108ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108ae0_0x108ae0");
#endif

    ctx->pc = 0x108ae0u;

    // 0x108ae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x108ae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x108ae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x108ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x108aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x108aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x108af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x108af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x108af4u;
}
