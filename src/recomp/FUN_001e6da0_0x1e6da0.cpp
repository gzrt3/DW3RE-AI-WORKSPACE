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

// Function: FUN_001e6da0
// Address: 0x1e6da0 - 0x1e6db4
void FUN_001e6da0_0x1e6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6da0_0x1e6da0");
#endif

    ctx->pc = 0x1e6da0u;

    // 0x1e6da0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e6da4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e6da4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6da8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e6dac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e6dacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6db0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e6db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x1e6db4u;
}
