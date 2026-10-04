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

// Function: FUN_00213170
// Address: 0x213170 - 0x213180
void FUN_00213170_0x213170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00213170_0x213170");
#endif

    ctx->pc = 0x213170u;

    // 0x213170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x213174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x213178: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x213178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21317c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x213180u;
}
