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

// Function: FUN_0017dae0
// Address: 0x17dae0 - 0x17daf0
void FUN_0017dae0_0x17dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017dae0_0x17dae0");
#endif

    ctx->pc = 0x17dae0u;

    // 0x17dae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17dae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17dae8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17daec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x17daf0u;
}
