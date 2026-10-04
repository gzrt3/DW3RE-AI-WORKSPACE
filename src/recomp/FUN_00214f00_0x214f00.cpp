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

// Function: FUN_00214f00
// Address: 0x214f00 - 0x214f0c
void FUN_00214f00_0x214f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00214f00_0x214f00");
#endif

    ctx->pc = 0x214f00u;

    // 0x214f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214f04: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x214f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x214f08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x214f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x214f0cu;
}
