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

// Function: FUN_0014c6a0
// Address: 0x14c6a0 - 0x14c6c4
void FUN_0014c6a0_0x14c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c6a0_0x14c6a0");
#endif

    ctx->pc = 0x14c6a0u;

    // 0x14c6a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14c6a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14c6a8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14c6ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14c6b0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x14c6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14c6b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14c6b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14c6b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14c6c0: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->pc = 0x14c6c4u;
}
