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

// Function: FUN_00128420
// Address: 0x128420 - 0x12842c
void FUN_00128420_0x128420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128420_0x128420");
#endif

    ctx->pc = 0x128420u;

    // 0x128420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x128424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x128428: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x128428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x12842cu;
}
