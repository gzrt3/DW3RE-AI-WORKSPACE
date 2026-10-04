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

// Function: entry_00154a8c
// Address: 0x154a8c - 0x154ac0
void entry_00154a8c_0x154a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154a8c_0x154a8c");
#endif

    switch (ctx->pc) {
        case 0x154aa8u: goto label_154aa8;
        default: break;
    }

    ctx->pc = 0x154a8cu;

    // 0x154a8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154a90: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154a94: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154a98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154aa0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154AA0u;
    SET_GPR_U32(ctx, 31, 0x154AA8u);
    ctx->pc = 0x154AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AA0u;
    // 0x154aa4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154AA0u, 0x154AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AA8u;
label_154aa8:
    // 0x154aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x154AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AB4u;
        // 0x154ab8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154ABCu;
    // 0x154abc: 0x0  nop
    ctx->pc = 0x154abcu;
    // NOP
    ctx->pc = 0x154ac0u;
}
