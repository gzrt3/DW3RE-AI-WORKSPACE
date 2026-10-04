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

// Function: entry_00235914
// Address: 0x235914 - 0x235940
void entry_00235914_0x235914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235914_0x235914");
#endif

    ctx->pc = 0x235914u;

    // 0x235914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23591c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23591cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235928: 0x3e00008  jr          $ra
    ctx->pc = 0x235928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235928u;
        // 0x23592c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235930u;
    // 0x235930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x235934: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x235934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
    // 0x235938: 0x3e00008  jr          $ra
    ctx->pc = 0x235938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235940u;
}
