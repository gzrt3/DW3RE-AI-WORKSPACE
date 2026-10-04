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

// Function: entry_0023fed0
// Address: 0x23fed0 - 0x23fef8
void entry_0023fed0_0x23fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fed0_0x23fed0");
#endif

    switch (ctx->pc) {
        case 0x23fef0u: goto label_23fef0;
        default: break;
    }

    ctx->pc = 0x23fed0u;

    // 0x23fed0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fed4: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fed8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fedc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23fee0: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x23fee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
    // 0x23fee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fee8: 0xc065564  jal         func_195590
    ctx->pc = 0x23FEE8u;
    SET_GPR_U32(ctx, 31, 0x23FEF0u);
    ctx->pc = 0x23FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEE8u;
    // 0x23feec: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195590u, 0x23FEE8u, 0x23FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEF0u;
label_23fef0:
    // 0x23fef0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x23FF14u;
            return;
        }
    }
    ctx->pc = 0x23FEF8u;
}
