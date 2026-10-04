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

// Function: FUN_00108240
// Address: 0x108240 - 0x108250
void FUN_00108240_0x108240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108240_0x108240");
#endif

    ctx->pc = 0x108240u;

    // 0x108240: 0x8f828480  lw          $v0, -0x7B80($gp)
    ctx->pc = 0x108240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x108244: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108248: 0xaf828480  sw          $v0, -0x7B80($gp)
    ctx->pc = 0x108248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U32(ctx, 2));
    // 0x10824c: 0x8f828480  lw          $v0, -0x7B80($gp)
    ctx->pc = 0x10824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935680)));
    ctx->pc = 0x108250u;
}
