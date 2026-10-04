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

// Function: entry_00235c90
// Address: 0x235c90 - 0x235cd8
void entry_00235c90_0x235c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235c90_0x235c90");
#endif

    ctx->pc = 0x235c90u;

    // 0x235c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x235CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA4u;
        // 0x235ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CACu;
    // 0x235cac: 0x0  nop
    ctx->pc = 0x235cacu;
    // NOP
    // 0x235cb0: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x235cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x235CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CBCu;
    // 0x235cbc: 0x0  nop
    ctx->pc = 0x235cbcu;
    // NOP
    // 0x235cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235cc4: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
    // 0x235cc8: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
    // 0x235ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x235CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CD4u;
    // 0x235cd4: 0x0  nop
    ctx->pc = 0x235cd4u;
    // NOP
    ctx->pc = 0x235cd8u;
}
