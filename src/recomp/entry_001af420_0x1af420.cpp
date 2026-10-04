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

// Function: entry_001af420
// Address: 0x1af420 - 0x1af428
void entry_001af420_0x1af420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af420_0x1af420");
#endif

    ctx->pc = 0x1af420u;

    // 0x1af420: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1af428u;
}
