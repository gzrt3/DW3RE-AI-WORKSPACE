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

// Function: entry_001acfa0
// Address: 0x1acfa0 - 0x1acfd0
void entry_001acfa0_0x1acfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acfa0_0x1acfa0");
#endif

    switch (ctx->pc) {
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfccu: goto label_1acfcc;
        default: break;
    }

    ctx->pc = 0x1acfa0u;

    // 0x1acfa0: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
    // 0x1acfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acfa8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1acfac: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1acfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1acfb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACFB0u;
    {
        const bool branch_taken_0x1acfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfb0) {
            ctx->pc = 0x1ACFD0u;
            return;
        }
    }
    ctx->pc = 0x1ACFB8u;
    // 0x1acfb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1acfbc: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1ACFBCu;
    SET_GPR_U32(ctx, 31, 0x1ACFC4u);
    ctx->pc = 0x1ACFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFBCu;
    // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1ACFBCu, 0x1ACFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFC4u;
label_1acfc4:
    // 0x1acfc4: 0xc06b6b4  jal         func_1ADAD0
    ctx->pc = 0x1ACFC4u;
    SET_GPR_U32(ctx, 31, 0x1ACFCCu);
    ctx->pc = 0x1ACFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFC4u;
    // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAD0u, 0x1ACFC4u, 0x1ACFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFCCu;
label_1acfcc:
    // 0x1acfcc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1acfd0u;
}
