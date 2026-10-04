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

// Function: entry_00203d84
// Address: 0x203d84 - 0x203dc0
void entry_00203d84_0x203d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d84_0x203d84");
#endif

    switch (ctx->pc) {
        case 0x203d98u: goto label_203d98;
        case 0x203da0u: goto label_203da0;
        case 0x203da8u: goto label_203da8;
        default: break;
    }

    ctx->pc = 0x203d84u;

    // 0x203d84: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203d88: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d90: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D90u;
    SET_GPR_U32(ctx, 31, 0x203D98u);
    ctx->pc = 0x203D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D90u;
    // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D90u, 0x203D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D98u;
label_203d98:
    // 0x203d98: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D98u;
    SET_GPR_U32(ctx, 31, 0x203DA0u);
    ctx->pc = 0x203D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D98u;
    // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D98u, 0x203DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203DA0u;
    SET_GPR_U32(ctx, 31, 0x203DA8u);
    ctx->pc = 0x203DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DA0u;
    // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203DA0u, 0x203DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203dac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x203db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203db8: 0x3e00008  jr          $ra
    ctx->pc = 0x203DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB8u;
        // 0x203dbc: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DC0u;
}
