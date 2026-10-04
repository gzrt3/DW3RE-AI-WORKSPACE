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

// Function: FUN_00159830
// Address: 0x159830 - 0x159840
void FUN_00159830_0x159830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159830_0x159830");
#endif

    ctx->pc = 0x159830u;

    // 0x159830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159834: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x159838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15983c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x159840u;
}
