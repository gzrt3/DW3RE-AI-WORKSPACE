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

// Function: FUN_0018be10
// Address: 0x18be10 - 0x18be24
void FUN_0018be10_0x18be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018be10_0x18be10");
#endif

    ctx->pc = 0x18be10u;

    // 0x18be10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18be14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x18be18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18be1c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x18be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x18be20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x18be24u;
}
