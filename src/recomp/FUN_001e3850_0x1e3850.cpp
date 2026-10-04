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

// Function: FUN_001e3850
// Address: 0x1e3850 - 0x1e3864
void FUN_001e3850_0x1e3850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3850_0x1e3850");
#endif

    ctx->pc = 0x1e3850u;

    // 0x1e3850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e3854: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e3858: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e385c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e3860: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    ctx->pc = 0x1e3864u;
}
