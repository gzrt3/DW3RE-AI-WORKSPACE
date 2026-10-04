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

// Function: FUN_00205cf0
// Address: 0x205cf0 - 0x205d08
void FUN_00205cf0_0x205cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205cf0_0x205cf0");
#endif

    ctx->pc = 0x205cf0u;

    // 0x205cf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x205cf4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x205cf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x205cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x205cfc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x205d00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x205d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x205d04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x205d08u;
}
