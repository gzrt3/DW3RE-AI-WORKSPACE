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

// Function: FUN_0013ec20
// Address: 0x13ec20 - 0x13ec30
void FUN_0013ec20_0x13ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ec20_0x13ec20");
#endif

    ctx->pc = 0x13ec20u;

    // 0x13ec20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13ec24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13ec28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13ec2c: 0x244205d0  addiu       $v0, $v0, 0x5D0
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
    ctx->pc = 0x13ec30u;
}
