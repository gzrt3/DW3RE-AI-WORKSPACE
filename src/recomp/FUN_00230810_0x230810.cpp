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

// Function: FUN_00230810
// Address: 0x230810 - 0x230830
void FUN_00230810_0x230810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00230810_0x230810");
#endif

    ctx->pc = 0x230810u;

    // 0x230810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x230814: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x230818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23081c: 0x24420490  addiu       $v0, $v0, 0x490
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x230820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230824: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23082c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230830u;
}
