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

// Function: entry_001ace3c
// Address: 0x1ace3c - 0x1acea8
void entry_001ace3c_0x1ace3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace3c_0x1ace3c");
#endif

    switch (ctx->pc) {
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace90u: goto label_1ace90;
        case 0x1acea0u: goto label_1acea0;
        default: break;
    }

    ctx->pc = 0x1ace3cu;

    // 0x1ace3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace40: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE48u;
    // 0x1ace48: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x1ace4c: 0xc  syscall     0
    ctx->pc = 0x1ace4cu;
    ctx->pc = 0x1ACE50u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace50:
    // 0x1ace50: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE58u;
    // 0x1ace58: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1ace5c: 0xc  syscall     0
    ctx->pc = 0x1ace5cu;
    ctx->pc = 0x1ACE60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace60:
    // 0x1ace60: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE68u;
    // 0x1ace68: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x1ace6c: 0xc  syscall     0
    ctx->pc = 0x1ace6cu;
    ctx->pc = 0x1ACE70u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace70:
    // 0x1ace70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE78u;
    // 0x1ace78: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ace78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ace7c: 0xc  syscall     0
    ctx->pc = 0x1ace7cu;
    ctx->pc = 0x1ACE80u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace80:
    // 0x1ace80: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE88u;
    // 0x1ace88: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x1ace88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x1ace8c: 0xc  syscall     0
    ctx->pc = 0x1ace8cu;
    ctx->pc = 0x1ACE90u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace90:
    // 0x1ace90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE98u;
    // 0x1ace98: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1ace98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1ace9c: 0xc  syscall     0
    ctx->pc = 0x1ace9cu;
    ctx->pc = 0x1ACEA0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acea0:
    // 0x1acea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEA8u;
}
