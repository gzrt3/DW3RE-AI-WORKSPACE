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

// Function: FUN_001d46f0
// Address: 0x1d46f0 - 0x1d46fc
void FUN_001d46f0_0x1d46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d46f0_0x1d46f0");
#endif

    ctx->pc = 0x1d46f0u;

    // 0x1d46f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d46f4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1d46f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1d46fcu;
}
