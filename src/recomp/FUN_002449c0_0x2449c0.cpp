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

// Function: FUN_002449c0
// Address: 0x2449c0 - 0x2449d4
void FUN_002449c0_0x2449c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002449c0_0x2449c0");
#endif

    ctx->pc = 0x2449c0u;

    // 0x2449c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2449c4: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x2449c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2449c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2449c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2449cc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2449ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2449d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x2449d4u;
}
