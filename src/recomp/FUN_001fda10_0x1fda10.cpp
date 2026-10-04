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

// Function: FUN_001fda10
// Address: 0x1fda10 - 0x1fda28
void FUN_001fda10_0x1fda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fda10_0x1fda10");
#endif

    ctx->pc = 0x1fda10u;

    // 0x1fda10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fda14: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1fda18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fda18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fda1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1fda20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fda24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fda24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fda28u;
}
