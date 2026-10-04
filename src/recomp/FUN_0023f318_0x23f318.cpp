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

// Function: FUN_0023f318
// Address: 0x23f318 - 0x23f32c
void FUN_0023f318_0x23f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f318_0x23f318");
#endif

    ctx->pc = 0x23f318u;

    // 0x23f318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f324: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f328: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x23f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x23f32cu;
}
