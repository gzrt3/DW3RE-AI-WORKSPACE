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

// Function: FUN_0023acc8
// Address: 0x23acc8 - 0x23acf8
void FUN_0023acc8_0x23acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023acc8_0x23acc8");
#endif

    ctx->pc = 0x23acc8u;

    // 0x23acc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23accc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23acd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23acd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23acd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23acd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ace0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23ace4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23ace8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23ace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23acec: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23acf0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23acf4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x23acf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x23acf8u;
}
