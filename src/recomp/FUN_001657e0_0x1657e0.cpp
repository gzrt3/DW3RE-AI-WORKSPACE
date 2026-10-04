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

// Function: FUN_001657e0
// Address: 0x1657e0 - 0x1657fc
void FUN_001657e0_0x1657e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001657e0_0x1657e0");
#endif

    ctx->pc = 0x1657e0u;

    // 0x1657e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1657e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1657e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1657e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1657e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1657ec: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1657f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1657f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1657f4: 0x24636280  addiu       $v1, $v1, 0x6280
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25216));
    // 0x1657f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1657f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1657fcu;
}
