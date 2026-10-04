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

// Function: FUN_0010ddc0
// Address: 0x10ddc0 - 0x10ddd0
void FUN_0010ddc0_0x10ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ddc0_0x10ddc0");
#endif

    ctx->pc = 0x10ddc0u;

    // 0x10ddc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10ddc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10ddc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10ddcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10ddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x10ddd0u;
}
