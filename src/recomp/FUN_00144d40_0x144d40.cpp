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

// Function: FUN_00144d40
// Address: 0x144d40 - 0x144d50
void FUN_00144d40_0x144d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144d40_0x144d40");
#endif

    ctx->pc = 0x144d40u;

    // 0x144d40: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x144d44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x144d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x144d48: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x144d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x144d50u;
}
