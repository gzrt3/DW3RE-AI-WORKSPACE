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

// Function: FUN_001c5fa0
// Address: 0x1c5fa0 - 0x1c5fb8
void FUN_001c5fa0_0x1c5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5fa0_0x1c5fa0");
#endif

    ctx->pc = 0x1c5fa0u;

    // 0x1c5fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c5fa4: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1c5fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c5fa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c5fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c5fb4: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x1c5fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
    ctx->pc = 0x1c5fb8u;
}
