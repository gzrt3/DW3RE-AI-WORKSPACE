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

// Function: entry_00200898
// Address: 0x200898 - 0x2008b0
void entry_00200898_0x200898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200898_0x200898");
#endif

    ctx->pc = 0x200898u;

    // 0x200898: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200898u;
    {
        const bool branch_taken_0x200898 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200898) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x2008A0u;
    // 0x2008a0: 0xaf8090ec  sw          $zero, -0x6F14($gp)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
label_2008a4:
    // 0x2008a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2008A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008ACu;
    // 0x2008ac: 0x0  nop
    ctx->pc = 0x2008acu;
    // NOP
    ctx->pc = 0x2008b0u;
}
