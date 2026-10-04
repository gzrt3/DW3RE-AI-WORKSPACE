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

// Function: entry_00233a70
// Address: 0x233a70 - 0x233a78
void entry_00233a70_0x233a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233a70_0x233a70");
#endif

    ctx->pc = 0x233a70u;

    // 0x233a70: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233a74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233a78u;
}
