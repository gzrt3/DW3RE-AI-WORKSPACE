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

// Function: entry_00203aac
// Address: 0x203aac - 0x203ae8
void entry_00203aac_0x203aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203aac_0x203aac");
#endif

    switch (ctx->pc) {
        case 0x203ac8u: goto label_203ac8;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad8u: goto label_203ad8;
        default: break;
    }

    ctx->pc = 0x203aacu;

    // 0x203aac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AE8u;
            return;
        }
    }
    ctx->pc = 0x203AB4u;
    // 0x203ab4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203ab8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ac0: 0xc08104c  jal         func_204130
    ctx->pc = 0x203AC0u;
    SET_GPR_U32(ctx, 31, 0x203AC8u);
    ctx->pc = 0x203AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC0u;
    // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203AC0u, 0x203AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AC8u;
label_203ac8:
    // 0x203ac8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203AC8u;
    SET_GPR_U32(ctx, 31, 0x203AD0u);
    ctx->pc = 0x203ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC8u;
    // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203AC8u, 0x203AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203AD0u;
    SET_GPR_U32(ctx, 31, 0x203AD8u);
    ctx->pc = 0x203AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD0u;
    // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203AD0u, 0x203AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203adc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203ae0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203AE8u;
}
