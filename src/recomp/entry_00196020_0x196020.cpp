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

// Function: entry_00196020
// Address: 0x196020 - 0x196040
void entry_00196020_0x196020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196020_0x196020");
#endif

    ctx->pc = 0x196020u;

    // 0x196020: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x196024: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x196028: 0x24423270  addiu       $v0, $v0, 0x3270
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12912));
    // 0x19602c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196030: 0x3e00008  jr          $ra
    ctx->pc = 0x196030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196038u;
    // 0x196038: 0x0  nop
    ctx->pc = 0x196038u;
    // NOP
    // 0x19603c: 0x0  nop
    ctx->pc = 0x19603cu;
    // NOP
    ctx->pc = 0x196040u;
}
