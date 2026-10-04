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

// Function: FUN_001ea9f0
// Address: 0x1ea9f0 - 0x1ea9fc
void FUN_001ea9f0_0x1ea9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ea9f0_0x1ea9f0");
#endif

    ctx->pc = 0x1ea9f0u;

    // 0x1ea9f0: 0xaf848ed8  sw          $a0, -0x7128($gp)
    ctx->pc = 0x1ea9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 4));
    // 0x1ea9f4: 0xaf858ed4  sw          $a1, -0x712C($gp)
    ctx->pc = 0x1ea9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 5));
    // 0x1ea9f8: 0xaf868ed0  sw          $a2, -0x7130($gp)
    ctx->pc = 0x1ea9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 6));
    ctx->pc = 0x1ea9fcu;
}
