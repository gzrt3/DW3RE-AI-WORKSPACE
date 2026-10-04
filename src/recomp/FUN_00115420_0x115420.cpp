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

// Function: FUN_00115420
// Address: 0x115420 - 0x115438
void FUN_00115420_0x115420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115420_0x115420");
#endif

    ctx->pc = 0x115420u;

    // 0x115420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x115420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x115424: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x115424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x115428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x115428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11542c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11542cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x115430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x115434: 0x24c62490  addiu       $a2, $a2, 0x2490
    ctx->pc = 0x115434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9360));
    ctx->pc = 0x115438u;
}
