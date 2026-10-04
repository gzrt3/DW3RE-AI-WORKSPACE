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

// Function: entry_001fa168
// Address: 0x1fa168 - 0x1fa180
void entry_001fa168_0x1fa168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa168_0x1fa168");
#endif

    ctx->pc = 0x1fa168u;

    // 0x1fa168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa174: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA174u;
        // 0x1fa178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA17Cu;
    // 0x1fa17c: 0x0  nop
    ctx->pc = 0x1fa17cu;
    // NOP
    ctx->pc = 0x1fa180u;
}
