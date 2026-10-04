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

// Function: entry_001efabc
// Address: 0x1efabc - 0x1efac0
void entry_001efabc_0x1efabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efabc_0x1efabc");
#endif

    ctx->pc = 0x1efabcu;

    // 0x1efabc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1efac0u;
}
