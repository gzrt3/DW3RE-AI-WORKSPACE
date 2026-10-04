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

// Function: FUN_001e25f0
// Address: 0x1e25f0 - 0x1e2600
void FUN_001e25f0_0x1e25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e25f0_0x1e25f0");
#endif

    ctx->pc = 0x1e25f0u;

    // 0x1e25f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e25f4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e25f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e25fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1e2600u;
}
