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

// Function: FUN_001c5d00
// Address: 0x1c5d00 - 0x1c5d18
void FUN_001c5d00_0x1c5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5d00_0x1c5d00");
#endif

    ctx->pc = 0x1c5d00u;

    // 0x1c5d00: 0x948802f2  lhu         $t0, 0x2F2($a0)
    ctx->pc = 0x1c5d00u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 754)));
    // 0x1c5d04: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c5d08: 0x948702ee  lhu         $a3, 0x2EE($a0)
    ctx->pc = 0x1c5d08u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 750)));
    // 0x1c5d0c: 0x948502f4  lhu         $a1, 0x2F4($a0)
    ctx->pc = 0x1c5d0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x1c5d10: 0x948302f0  lhu         $v1, 0x2F0($a0)
    ctx->pc = 0x1c5d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x1c5d14: 0x908602e8  lbu         $a2, 0x2E8($a0)
    ctx->pc = 0x1c5d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    ctx->pc = 0x1c5d18u;
}
