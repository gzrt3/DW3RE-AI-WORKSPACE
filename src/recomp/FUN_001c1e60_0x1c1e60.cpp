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

// Function: FUN_001c1e60
// Address: 0x1c1e60 - 0x1c1e70
void FUN_001c1e60_0x1c1e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1e60_0x1c1e60");
#endif

    ctx->pc = 0x1c1e60u;

    // 0x1c1e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c1e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c1e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c1e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1c1e70u;
}
