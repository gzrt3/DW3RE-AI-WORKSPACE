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

// Function: FUN_001fb8f0
// Address: 0x1fb8f0 - 0x1fb90c
void FUN_001fb8f0_0x1fb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb8f0_0x1fb8f0");
#endif

    ctx->pc = 0x1fb8f0u;

    // 0x1fb8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fb8f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1fb8f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fb8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fb8fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fb900: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fb904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb908: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1fb90cu;
}
