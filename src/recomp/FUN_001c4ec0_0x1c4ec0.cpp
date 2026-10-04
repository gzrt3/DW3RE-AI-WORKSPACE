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

// Function: FUN_001c4ec0
// Address: 0x1c4ec0 - 0x1c4ed0
void FUN_001c4ec0_0x1c4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4ec0_0x1c4ec0");
#endif

    ctx->pc = 0x1c4ec0u;

    // 0x1c4ec0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c4ec4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1c4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4ec8: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1c4ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1c4ed0u;
}
