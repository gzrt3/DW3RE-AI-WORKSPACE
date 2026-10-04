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

// Function: entry_002ced14
// Address: 0x2ced14 - 0x2ced24
void entry_002ced14_0x2ced14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ced14_0x2ced14");
#endif

    ctx->pc = 0x2ced14u;

    // 0x2ced14: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2ced18: 0xf2e00  sll         $a1, $t7, 24
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x2ced1c: 0x7ae00  sll         $s5, $a3, 24
    ctx->pc = 0x2ced1cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2ced20: 0xf5bf0  tge         $zero, $t7, 367
    ctx->pc = 0x2ced20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x2ced24u;
}
