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

// Function: entry_00174b88
// Address: 0x174b88 - 0x174b8c
void entry_00174b88_0x174b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b88_0x174b88");
#endif

    ctx->pc = 0x174b88u;

    // 0x174b88: 0x2444003d  addiu       $a0, $v0, 0x3D
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
    ctx->pc = 0x174b8cu;
}
