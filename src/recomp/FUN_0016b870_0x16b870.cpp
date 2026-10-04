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

// Function: FUN_0016b870
// Address: 0x16b870 - 0x16b880
void FUN_0016b870_0x16b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b870_0x16b870");
#endif

    ctx->pc = 0x16b870u;

    // 0x16b870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x16b880u;
}
