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

// Function: FUN_0014e8b0
// Address: 0x14e8b0 - 0x14e8c8
void FUN_0014e8b0_0x14e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e8b0_0x14e8b0");
#endif

    ctx->pc = 0x14e8b0u;

    // 0x14e8b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14e8b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14e8b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14e8bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14e8c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14e8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x14e8c8u;
}
