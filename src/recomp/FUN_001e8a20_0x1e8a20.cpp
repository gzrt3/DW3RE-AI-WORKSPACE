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

// Function: FUN_001e8a20
// Address: 0x1e8a20 - 0x1e8a28
void FUN_001e8a20_0x1e8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8a20_0x1e8a20");
#endif

    ctx->pc = 0x1e8a20u;

    // 0x1e8a20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1e8a24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x1e8a28u;
}
