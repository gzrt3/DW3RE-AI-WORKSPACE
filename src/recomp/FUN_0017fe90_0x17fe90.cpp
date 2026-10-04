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

// Function: FUN_0017fe90
// Address: 0x17fe90 - 0x17fe94
void FUN_0017fe90_0x17fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fe90_0x17fe90");
#endif

    ctx->pc = 0x17fe90u;

    // 0x17fe90: 0xaf80879c  sw          $zero, -0x7864($gp)
    ctx->pc = 0x17fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 0));
    ctx->pc = 0x17fe94u;
}
