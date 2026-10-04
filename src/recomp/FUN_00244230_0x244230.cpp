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

// Function: FUN_00244230
// Address: 0x244230 - 0x244240
void FUN_00244230_0x244230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00244230_0x244230");
#endif

    ctx->pc = 0x244230u;

    // 0x244230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244234: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x244234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x244238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24423c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x244240u;
}
