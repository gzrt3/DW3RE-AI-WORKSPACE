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

// Function: entry_0015bfac
// Address: 0x15bfac - 0x15bfe0
void entry_0015bfac_0x15bfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bfac_0x15bfac");
#endif

    ctx->pc = 0x15bfacu;

    // 0x15bfac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bfb0: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x15bfb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bfbc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15bfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15bfc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bfc8: 0x0  nop
    ctx->pc = 0x15bfc8u;
    // NOP
    // 0x15bfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x15BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BFD4u;
    // 0x15bfd4: 0x0  nop
    ctx->pc = 0x15bfd4u;
    // NOP
    // 0x15bfd8: 0x0  nop
    ctx->pc = 0x15bfd8u;
    // NOP
    // 0x15bfdc: 0x0  nop
    ctx->pc = 0x15bfdcu;
    // NOP
    ctx->pc = 0x15bfe0u;
}
