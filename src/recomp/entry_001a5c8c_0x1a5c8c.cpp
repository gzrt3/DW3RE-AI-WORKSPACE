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

// Function: entry_001a5c8c
// Address: 0x1a5c8c - 0x1a5ca0
void entry_001a5c8c_0x1a5c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c8c_0x1a5c8c");
#endif

    ctx->pc = 0x1a5c8cu;

    // 0x1a5c8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C94u;
        // 0x1a5c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5C9Cu;
    // 0x1a5c9c: 0x0  nop
    ctx->pc = 0x1a5c9cu;
    // NOP
    ctx->pc = 0x1a5ca0u;
}
