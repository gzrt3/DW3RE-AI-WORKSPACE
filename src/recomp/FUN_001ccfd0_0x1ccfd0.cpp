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

// Function: FUN_001ccfd0
// Address: 0x1ccfd0 - 0x1ccfe0
void FUN_001ccfd0_0x1ccfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccfd0_0x1ccfd0");
#endif

    ctx->pc = 0x1ccfd0u;

    // 0x1ccfd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ccfd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x1ccfd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ccfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ccfdc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x1ccfe0u;
}
