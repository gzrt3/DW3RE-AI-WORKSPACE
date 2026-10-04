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

// Function: FUN_00138660
// Address: 0x138660 - 0x138668
void FUN_00138660_0x138660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138660_0x138660");
#endif

    ctx->pc = 0x138660u;

    // 0x138660: 0x8f838514  lw          $v1, -0x7AEC($gp)
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x138664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x138668u;
}
