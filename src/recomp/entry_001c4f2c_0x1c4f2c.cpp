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

// Function: entry_001c4f2c
// Address: 0x1c4f2c - 0x1c4f50
void entry_001c4f2c_0x1c4f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f2c_0x1c4f2c");
#endif

    ctx->pc = 0x1c4f2cu;

    // 0x1c4f2c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c4f30: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1c4f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c4f3c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c4f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4F48u;
    // 0x1c4f48: 0x0  nop
    ctx->pc = 0x1c4f48u;
    // NOP
    // 0x1c4f4c: 0x0  nop
    ctx->pc = 0x1c4f4cu;
    // NOP
    ctx->pc = 0x1c4f50u;
}
