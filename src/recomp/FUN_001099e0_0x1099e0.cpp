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

// Function: FUN_001099e0
// Address: 0x1099e0 - 0x1099f8
void FUN_001099e0_0x1099e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001099e0_0x1099e0");
#endif

    ctx->pc = 0x1099e0u;

    // 0x1099e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1099e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1099e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1099e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1099e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1099e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1099ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1099ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1099f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1099f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1099f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1099f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1099f8u;
}
