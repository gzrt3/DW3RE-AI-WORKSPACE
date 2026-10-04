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

// Function: FUN_00223e00
// Address: 0x223e00 - 0x223e14
void FUN_00223e00_0x223e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223e00_0x223e00");
#endif

    ctx->pc = 0x223e00u;

    // 0x223e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x223e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x223e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x223e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x223e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x223e14u;
}
