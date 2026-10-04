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

// Function: FUN_001712a0
// Address: 0x1712a0 - 0x1712c0
void FUN_001712a0_0x1712a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001712a0_0x1712a0");
#endif

    ctx->pc = 0x1712a0u;

    // 0x1712a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1712a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1712a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1712a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1712ac: 0x24421fc0  addiu       $v0, $v0, 0x1FC0
    ctx->pc = 0x1712acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8128));
    // 0x1712b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1712b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1712b4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1712b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1712b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1712b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1712bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1712bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1712c0u;
}
