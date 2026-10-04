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

// Function: entry_001e20dc
// Address: 0x1e20dc - 0x1e20e4
void entry_001e20dc_0x1e20dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e20dc_0x1e20dc");
#endif

    ctx->pc = 0x1e20dcu;

    // 0x1e20dc: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1e20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1e20e0: 0xaf828d90  sw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
    ctx->pc = 0x1e20e4u;
}
