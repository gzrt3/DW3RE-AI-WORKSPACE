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

// Function: entry_002039e0
// Address: 0x2039e0 - 0x2039e8
void entry_002039e0_0x2039e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002039e0_0x2039e0");
#endif

    ctx->pc = 0x2039e0u;

    // 0x2039e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2039e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2039e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x2039e8u;
}
