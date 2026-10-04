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

// Function: FUN_001c4030
// Address: 0x1c4030 - 0x1c403c
void FUN_001c4030_0x1c4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4030_0x1c4030");
#endif

    ctx->pc = 0x1c4030u;

    // 0x1c4030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c4034: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c4038: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1c403cu;
}
