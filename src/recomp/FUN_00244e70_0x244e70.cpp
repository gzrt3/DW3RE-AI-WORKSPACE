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

// Function: FUN_00244e70
// Address: 0x244e70 - 0x244e80
void FUN_00244e70_0x244e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00244e70_0x244e70");
#endif

    ctx->pc = 0x244e70u;

    // 0x244e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x244e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x244e74: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x244e78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x244e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x244e7c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x244e80u;
}
