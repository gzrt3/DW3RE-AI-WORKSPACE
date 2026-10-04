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

// Function: FUN_0010e780
// Address: 0x10e780 - 0x10e798
void FUN_0010e780_0x10e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e780_0x10e780");
#endif

    ctx->pc = 0x10e780u;

    // 0x10e780: 0x8f8584e0  lw          $a1, -0x7B20($gp)
    ctx->pc = 0x10e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e784: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x10e784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10e788: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10e78c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10e790: 0x24a20d80  addiu       $v0, $a1, 0xD80
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3456));
    // 0x10e794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x10e798u;
}
