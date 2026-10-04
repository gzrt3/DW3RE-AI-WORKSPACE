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

// Function: FUN_001c4ea0
// Address: 0x1c4ea0 - 0x1c4eb0
void FUN_001c4ea0_0x1c4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4ea0_0x1c4ea0");
#endif

    ctx->pc = 0x1c4ea0u;

    // 0x1c4ea0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x1c4ea4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4ea8: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x1c4ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1c4eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1c4eb0u;
}
