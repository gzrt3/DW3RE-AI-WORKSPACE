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

// Function: FUN_001e2370
// Address: 0x1e2370 - 0x1e237c
void FUN_001e2370_0x1e2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2370_0x1e2370");
#endif

    ctx->pc = 0x1e2370u;

    // 0x1e2370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e2374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2378: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e2378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x1e237cu;
}
