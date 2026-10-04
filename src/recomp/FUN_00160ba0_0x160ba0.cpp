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

// Function: FUN_00160ba0
// Address: 0x160ba0 - 0x160bb0
void FUN_00160ba0_0x160ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160ba0_0x160ba0");
#endif

    ctx->pc = 0x160ba0u;

    // 0x160ba0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x160ba4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160ba8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x160ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x160bac: 0x24031a30  addiu       $v1, $zero, 0x1A30
    ctx->pc = 0x160bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6704));
    ctx->pc = 0x160bb0u;
}
