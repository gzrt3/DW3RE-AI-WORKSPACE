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

// Function: entry_0015213c
// Address: 0x15213c - 0x152164
void entry_0015213c_0x15213c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015213c_0x15213c");
#endif

    ctx->pc = 0x15213cu;

    // 0x15213c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x152140: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x152144: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x152144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152148: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x15214c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x152150: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152154: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x152158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15215c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x152160: 0x0  nop
    ctx->pc = 0x152160u;
    // NOP
    ctx->pc = 0x152164u;
}
