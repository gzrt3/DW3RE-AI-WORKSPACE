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

// Function: entry_0016dc48
// Address: 0x16dc48 - 0x16dc70
void entry_0016dc48_0x16dc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc48_0x16dc48");
#endif

    ctx->pc = 0x16dc48u;

    // 0x16dc48: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16dc4c: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x16dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x16dc50: 0x8f858174  lw          $a1, -0x7E8C($gp)
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16dc54: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16dc58: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x16dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x16dc5c: 0x2442a4b4  addiu       $v0, $v0, -0x5B4C
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943924));
    // 0x16dc60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16dc64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dc68: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dc6c: 0x0  nop
    ctx->pc = 0x16dc6cu;
    // NOP
    ctx->pc = 0x16dc70u;
}
