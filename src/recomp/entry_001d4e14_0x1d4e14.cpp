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

// Function: entry_001d4e14
// Address: 0x1d4e14 - 0x1d4e24
void entry_001d4e14_0x1d4e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e14_0x1d4e14");
#endif

    ctx->pc = 0x1d4e14u;

    // 0x1d4e14: 0x0  nop
    ctx->pc = 0x1d4e14u;
    // NOP
    // 0x1d4e18: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d4e1c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d4e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1d4e24u;
}
