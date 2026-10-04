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

// Function: entry_001ffc44
// Address: 0x1ffc44 - 0x1ffc48
void entry_001ffc44_0x1ffc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc44_0x1ffc44");
#endif

    ctx->pc = 0x1ffc44u;

    // 0x1ffc44: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ffc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->pc = 0x1ffc48u;
}
