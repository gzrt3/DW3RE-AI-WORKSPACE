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

// Function: entry_002037a8
// Address: 0x2037a8 - 0x2037d8
void entry_002037a8_0x2037a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002037a8_0x2037a8");
#endif

    switch (ctx->pc) {
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037ccu: goto label_2037cc;
        default: break;
    }

    ctx->pc = 0x2037a8u;

    // 0x2037a8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2037ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2037b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037b4: 0xc08104c  jal         func_204130
    ctx->pc = 0x2037B4u;
    SET_GPR_U32(ctx, 31, 0x2037BCu);
    ctx->pc = 0x2037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037B4u;
    // 0x2037b8: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2037B4u, 0x2037BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037BCu;
label_2037bc:
    // 0x2037bc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2037BCu;
    SET_GPR_U32(ctx, 31, 0x2037C4u);
    ctx->pc = 0x2037C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037BCu;
    // 0x2037c0: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2037BCu, 0x2037C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2037C4u;
    SET_GPR_U32(ctx, 31, 0x2037CCu);
    ctx->pc = 0x2037C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037C4u;
    // 0x2037c8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2037C4u, 0x2037CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037CCu;
label_2037cc:
    // 0x2037cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2037d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2037D0u;
    {
        const bool branch_taken_0x2037d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d0) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2037D8u;
}
