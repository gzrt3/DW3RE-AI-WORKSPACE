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

// Function: FUN_001feda0
// Address: 0x1feda0 - 0x1fedb0
void FUN_001feda0_0x1feda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001feda0_0x1feda0");
#endif

    ctx->pc = 0x1feda0u;

    // 0x1feda0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1feda4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1feda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1feda8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1feda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fedac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fedacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1fedb0u;
}
