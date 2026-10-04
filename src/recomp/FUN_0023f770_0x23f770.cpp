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

// Function: FUN_0023f770
// Address: 0x23f770 - 0x23f794
void FUN_0023f770_0x23f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f770_0x23f770");
#endif

    ctx->pc = 0x23f770u;

    // 0x23f770: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x23f774: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x23f778: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23f77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23f784: 0x2463c960  addiu       $v1, $v1, -0x36A0
    ctx->pc = 0x23f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x23f788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23f78c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23f790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23f794u;
}
