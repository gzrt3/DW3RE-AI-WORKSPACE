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

// Function: FUN_001d1f50
// Address: 0x1d1f50 - 0x1d1f68
void FUN_001d1f50_0x1d1f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1f50_0x1d1f50");
#endif

    ctx->pc = 0x1d1f50u;

    // 0x1d1f50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d1f54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d1f58: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1d1f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1d1f5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d1f60: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d1f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1d1f64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1d1f68u;
}
