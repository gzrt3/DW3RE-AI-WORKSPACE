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

// Function: FUN_001eaa50
// Address: 0x1eaa50 - 0x1eaa60
void FUN_001eaa50_0x1eaa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eaa50_0x1eaa50");
#endif

    ctx->pc = 0x1eaa50u;

    // 0x1eaa50: 0xaf848ebc  sw          $a0, -0x7144($gp)
    ctx->pc = 0x1eaa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938300), GPR_U32(ctx, 4));
    // 0x1eaa54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eaa54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaa5c: 0xaf868eb8  sw          $a2, -0x7148($gp)
    ctx->pc = 0x1eaa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938296), GPR_U32(ctx, 6));
    ctx->pc = 0x1eaa60u;
}
