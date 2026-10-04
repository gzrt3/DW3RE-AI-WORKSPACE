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

// Function: FUN_002175c0
// Address: 0x2175c0 - 0x2175d0
void FUN_002175c0_0x2175c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002175c0_0x2175c0");
#endif

    ctx->pc = 0x2175c0u;

    // 0x2175c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2175c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2175c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2175c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2175c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2175cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2175ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x2175d0u;
}
