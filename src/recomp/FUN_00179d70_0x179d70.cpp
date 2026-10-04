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

// Function: FUN_00179d70
// Address: 0x179d70 - 0x179d88
void FUN_00179d70_0x179d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179d70_0x179d70");
#endif

    ctx->pc = 0x179d70u;

    // 0x179d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179d74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x179d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x179d78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179d7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x179d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x179d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179d84: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    ctx->pc = 0x179d88u;
}
