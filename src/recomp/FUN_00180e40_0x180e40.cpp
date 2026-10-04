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

// Function: FUN_00180e40
// Address: 0x180e40 - 0x180e68
void FUN_00180e40_0x180e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180e40_0x180e40");
#endif

    ctx->pc = 0x180e40u;

    // 0x180e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x180e44: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x180e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x180e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x180e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x180e54: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x180e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x180e5c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x180e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x180e64: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x180e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180e68u;
}
