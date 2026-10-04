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

// Function: FUN_001679e0
// Address: 0x1679e0 - 0x1679fc
void FUN_001679e0_0x1679e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001679e0_0x1679e0");
#endif

    ctx->pc = 0x1679e0u;

    // 0x1679e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1679e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1679e4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x1679e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1679e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1679ec: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1679f0: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x1679f4: 0x802027  not         $a0, $a0
    ctx->pc = 0x1679f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x1679f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1679f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->pc = 0x1679fcu;
}
