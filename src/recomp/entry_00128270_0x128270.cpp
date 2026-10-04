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

// Function: entry_00128270
// Address: 0x128270 - 0x12827c
void entry_00128270_0x128270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128270_0x128270");
#endif

    ctx->pc = 0x128270u;

    // 0x128270: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x128270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x128274: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128278: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x128278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12827cu;
}
