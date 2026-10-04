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

// Function: FUN_001013f0
// Address: 0x1013f0 - 0x101400
void FUN_001013f0_0x1013f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001013f0_0x1013f0");
#endif

    ctx->pc = 0x1013f0u;

    // 0x1013f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1013f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1013f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1013f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1013fc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x101400u;
}
