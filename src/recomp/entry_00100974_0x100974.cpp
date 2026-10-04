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

// Function: entry_00100974
// Address: 0x100974 - 0x100988
void entry_00100974_0x100974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100974_0x100974");
#endif

    ctx->pc = 0x100974u;

    // 0x100974: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x100978: 0x2442ada0  addiu       $v0, $v0, -0x5260
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x10097c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100980: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100984: 0x0  nop
    ctx->pc = 0x100984u;
    // NOP
    ctx->pc = 0x100988u;
}
