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

// Function: entry_0016db30
// Address: 0x16db30 - 0x16db60
void entry_0016db30_0x16db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db30_0x16db30");
#endif

    ctx->pc = 0x16db30u;

    // 0x16db30: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16db34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db38: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x16db3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16db40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16db44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db48: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16db4c: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x16db50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16db54: 0x3e00008  jr          $ra
    ctx->pc = 0x16DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DB5Cu;
    // 0x16db5c: 0x0  nop
    ctx->pc = 0x16db5cu;
    // NOP
    ctx->pc = 0x16db60u;
}
