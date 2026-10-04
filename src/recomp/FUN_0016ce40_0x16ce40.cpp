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

// Function: FUN_0016ce40
// Address: 0x16ce40 - 0x16ce5c
void FUN_0016ce40_0x16ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ce40_0x16ce40");
#endif

    ctx->pc = 0x16ce40u;

    // 0x16ce40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16ce44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16ce48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16ce4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16ce50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16ce50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16ce58: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16ce58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16ce5cu;
}
