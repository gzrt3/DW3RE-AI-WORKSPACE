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

// Function: FUN_0020d4e0
// Address: 0x20d4e0 - 0x20d4f0
void FUN_0020d4e0_0x20d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020d4e0_0x20d4e0");
#endif

    ctx->pc = 0x20d4e0u;

    // 0x20d4e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20d4e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x20d4e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20d4ec: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    ctx->pc = 0x20d4f0u;
}
