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

// Function: FUN_001f2050
// Address: 0x1f2050 - 0x1f2058
void FUN_001f2050_0x1f2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2050_0x1f2050");
#endif

    ctx->pc = 0x1f2050u;

    // 0x1f2050: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f2054: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1f2058u;
}
