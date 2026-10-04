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

// Function: FUN_0014c940
// Address: 0x14c940 - 0x14c94c
void FUN_0014c940_0x14c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c940_0x14c940");
#endif

    ctx->pc = 0x14c940u;

    // 0x14c940: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x14c944: 0x24032150  addiu       $v1, $zero, 0x2150
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8528));
    // 0x14c948: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x14c94cu;
}
