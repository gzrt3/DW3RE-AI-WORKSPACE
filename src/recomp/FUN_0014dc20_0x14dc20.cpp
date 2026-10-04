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

// Function: FUN_0014dc20
// Address: 0x14dc20 - 0x14dc3c
void FUN_0014dc20_0x14dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014dc20_0x14dc20");
#endif

    ctx->pc = 0x14dc20u;

    // 0x14dc20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14dc24: 0x24032150  addiu       $v1, $zero, 0x2150
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8528));
    // 0x14dc28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14dc2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14dc30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14dc34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14dc34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x14dc3cu;
}
