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

// Function: FUN_001e4eb0
// Address: 0x1e4eb0 - 0x1e4eb8
void FUN_001e4eb0_0x1e4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4eb0_0x1e4eb0");
#endif

    ctx->pc = 0x1e4eb0u;

    // 0x1e4eb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e4eb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1e4eb8u;
}
