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

// Function: FUN_0022dac0
// Address: 0x22dac0 - 0x22dad4
void FUN_0022dac0_0x22dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022dac0_0x22dac0");
#endif

    ctx->pc = 0x22dac0u;

    // 0x22dac0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x22dac4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22dac8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22dacc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22dad0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x22dad4u;
}
