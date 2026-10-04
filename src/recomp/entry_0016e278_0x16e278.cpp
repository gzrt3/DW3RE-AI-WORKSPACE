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

// Function: entry_0016e278
// Address: 0x16e278 - 0x16e290
void entry_0016e278_0x16e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e278_0x16e278");
#endif

    ctx->pc = 0x16e278u;

    // 0x16e278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e27c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E27Cu;
        // 0x16e280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E284u;
    // 0x16e284: 0x0  nop
    ctx->pc = 0x16e284u;
    // NOP
    // 0x16e288: 0x0  nop
    ctx->pc = 0x16e288u;
    // NOP
    // 0x16e28c: 0x0  nop
    ctx->pc = 0x16e28cu;
    // NOP
    ctx->pc = 0x16e290u;
}
