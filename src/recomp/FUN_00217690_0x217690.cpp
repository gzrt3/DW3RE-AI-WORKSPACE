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

// Function: FUN_00217690
// Address: 0x217690 - 0x2176a8
void FUN_00217690_0x217690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00217690_0x217690");
#endif

    ctx->pc = 0x217690u;

    // 0x217690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217694: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x217694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x217698: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x217698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21769c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2176a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2176a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2176a4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2176a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    ctx->pc = 0x2176a8u;
}
