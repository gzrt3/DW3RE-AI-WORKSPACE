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

// Function: FUN_001304a0
// Address: 0x1304a0 - 0x1304b8
void FUN_001304a0_0x1304a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001304a0_0x1304a0");
#endif

    ctx->pc = 0x1304a0u;

    // 0x1304a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1304a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1304a4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1304a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1304a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1304ac: 0x24e7fec0  addiu       $a3, $a3, -0x140
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966976));
    // 0x1304b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1304b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1304b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1304b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1304b8u;
}
