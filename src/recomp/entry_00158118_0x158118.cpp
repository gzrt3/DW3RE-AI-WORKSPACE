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

// Function: entry_00158118
// Address: 0x158118 - 0x15817c
void entry_00158118_0x158118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158118_0x158118");
#endif

    switch (ctx->pc) {
        case 0x158128u: goto label_158128;
        case 0x158134u: goto label_158134;
        case 0x158144u: goto label_158144;
        case 0x15814cu: goto label_15814c;
        case 0x158154u: goto label_158154;
        case 0x15815cu: goto label_15815c;
        case 0x158174u: goto label_158174;
        default: break;
    }

    ctx->pc = 0x158118u;

    // 0x158118: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x158118u;
    {
        const bool branch_taken_0x158118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158118u;
        // 0x15811c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158118) {
            ctx->pc = 0x15817Cu;
            return;
        }
    }
    ctx->pc = 0x158120u;
    // 0x158120: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x158120u;
    SET_GPR_U32(ctx, 31, 0x158128u);
    ctx->pc = 0x158124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158120u;
    // 0x158124: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x158120u, 0x158128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158128u;
label_158128:
    // 0x158128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15812c: 0xc082e78  jal         func_20B9E0
    ctx->pc = 0x15812Cu;
    SET_GPR_U32(ctx, 31, 0x158134u);
    ctx->pc = 0x158130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15812Cu;
    // 0x158130: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B9E0u, 0x15812Cu, 0x158134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158134u;
label_158134:
    // 0x158134: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x158134u;
    {
        const bool branch_taken_0x158134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158134) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x15813Cu;
    // 0x15813c: 0xc084904  jal         func_212410
    ctx->pc = 0x15813Cu;
    SET_GPR_U32(ctx, 31, 0x158144u);
    ctx->pc = 0x158140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15813Cu;
    // 0x158140: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212410u, 0x15813Cu, 0x158144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158144u;
label_158144:
    // 0x158144: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x158144u;
    SET_GPR_U32(ctx, 31, 0x15814Cu);
    ctx->pc = 0x158148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158144u;
    // 0x158148: 0xaf82863c  sw          $v0, -0x79C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x158144u, 0x15814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x15814Cu;
    SET_GPR_U32(ctx, 31, 0x158154u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x15814Cu, 0x158154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158154u;
label_158154:
    // 0x158154: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x158154u;
    SET_GPR_U32(ctx, 31, 0x15815Cu);
    ctx->pc = 0x158158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158154u;
    // 0x158158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x158154u, 0x15815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15815Cu;
label_15815c:
    // 0x15815c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x158160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158164: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x158164u;
    {
        const bool branch_taken_0x158164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x158164) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x15816Cu;
    // 0x15816c: 0xc051420  jal         func_145080
    ctx->pc = 0x15816Cu;
    SET_GPR_U32(ctx, 31, 0x158174u);
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x15816Cu, 0x158174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158174u;
label_158174:
    // 0x158174: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158174u;
        // 0x158178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158174) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x15817Cu;
}
