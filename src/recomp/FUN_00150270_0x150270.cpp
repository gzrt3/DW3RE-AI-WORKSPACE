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

// Function: FUN_00150270
// Address: 0x150270 - 0x150280
void FUN_00150270_0x150270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150270_0x150270");
#endif

    ctx->pc = 0x150270u;

    // 0x150270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x150274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x150274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x150278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x150278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15027c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x150280u;
}
