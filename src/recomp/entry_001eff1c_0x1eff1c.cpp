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

// Function: entry_001eff1c
// Address: 0x1eff1c - 0x1eff20
void entry_001eff1c_0x1eff1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff1c_0x1eff1c");
#endif

    ctx->pc = 0x1eff1cu;

    // 0x1eff1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1eff20u;
}
