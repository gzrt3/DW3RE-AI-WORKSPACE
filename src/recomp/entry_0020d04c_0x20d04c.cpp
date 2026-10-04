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

// Function: entry_0020d04c
// Address: 0x20d04c - 0x20d054
void entry_0020d04c_0x20d04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d04c_0x20d04c");
#endif

    ctx->pc = 0x20d04cu;

    // 0x20d04c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x20d050: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
    ctx->pc = 0x20d054u;
}
