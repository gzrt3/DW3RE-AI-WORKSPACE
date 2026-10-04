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

// Function: entry_0012fc94
// Address: 0x12fc94 - 0x12fc98
void entry_0012fc94_0x12fc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc94_0x12fc94");
#endif

    ctx->pc = 0x12fc94u;

    // 0x12fc94: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x12fc98u;
}
