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

// Function: FUN_0011f2b0
// Address: 0x11f2b0 - 0x11f2bc
void FUN_0011f2b0_0x11f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f2b0_0x11f2b0");
#endif

    ctx->pc = 0x11f2b0u;

    // 0x11f2b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f2b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f2b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x11f2bcu;
}
