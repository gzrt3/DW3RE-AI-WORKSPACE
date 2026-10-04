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

// Function: entry_00169844
// Address: 0x169844 - 0x169880
void entry_00169844_0x169844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169844_0x169844");
#endif

    ctx->pc = 0x169844u;

    // 0x169844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16984c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16984cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169850: 0x3e00008  jr          $ra
    ctx->pc = 0x169850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169850u;
        // 0x169854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169858u;
    // 0x169858: 0x0  nop
    ctx->pc = 0x169858u;
    // NOP
    // 0x16985c: 0x0  nop
    ctx->pc = 0x16985cu;
    // NOP
    // 0x169860: 0x3e00008  jr          $ra
    ctx->pc = 0x169860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169860u;
        // 0x169864: 0x8f82870c  lw          $v0, -0x78F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169868u;
    // 0x169868: 0x0  nop
    ctx->pc = 0x169868u;
    // NOP
    // 0x16986c: 0x0  nop
    ctx->pc = 0x16986cu;
    // NOP
    // 0x169870: 0x3e00008  jr          $ra
    ctx->pc = 0x169870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169870u;
        // 0x169874: 0x8f8286f4  lw          $v0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169878u;
    // 0x169878: 0x0  nop
    ctx->pc = 0x169878u;
    // NOP
    // 0x16987c: 0x0  nop
    ctx->pc = 0x16987cu;
    // NOP
    ctx->pc = 0x169880u;
}
