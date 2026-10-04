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

// Function: entry_00203d20
// Address: 0x203d20 - 0x203d50
void entry_00203d20_0x203d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d20_0x203d20");
#endif

    switch (ctx->pc) {
        case 0x203d34u: goto label_203d34;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d44u: goto label_203d44;
        default: break;
    }

    ctx->pc = 0x203d20u;

    // 0x203d20: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203d24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d2c: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D2Cu;
    SET_GPR_U32(ctx, 31, 0x203D34u);
    ctx->pc = 0x203D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D2Cu;
    // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D2Cu, 0x203D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D34u;
label_203d34:
    // 0x203d34: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D34u;
    SET_GPR_U32(ctx, 31, 0x203D3Cu);
    ctx->pc = 0x203D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D34u;
    // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D34u, 0x203D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D3Cu;
    SET_GPR_U32(ctx, 31, 0x203D44u);
    ctx->pc = 0x203D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D3Cu;
    // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D3Cu, 0x203D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D44u;
label_203d44:
    // 0x203d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D50u;
}
