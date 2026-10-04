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

// Function: entry_0012fc60
// Address: 0x12fc60 - 0x12fc64
void entry_0012fc60_0x12fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc60_0x12fc60");
#endif

    ctx->pc = 0x12fc60u;

    // 0x12fc60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x12fc64u;
}
