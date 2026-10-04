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

// Function: entry_001d4bb4
// Address: 0x1d4bb4 - 0x1d4bc4
void entry_001d4bb4_0x1d4bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bb4_0x1d4bb4");
#endif

    ctx->pc = 0x1d4bb4u;

    // 0x1d4bb4: 0x0  nop
    ctx->pc = 0x1d4bb4u;
    // NOP
    // 0x1d4bb8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d4bbc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d4bc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1d4bc4u;
}
