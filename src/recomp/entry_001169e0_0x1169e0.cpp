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

// Function: entry_001169e0
// Address: 0x1169e0 - 0x1169f0
void entry_001169e0_0x1169e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001169e0_0x1169e0");
#endif

    ctx->pc = 0x1169e0u;

    // 0x1169e0: 0x24a301a6  addiu       $v1, $a1, 0x1A6
    ctx->pc = 0x1169e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 422));
    // 0x1169e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1169e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1169e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1169ec: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1169ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1169f0u;
}
