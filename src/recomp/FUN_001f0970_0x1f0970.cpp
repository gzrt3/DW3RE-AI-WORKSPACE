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

// Function: FUN_001f0970
// Address: 0x1f0970 - 0x1f098c
void FUN_001f0970_0x1f0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0970_0x1f0970");
#endif

    ctx->pc = 0x1f0970u;

    // 0x1f0970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0974: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f0974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f097c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1f0980: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0984: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1f0984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1f0988: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1f098cu;
}
