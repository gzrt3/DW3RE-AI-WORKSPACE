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

// Function: entry_001ebbc8
// Address: 0x1ebbc8 - 0x1ebbe0
void entry_001ebbc8_0x1ebbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebbc8_0x1ebbc8");
#endif

    ctx->pc = 0x1ebbc8u;

    // 0x1ebbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBCCu;
        // 0x1ebbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBBD4u;
    // 0x1ebbd4: 0x0  nop
    ctx->pc = 0x1ebbd4u;
    // NOP
    // 0x1ebbd8: 0x0  nop
    ctx->pc = 0x1ebbd8u;
    // NOP
    // 0x1ebbdc: 0x0  nop
    ctx->pc = 0x1ebbdcu;
    // NOP
    ctx->pc = 0x1ebbe0u;
}
