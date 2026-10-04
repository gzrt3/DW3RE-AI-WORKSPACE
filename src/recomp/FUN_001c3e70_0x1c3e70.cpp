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

// Function: FUN_001c3e70
// Address: 0x1c3e70 - 0x1c3e90
void FUN_001c3e70_0x1c3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c3e70_0x1c3e70");
#endif

    ctx->pc = 0x1c3e70u;

    // 0x1c3e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c3e74: 0x24021d70  addiu       $v0, $zero, 0x1D70
    ctx->pc = 0x1c3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
    // 0x1c3e78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c3e7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c3e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c3e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c3e88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c3e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c3e90u;
}
