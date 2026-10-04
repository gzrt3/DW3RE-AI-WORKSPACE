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

// Function: FUN_00240090
// Address: 0x240090 - 0x2400a0
void FUN_00240090_0x240090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240090_0x240090");
#endif

    ctx->pc = 0x240090u;

    // 0x240090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x240098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24009c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->pc = 0x2400a0u;
}
