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

// Function: entry_0016d98c
// Address: 0x16d98c - 0x16d9b0
void entry_0016d98c_0x16d98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d98c_0x16d98c");
#endif

    ctx->pc = 0x16d98cu;

    // 0x16d98c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16d990: 0x244219d0  addiu       $v0, $v0, 0x19D0
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6608));
    // 0x16d994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d998: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d99c: 0x2442112e  addiu       $v0, $v0, 0x112E
    ctx->pc = 0x16d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4398));
    // 0x16d9a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D9ACu;
    // 0x16d9ac: 0x0  nop
    ctx->pc = 0x16d9acu;
    // NOP
    ctx->pc = 0x16d9b0u;
}
