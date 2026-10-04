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

// Function: entry_0013815c
// Address: 0x13815c - 0x138174
void entry_0013815c_0x13815c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013815c_0x13815c");
#endif

    ctx->pc = 0x13815cu;

    // 0x13815c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x138160: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138164: 0x24630d08  addiu       $v1, $v1, 0xD08
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3336));
    // 0x138168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13816c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138170: 0x0  nop
    ctx->pc = 0x138170u;
    // NOP
    ctx->pc = 0x138174u;
}
