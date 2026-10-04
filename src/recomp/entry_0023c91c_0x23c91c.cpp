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

// Function: entry_0023c91c
// Address: 0x23c91c - 0x23c930
void entry_0023c91c_0x23c91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c91c_0x23c91c");
#endif

    ctx->pc = 0x23c91cu;

    // 0x23c91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c924: 0x3e00008  jr          $ra
    ctx->pc = 0x23C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C92Cu;
    // 0x23c92c: 0x0  nop
    ctx->pc = 0x23c92cu;
    // NOP
    ctx->pc = 0x23c930u;
}
