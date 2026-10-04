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

// Function: FUN_001eaa10
// Address: 0x1eaa10 - 0x1eaa1c
void FUN_001eaa10_0x1eaa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eaa10_0x1eaa10");
#endif

    ctx->pc = 0x1eaa10u;

    // 0x1eaa10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaa14: 0xaf848eac  sw          $a0, -0x7154($gp)
    ctx->pc = 0x1eaa14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 4));
    // 0x1eaa18: 0xaf808eb0  sw          $zero, -0x7150($gp)
    ctx->pc = 0x1eaa18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 0));
    ctx->pc = 0x1eaa1cu;
}
