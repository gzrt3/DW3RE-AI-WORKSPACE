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

// Function: FUN_0022b0d0
// Address: 0x22b0d0 - 0x22b0e0
void FUN_0022b0d0_0x22b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022b0d0_0x22b0d0");
#endif

    ctx->pc = 0x22b0d0u;

    // 0x22b0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b0d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22b0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22b0dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x22b0e0u;
}
