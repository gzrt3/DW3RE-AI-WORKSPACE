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

// Function: entry_001b82a4
// Address: 0x1b82a4 - 0x1b82e0
void entry_001b82a4_0x1b82a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b82a4_0x1b82a4");
#endif

    ctx->pc = 0x1b82a4u;

    // 0x1b82a4: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x1b82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
    // 0x1b82a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b82ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ACu;
        // 0x1b82b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82B4u;
    // 0x1b82b4: 0x0  nop
    ctx->pc = 0x1b82b4u;
    // NOP
    // 0x1b82b8: 0x0  nop
    ctx->pc = 0x1b82b8u;
    // NOP
    // 0x1b82bc: 0x0  nop
    ctx->pc = 0x1b82bcu;
    // NOP
    // 0x1b82c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b82c4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1b82c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b82c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b82cc: 0xaf8388d8  sw          $v1, -0x7728($gp)
    ctx->pc = 0x1b82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936792), GPR_U32(ctx, 3));
    // 0x1b82d0: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x1b82d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D4u;
        // 0x1b82d8: 0xac233010  sw          $v1, 0x3010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 12304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82DCu;
    // 0x1b82dc: 0x0  nop
    ctx->pc = 0x1b82dcu;
    // NOP
    ctx->pc = 0x1b82e0u;
}
