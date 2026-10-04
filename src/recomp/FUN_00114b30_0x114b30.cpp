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

// Function: FUN_00114b30
// Address: 0x114b30 - 0x114b40
void FUN_00114b30_0x114b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114b30_0x114b30");
#endif

    ctx->pc = 0x114b30u;

    // 0x114b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114b38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x114b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x114b40u;
}
