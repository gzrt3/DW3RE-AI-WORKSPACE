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

// Function: entry_00144d34
// Address: 0x144d34 - 0x144d38
void entry_00144d34_0x144d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144d34_0x144d34");
#endif

    ctx->pc = 0x144d34u;

    // 0x144d34: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    ctx->pc = 0x144d38u;
}
