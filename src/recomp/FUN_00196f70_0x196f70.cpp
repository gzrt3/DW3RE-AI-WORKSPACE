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

// Function: FUN_00196f70
// Address: 0x196f70 - 0x196f80
void FUN_00196f70_0x196f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196f70_0x196f70");
#endif

    ctx->pc = 0x196f70u;

    // 0x196f70: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x196f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x196f74: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x196f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196f78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x196f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x196f7c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x196f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->pc = 0x196f80u;
}
