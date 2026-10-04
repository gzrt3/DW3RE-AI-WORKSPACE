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

// Function: entry_0014935c
// Address: 0x14935c - 0x149364
void entry_0014935c_0x14935c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014935c_0x14935c");
#endif

    ctx->pc = 0x14935cu;

    // 0x14935c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149360: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x149360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149364u;
}
