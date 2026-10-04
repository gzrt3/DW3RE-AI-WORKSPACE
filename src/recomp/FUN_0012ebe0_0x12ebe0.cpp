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

// Function: FUN_0012ebe0
// Address: 0x12ebe0 - 0x12ebf4
void FUN_0012ebe0_0x12ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ebe0_0x12ebe0");
#endif

    ctx->pc = 0x12ebe0u;

    // 0x12ebe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12ebe4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12ebe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ebec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ebf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x12ebf4u;
}
