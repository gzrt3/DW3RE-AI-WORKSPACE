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

// Function: entry_001f9fd4
// Address: 0x1f9fd4 - 0x1f9ff4
void entry_001f9fd4_0x1f9fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9fd4_0x1f9fd4");
#endif

    ctx->pc = 0x1f9fd4u;

    // 0x1f9fd4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1f9fd8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f9fdc: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
    // 0x1f9fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9fe4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1f9fe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f9fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f9fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9ff0: 0x0  nop
    ctx->pc = 0x1f9ff0u;
    // NOP
    ctx->pc = 0x1f9ff4u;
}
