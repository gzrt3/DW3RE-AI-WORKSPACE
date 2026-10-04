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

// Function: entry_0020af5c
// Address: 0x20af5c - 0x20afb0
void entry_0020af5c_0x20af5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020af5c_0x20af5c");
#endif

    ctx->pc = 0x20af5cu;

    // 0x20af5c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF5Cu;
    {
        const bool branch_taken_0x20af5c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF5Cu;
        // 0x20af60: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af5c) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF64u;
    // 0x20af64: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x20af64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
label_20af68:
    // 0x20af68: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF70u;
    // 0x20af70: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x20af74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20af78: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF78u;
        // 0x20af7c: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF80u;
    // 0x20af80: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF80u;
        // 0x20af84: 0xaf849108  sw          $a0, -0x6EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938888), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF88u;
    // 0x20af88: 0x0  nop
    ctx->pc = 0x20af88u;
    // NOP
    // 0x20af8c: 0x0  nop
    ctx->pc = 0x20af8cu;
    // NOP
    // 0x20af90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20af94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20af98: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x20af98u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x20af9c: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0xaf85911c  sw          $a1, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AFA4u;
    // 0x20afa4: 0x0  nop
    ctx->pc = 0x20afa4u;
    // NOP
    // 0x20afa8: 0x0  nop
    ctx->pc = 0x20afa8u;
    // NOP
    // 0x20afac: 0x0  nop
    ctx->pc = 0x20afacu;
    // NOP
    ctx->pc = 0x20afb0u;
}
