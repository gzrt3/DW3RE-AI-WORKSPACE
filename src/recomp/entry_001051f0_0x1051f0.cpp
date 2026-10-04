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

// Function: entry_001051f0
// Address: 0x1051f0 - 0x105240
void entry_001051f0_0x1051f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001051f0_0x1051f0");
#endif

    switch (ctx->pc) {
        case 0x1051f8u: goto label_1051f8;
        case 0x10521cu: goto label_10521c;
        case 0x105224u: goto label_105224;
        case 0x105238u: goto label_105238;
        default: break;
    }

    ctx->pc = 0x1051f0u;

label_1051f0:
    // 0x1051f0: 0xc06c208  jal         func_1B0820
    ctx->pc = 0x1051F0u;
    SET_GPR_U32(ctx, 31, 0x1051F8u);
    ctx->pc = 0x1B0820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0820u, 0x1051F0u, 0x1051F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051F8u;
label_1051f8:
    // 0x1051f8: 0x0  nop
    ctx->pc = 0x1051f8u;
    // NOP
    // 0x1051fc: 0x0  nop
    ctx->pc = 0x1051fcu;
    // NOP
    // 0x105200: 0x0  nop
    ctx->pc = 0x105200u;
    // NOP
    // 0x105204: 0x0  nop
    ctx->pc = 0x105204u;
    // NOP
    // 0x105208: 0x0  nop
    ctx->pc = 0x105208u;
    // NOP
    // 0x10520c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10520Cu;
    {
        const bool branch_taken_0x10520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10520c) {
            ctx->pc = 0x1051F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1051f0;
        }
    }
    ctx->pc = 0x105214u;
    // 0x105214: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x105214u;
    SET_GPR_U32(ctx, 31, 0x10521Cu);
    ctx->pc = 0x105218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105214u;
    // 0x105218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x105214u, 0x10521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10521Cu;
label_10521c:
    // 0x10521c: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x10521Cu;
    SET_GPR_U32(ctx, 31, 0x105224u);
    ctx->pc = 0x105220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10521Cu;
    // 0x105220: 0x8f828470  lw          $v0, -0x7B90($gp) (Delay Slot)
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x10521Cu, 0x105224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105224u;
label_105224:
    // 0x105224: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x105224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x105228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105228u;
    {
        const bool branch_taken_0x105228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105228) {
            ctx->pc = 0x105240u;
            return;
        }
    }
    ctx->pc = 0x105230u;
    // 0x105230: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105230u;
    SET_GPR_U32(ctx, 31, 0x105238u);
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105230u, 0x105238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105238u;
label_105238:
    // 0x105238: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x105238u;
    SET_GPR_U32(ctx, 31, 0x105240u);
    ctx->pc = 0x10523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105238u;
    // 0x10523c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x105238u, 0x105240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105240u;
}
