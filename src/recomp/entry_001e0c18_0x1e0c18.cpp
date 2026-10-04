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

// Function: entry_001e0c18
// Address: 0x1e0c18 - 0x1e0c1c
void entry_001e0c18_0x1e0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c18_0x1e0c18");
#endif

    ctx->pc = 0x1e0c18u;

    // 0x1e0c18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1e0c1cu;
}
