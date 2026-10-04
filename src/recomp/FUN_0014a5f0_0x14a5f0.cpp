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

// Function: FUN_0014a5f0
// Address: 0x14a5f0 - 0x14a608
void FUN_0014a5f0_0x14a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014a5f0_0x14a5f0");
#endif

    ctx->pc = 0x14a5f0u;

    // 0x14a5f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a5f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14a5f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a5fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a604: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14a604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14a608u;
}
