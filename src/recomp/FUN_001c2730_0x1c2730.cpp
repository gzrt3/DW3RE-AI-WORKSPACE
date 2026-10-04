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

// Function: FUN_001c2730
// Address: 0x1c2730 - 0x1c2744
void FUN_001c2730_0x1c2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2730_0x1c2730");
#endif

    ctx->pc = 0x1c2730u;

    // 0x1c2730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c2734: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c2738: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c273c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c2740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1c2744u;
}
