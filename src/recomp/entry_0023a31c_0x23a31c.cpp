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

// Function: entry_0023a31c
// Address: 0x23a31c - 0x23a348
void entry_0023a31c_0x23a31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a31c_0x23a31c");
#endif

    switch (ctx->pc) {
        case 0x23a324u: goto label_23a324;
        default: break;
    }

    ctx->pc = 0x23a31cu;

    // 0x23a31c: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x23A31Cu;
    SET_GPR_U32(ctx, 31, 0x23A324u);
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x23A31Cu, 0x23A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A324u;
label_23a324:
    // 0x23a324: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x23a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x23a328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23a338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a33c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a340: 0x3e00008  jr          $ra
    ctx->pc = 0x23A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A340u;
        // 0x23a344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A348u;
}
