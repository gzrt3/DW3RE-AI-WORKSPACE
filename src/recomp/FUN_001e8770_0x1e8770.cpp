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

// Function: FUN_001e8770
// Address: 0x1e8770 - 0x1e8784
void FUN_001e8770_0x1e8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8770_0x1e8770");
#endif

    ctx->pc = 0x1e8770u;

    // 0x1e8770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8774: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1e8774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x1e8778: 0x24e7b8d0  addiu       $a3, $a3, -0x4730
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949072));
    // 0x1e877c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1e8780: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1e8784u;
}
