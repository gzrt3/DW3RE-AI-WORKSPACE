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

// Function: entry_0011e2f8
// Address: 0x11e2f8 - 0x11e30c
void entry_0011e2f8_0x11e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2f8_0x11e2f8");
#endif

    ctx->pc = 0x11e2f8u;

    // 0x11e2f8: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x11e2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x11e2fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11e304: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x11e304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x11e308: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x11e308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    ctx->pc = 0x11e30cu;
}
