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

// Function: FUN_001d3680
// Address: 0x1d3680 - 0x1d368c
void FUN_001d3680_0x1d3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3680_0x1d3680");
#endif

    ctx->pc = 0x1d3680u;

    // 0x1d3680: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1d3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1d3684: 0x24022dc0  addiu       $v0, $zero, 0x2DC0
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11712));
    // 0x1d3688: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1d368cu;
}
