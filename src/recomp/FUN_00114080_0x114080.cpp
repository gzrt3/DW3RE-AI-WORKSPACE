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

// Function: FUN_00114080
// Address: 0x114080 - 0x114098
void FUN_00114080_0x114080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114080_0x114080");
#endif

    ctx->pc = 0x114080u;

    // 0x114080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114084: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x114084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x114088: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11408c: 0x278380d0  addiu       $v1, $gp, -0x7F30
    ctx->pc = 0x11408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
    // 0x114090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x114090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x114094: 0x3421fc60  ori         $at, $at, 0xFC60
    ctx->pc = 0x114094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64608);
    ctx->pc = 0x114098u;
}
