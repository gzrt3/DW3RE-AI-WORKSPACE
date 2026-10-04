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

// Function: FUN_0020be50
// Address: 0x20be50 - 0x20be60
void FUN_0020be50_0x20be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020be50_0x20be50");
#endif

    ctx->pc = 0x20be50u;

    // 0x20be50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20be54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20be58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20be5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x20be60u;
}
