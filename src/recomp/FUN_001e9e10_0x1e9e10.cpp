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

// Function: FUN_001e9e10
// Address: 0x1e9e10 - 0x1e9e18
void FUN_001e9e10_0x1e9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9e10_0x1e9e10");
#endif

    ctx->pc = 0x1e9e10u;

    // 0x1e9e10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e9e14: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e9e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1e9e18u;
}
