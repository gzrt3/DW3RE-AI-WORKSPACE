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

// Function: FUN_001d4690
// Address: 0x1d4690 - 0x1d46c8
void FUN_001d4690_0x1d4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4690_0x1d4690");
#endif

    ctx->pc = 0x1d4690u;

    // 0x1d4690: 0x8f898c48  lw          $t1, -0x73B8($gp)
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1d4694: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
    // 0x1d4698: 0x250802e0  addiu       $t0, $t0, 0x2E0
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 736));
    // 0x1d469c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46a0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d46a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d46a8: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x1d46ac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d46b0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1d46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1d46b4: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1d46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1d46b8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x1d46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x1d46bc: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x1d46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x1d46c0: 0x8f848c48  lw          $a0, -0x73B8($gp)
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1d46c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1d46c8u;
}
