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

// Function: FUN_00148100
// Address: 0x148100 - 0x148118
void FUN_00148100_0x148100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148100_0x148100");
#endif

    ctx->pc = 0x148100u;

    // 0x148100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148104: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x148104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x148108: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x148108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14810c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x148110: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x148114: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x148118u;
}
