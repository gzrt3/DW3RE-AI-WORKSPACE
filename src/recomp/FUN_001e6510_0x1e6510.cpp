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

// Function: FUN_001e6510
// Address: 0x1e6510 - 0x1e6530
void FUN_001e6510_0x1e6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6510_0x1e6510");
#endif

    ctx->pc = 0x1e6510u;

    // 0x1e6510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6514: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e651c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e6520: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e6520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e6524: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e6524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e652c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e652cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e6530u;
}
