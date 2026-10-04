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

// Function: FUN_00105690
// Address: 0x105690 - 0x1056bc
void FUN_00105690_0x105690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105690_0x105690");
#endif

    ctx->pc = 0x105690u;

    // 0x105690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105694: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x105694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10569c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1056a0: 0x8f878308  lw          $a3, -0x7CF8($gp)
    ctx->pc = 0x1056a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x1056a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1056a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056a8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1056ac: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x1056acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1056b0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1056b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1056b4: 0x8f828470  lw          $v0, -0x7B90($gp)
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x1056b8: 0x2484b160  addiu       $a0, $a0, -0x4EA0
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947168));
    ctx->pc = 0x1056bcu;
}
