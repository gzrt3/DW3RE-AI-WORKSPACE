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

// Function: FUN_00138670
// Address: 0x138670 - 0x138688
void FUN_00138670_0x138670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138670_0x138670");
#endif

    ctx->pc = 0x138670u;

    // 0x138670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138674: 0xaf808514  sw          $zero, -0x7AEC($gp)
    ctx->pc = 0x138674u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935828), GPR_U32(ctx, 0));
    // 0x138678: 0xaf80850c  sw          $zero, -0x7AF4($gp)
    ctx->pc = 0x138678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 0));
    // 0x13867c: 0xaf838510  sw          $v1, -0x7AF0($gp)
    ctx->pc = 0x13867cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935824), GPR_U32(ctx, 3));
    // 0x138680: 0xaf808508  sw          $zero, -0x7AF8($gp)
    ctx->pc = 0x138680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 0));
    // 0x138684: 0xaf808504  sw          $zero, -0x7AFC($gp)
    ctx->pc = 0x138684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 0));
    ctx->pc = 0x138688u;
}
