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

// Function: FUN_00106820
// Address: 0x106820 - 0x10683c
void FUN_00106820_0x106820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106820_0x106820");
#endif

    ctx->pc = 0x106820u;

    // 0x106820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x106824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106828: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x106828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10682c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10682cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106830: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x106830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x106834: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x106834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x106838: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x106838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10683cu;
}
