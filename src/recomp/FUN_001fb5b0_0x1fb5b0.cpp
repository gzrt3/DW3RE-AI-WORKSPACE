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

// Function: FUN_001fb5b0
// Address: 0x1fb5b0 - 0x1fb5bc
void FUN_001fb5b0_0x1fb5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb5b0_0x1fb5b0");
#endif

    ctx->pc = 0x1fb5b0u;

    // 0x1fb5b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1fb5b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1fb5b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1fb5bcu;
}
