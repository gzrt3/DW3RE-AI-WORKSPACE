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

// Function: entry_00154b3c
// Address: 0x154b3c - 0x154b60
void entry_00154b3c_0x154b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b3c_0x154b3c");
#endif

    switch (ctx->pc) {
        case 0x154b54u: goto label_154b54;
        default: break;
    }

    ctx->pc = 0x154b3cu;

    // 0x154b3c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154b40: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154b44: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154b4c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B4Cu;
    SET_GPR_U32(ctx, 31, 0x154B54u);
    ctx->pc = 0x154B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B4Cu;
    // 0x154b50: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B4Cu, 0x154B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B54u;
label_154b54:
    // 0x154b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154b58: 0x3e00008  jr          $ra
    ctx->pc = 0x154B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B58u;
        // 0x154b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154B60u;
}
