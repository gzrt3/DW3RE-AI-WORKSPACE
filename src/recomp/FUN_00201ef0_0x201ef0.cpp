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

// Function: FUN_00201ef0
// Address: 0x201ef0 - 0x201f00
void FUN_00201ef0_0x201ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201ef0_0x201ef0");
#endif

    ctx->pc = 0x201ef0u;

    // 0x201ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x201ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x201efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x201f00u;
}
