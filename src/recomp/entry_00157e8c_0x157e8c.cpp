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

// Function: entry_00157e8c
// Address: 0x157e8c - 0x157e90
void entry_00157e8c_0x157e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e8c_0x157e8c");
#endif

    ctx->pc = 0x157e8cu;

    // 0x157e8c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x157e90u;
}
