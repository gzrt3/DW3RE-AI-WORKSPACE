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

// Function: entry_002364ac
// Address: 0x2364ac - 0x2364c0
void entry_002364ac_0x2364ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002364ac_0x2364ac");
#endif

    ctx->pc = 0x2364acu;

    // 0x2364ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2364acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2364b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2364b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2364B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B4u;
        // 0x2364b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2364BCu;
    // 0x2364bc: 0x0  nop
    ctx->pc = 0x2364bcu;
    // NOP
    ctx->pc = 0x2364c0u;
}
