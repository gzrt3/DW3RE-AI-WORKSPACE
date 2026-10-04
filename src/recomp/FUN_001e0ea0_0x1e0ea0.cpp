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

// Function: FUN_001e0ea0
// Address: 0x1e0ea0 - 0x1e0eb0
void FUN_001e0ea0_0x1e0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0ea0_0x1e0ea0");
#endif

    ctx->pc = 0x1e0ea0u;

    // 0x1e0ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e0ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e0ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e0eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1e0eb0u;
}
