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

// Function: entry_0016d8d0
// Address: 0x16d8d0 - 0x16d8f0
void entry_0016d8d0_0x16d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d8d0_0x16d8d0");
#endif

    ctx->pc = 0x16d8d0u;

    // 0x16d8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8D8u;
        // 0x16d8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8E0u;
    // 0x16d8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E0u;
        // 0x16d8e4: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8E8u;
    // 0x16d8e8: 0x0  nop
    ctx->pc = 0x16d8e8u;
    // NOP
    // 0x16d8ec: 0x0  nop
    ctx->pc = 0x16d8ecu;
    // NOP
    ctx->pc = 0x16d8f0u;
}
