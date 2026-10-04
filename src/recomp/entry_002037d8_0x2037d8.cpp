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

// Function: entry_002037d8
// Address: 0x2037d8 - 0x203820
void entry_002037d8_0x2037d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002037d8_0x2037d8");
#endif

    switch (ctx->pc) {
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037fcu: goto label_2037fc;
        default: break;
    }

    ctx->pc = 0x2037d8u;

    // 0x2037d8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2037dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2037dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2037e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037e4: 0xc08104c  jal         func_204130
    ctx->pc = 0x2037E4u;
    SET_GPR_U32(ctx, 31, 0x2037ECu);
    ctx->pc = 0x2037E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037E4u;
    // 0x2037e8: 0x27a80620  addiu       $t0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2037E4u, 0x2037ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037ECu;
label_2037ec:
    // 0x2037ec: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2037ECu;
    SET_GPR_U32(ctx, 31, 0x2037F4u);
    ctx->pc = 0x2037F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037ECu;
    // 0x2037f0: 0x27a40620  addiu       $a0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2037ECu, 0x2037F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037F4u;
label_2037f4:
    // 0x2037f4: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2037F4u;
    SET_GPR_U32(ctx, 31, 0x2037FCu);
    ctx->pc = 0x2037F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037F4u;
    // 0x2037f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2037F4u, 0x2037FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037FCu;
label_2037fc:
    // 0x2037fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2037fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203800: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x203804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20380c: 0x3e00008  jr          $ra
    ctx->pc = 0x20380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20380Cu;
        // 0x203810: 0x27bd0720  addiu       $sp, $sp, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203814u;
    // 0x203814: 0x0  nop
    ctx->pc = 0x203814u;
    // NOP
    // 0x203818: 0x0  nop
    ctx->pc = 0x203818u;
    // NOP
    // 0x20381c: 0x0  nop
    ctx->pc = 0x20381cu;
    // NOP
    ctx->pc = 0x203820u;
}
