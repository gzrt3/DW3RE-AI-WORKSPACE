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

// Function: FUN_001b1198
// Address: 0x1b1198 - 0x1b11c0
void FUN_001b1198_0x1b1198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1198_0x1b1198");
#endif

    ctx->pc = 0x1b1198u;

    // 0x1b1198: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b119c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b11a0: 0x24c677c0  addiu       $a2, $a2, 0x77C0
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30656));
    // 0x1b11a4: 0x24428d08  addiu       $v0, $v0, -0x72F8
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
    // 0x1b11a8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1b11ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b11acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b11b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b11b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b11b8: 0x8c838d0c  lw          $v1, -0x72F4($a0)
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x288D0Cu));
    // 0x1b11bc: 0x24426200  addiu       $v0, $v0, 0x6200
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    ctx->pc = 0x1b11c0u;
}
