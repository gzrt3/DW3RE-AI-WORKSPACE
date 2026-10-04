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

// Function: FUN_001f6ad0
// Address: 0x1f6ad0 - 0x1f6ae0
void FUN_001f6ad0_0x1f6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6ad0_0x1f6ad0");
#endif

    ctx->pc = 0x1f6ad0u;

    // 0x1f6ad0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f6ad4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1f6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f6ad8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f6adc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1f6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1f6ae0u;
}
