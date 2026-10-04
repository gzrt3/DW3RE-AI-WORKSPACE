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

// Function: FUN_0015f710
// Address: 0x15f710 - 0x15f728
void FUN_0015f710_0x15f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015f710_0x15f710");
#endif

    ctx->pc = 0x15f710u;

    // 0x15f710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15f714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15f718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15f71c: 0x34424c70  ori         $v0, $v0, 0x4C70
    ctx->pc = 0x15f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19568);
    // 0x15f720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f724: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x15f728u;
}
