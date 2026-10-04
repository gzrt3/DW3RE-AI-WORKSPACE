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

// Function: entry_001abbac
// Address: 0x1abbac - 0x1abbc0
void entry_001abbac_0x1abbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abbac_0x1abbac");
#endif

    ctx->pc = 0x1abbacu;

    // 0x1abbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abbb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBB4u;
        // 0x1abbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBBCu;
    // 0x1abbbc: 0x0  nop
    ctx->pc = 0x1abbbcu;
    // NOP
    ctx->pc = 0x1abbc0u;
}
