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

// Function: entry_00138054
// Address: 0x138054 - 0x138080
void entry_00138054_0x138054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138054_0x138054");
#endif

    ctx->pc = 0x138054u;

    // 0x138054: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x138058: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13805c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x13805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138060: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x138060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x138064: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x138068: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x13806c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138070: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x138074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138078: 0x84510000  lh          $s1, 0x0($v0)
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13807c: 0x0  nop
    ctx->pc = 0x13807cu;
    // NOP
    ctx->pc = 0x138080u;
}
