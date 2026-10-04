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

// Function: entry_00180794
// Address: 0x180794 - 0x18079c
void entry_00180794_0x180794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180794_0x180794");
#endif

    ctx->pc = 0x180794u;

    // 0x180794: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x180798: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->pc = 0x18079cu;
}
