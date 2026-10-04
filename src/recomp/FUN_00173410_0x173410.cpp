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

// Function: FUN_00173410
// Address: 0x173410 - 0x173428
void FUN_00173410_0x173410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173410_0x173410");
#endif

    ctx->pc = 0x173410u;

    // 0x173410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173414: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x173414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x173418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17341c: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x17341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x173420: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x173424: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x173424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    ctx->pc = 0x173428u;
}
