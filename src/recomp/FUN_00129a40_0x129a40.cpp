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

// Function: FUN_00129a40
// Address: 0x129a40 - 0x129a50
void FUN_00129a40_0x129a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129a40_0x129a40");
#endif

    ctx->pc = 0x129a40u;

    // 0x129a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x129a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x129a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x129a48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x129a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x129a4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x129a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x129a50u;
}
