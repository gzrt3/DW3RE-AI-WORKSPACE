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

// Function: FUN_001cdc80
// Address: 0x1cdc80 - 0x1cdc98
void FUN_001cdc80_0x1cdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cdc80_0x1cdc80");
#endif

    ctx->pc = 0x1cdc80u;

    // 0x1cdc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdc84: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cdc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc8c: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x1cdc90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdc94: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1cdc98u;
}
