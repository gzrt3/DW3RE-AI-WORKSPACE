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

// Function: FUN_00130e30
// Address: 0x130e30 - 0x130e44
void FUN_00130e30_0x130e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130e30_0x130e30");
#endif

    ctx->pc = 0x130e30u;

    // 0x130e30: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x130e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x130e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130e3c: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x130e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x130e40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x130e44u;
}
