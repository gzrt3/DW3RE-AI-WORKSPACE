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

// Function: FUN_001cb870
// Address: 0x1cb870 - 0x1cb888
void FUN_001cb870_0x1cb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb870_0x1cb870");
#endif

    ctx->pc = 0x1cb870u;

    // 0x1cb870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cb874: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x1cb878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cb87c: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
    // 0x1cb880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb888u;
}
