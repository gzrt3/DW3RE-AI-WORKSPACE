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

// Function: FUN_00127920
// Address: 0x127920 - 0x127940
void FUN_00127920_0x127920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127920_0x127920");
#endif

    ctx->pc = 0x127920u;

    // 0x127920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127924: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x127928: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x127928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12792c: 0x2442fcf0  addiu       $v0, $v0, -0x310
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x127930: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x127930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x127934: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x127938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x127938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12793c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12793cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127940u;
}
