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

// Function: entry_002036cc
// Address: 0x2036cc - 0x203700
void entry_002036cc_0x2036cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002036cc_0x2036cc");
#endif

    switch (ctx->pc) {
        case 0x2036e4u: goto label_2036e4;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f4u: goto label_2036f4;
        default: break;
    }

    ctx->pc = 0x2036ccu;

    // 0x2036cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2036d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036dc: 0xc08104c  jal         func_204130
    ctx->pc = 0x2036DCu;
    SET_GPR_U32(ctx, 31, 0x2036E4u);
    ctx->pc = 0x2036E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036DCu;
    // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2036DCu, 0x2036E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036E4u;
label_2036e4:
    // 0x2036e4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2036E4u;
    SET_GPR_U32(ctx, 31, 0x2036ECu);
    ctx->pc = 0x2036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036E4u;
    // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2036E4u, 0x2036ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036ECu;
label_2036ec:
    // 0x2036ec: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2036ECu;
    SET_GPR_U32(ctx, 31, 0x2036F4u);
    ctx->pc = 0x2036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036ECu;
    // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2036ECu, 0x2036F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2036f8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203700u;
}
