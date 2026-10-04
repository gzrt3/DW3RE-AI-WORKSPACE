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

// Function: FUN_00152510
// Address: 0x152510 - 0x152528
void FUN_00152510_0x152510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152510_0x152510");
#endif

    ctx->pc = 0x152510u;

    // 0x152510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x152514: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x152518: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15251c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15251cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x152520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152524: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x152528u;
}
