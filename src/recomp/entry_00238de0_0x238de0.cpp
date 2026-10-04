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

// Function: entry_00238de0
// Address: 0x238de0 - 0x238df8
void entry_00238de0_0x238de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238de0_0x238de0");
#endif

    ctx->pc = 0x238de0u;

    // 0x238de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238dec: 0x3e00008  jr          $ra
    ctx->pc = 0x238DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238DF4u;
    // 0x238df4: 0x0  nop
    ctx->pc = 0x238df4u;
    // NOP
    ctx->pc = 0x238df8u;
}
