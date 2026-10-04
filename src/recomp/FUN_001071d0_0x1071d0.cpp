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

// Function: FUN_001071d0
// Address: 0x1071d0 - 0x1071e4
void FUN_001071d0_0x1071d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001071d0_0x1071d0");
#endif

    ctx->pc = 0x1071d0u;

    // 0x1071d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1071d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1071d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1071d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1071d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1071dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1071dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1071e0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1071e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1071e4u;
}
