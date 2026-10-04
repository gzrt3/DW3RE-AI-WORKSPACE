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

// Function: entry_0016d9e8
// Address: 0x16d9e8 - 0x16da20
void entry_0016d9e8_0x16d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d9e8_0x16d9e8");
#endif

    ctx->pc = 0x16d9e8u;

    // 0x16d9e8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d9f0: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x16d9f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16d9f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16d9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16da00: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16da04: 0x24421038  addiu       $v0, $v0, 0x1038
    ctx->pc = 0x16da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4152));
    // 0x16da08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16da0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA14u;
    // 0x16da14: 0x0  nop
    ctx->pc = 0x16da14u;
    // NOP
    // 0x16da18: 0x0  nop
    ctx->pc = 0x16da18u;
    // NOP
    // 0x16da1c: 0x0  nop
    ctx->pc = 0x16da1cu;
    // NOP
    ctx->pc = 0x16da20u;
}
