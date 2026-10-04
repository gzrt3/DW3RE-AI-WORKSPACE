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

// Function: entry_00151798
// Address: 0x151798 - 0x1517b0
void entry_00151798_0x151798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151798_0x151798");
#endif

    ctx->pc = 0x151798u;

    // 0x151798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15179c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1517a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1517A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517A0u;
        // 0x1517a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1517A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1517A8u;
    // 0x1517a8: 0x0  nop
    ctx->pc = 0x1517a8u;
    // NOP
    // 0x1517ac: 0x0  nop
    ctx->pc = 0x1517acu;
    // NOP
    ctx->pc = 0x1517b0u;
}
