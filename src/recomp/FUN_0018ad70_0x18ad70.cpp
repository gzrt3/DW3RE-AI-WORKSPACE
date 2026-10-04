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

// Function: FUN_0018ad70
// Address: 0x18ad70 - 0x18ad88
void FUN_0018ad70_0x18ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ad70_0x18ad70");
#endif

    ctx->pc = 0x18ad70u;

    // 0x18ad70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18ad74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18ad74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x18ad78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18ad7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x18ad80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ad84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x18ad88u;
}
