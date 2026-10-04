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

// Function: FUN_00218730
// Address: 0x218730 - 0x218750
void FUN_00218730_0x218730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00218730_0x218730");
#endif

    ctx->pc = 0x218730u;

    // 0x218730: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x218734: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x218738: 0x344a8889  ori         $t2, $v0, 0x8889
    ctx->pc = 0x218738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x21873c: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x218740: 0x1460018  mult        $zero, $t2, $a2
    ctx->pc = 0x218740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x218744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x218748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21874c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x218750u;
}
