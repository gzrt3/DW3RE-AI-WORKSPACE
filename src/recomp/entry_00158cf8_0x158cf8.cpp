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

// Function: entry_00158cf8
// Address: 0x158cf8 - 0x158cfc
void entry_00158cf8_0x158cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cf8_0x158cf8");
#endif

    ctx->pc = 0x158cf8u;

    // 0x158cf8: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x158cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    ctx->pc = 0x158cfcu;
}
