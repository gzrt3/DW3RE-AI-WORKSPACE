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

// Function: entry_0018ec4c
// Address: 0x18ec4c - 0x18ec50
void entry_0018ec4c_0x18ec4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec4c_0x18ec4c");
#endif

    ctx->pc = 0x18ec4cu;

    // 0x18ec4c: 0x24c62f70  addiu       $a2, $a2, 0x2F70
    ctx->pc = 0x18ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->pc = 0x18ec50u;
}
