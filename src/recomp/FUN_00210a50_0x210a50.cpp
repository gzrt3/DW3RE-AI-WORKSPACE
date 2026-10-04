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

// Function: FUN_00210a50
// Address: 0x210a50 - 0x210a5c
void FUN_00210a50_0x210a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00210a50_0x210a50");
#endif

    ctx->pc = 0x210a50u;

    // 0x210a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x210a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x210a5cu;
}
