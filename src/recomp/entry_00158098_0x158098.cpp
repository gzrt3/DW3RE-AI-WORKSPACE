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

// Function: entry_00158098
// Address: 0x158098 - 0x158118
void entry_00158098_0x158098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158098_0x158098");
#endif

    switch (ctx->pc) {
        case 0x1580a4u: goto label_1580a4;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580d0u: goto label_1580d0;
        case 0x1580e0u: goto label_1580e0;
        case 0x1580e8u: goto label_1580e8;
        case 0x1580f0u: goto label_1580f0;
        case 0x158108u: goto label_158108;
        case 0x158110u: goto label_158110;
        default: break;
    }

    ctx->pc = 0x158098u;

    // 0x158098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15809c: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x15809Cu;
    SET_GPR_U32(ctx, 31, 0x1580A4u);
    ctx->pc = 0x1580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15809Cu;
    // 0x1580a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x15809Cu, 0x1580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1580a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1580a8: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x1580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580A8u;
    // 0x1580ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x1580A8u, 0x1580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1580b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1580b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1580bc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1580c0: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1580c4: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1580c8: 0xc079258  jal         func_1E4960
    ctx->pc = 0x1580C8u;
    SET_GPR_U32(ctx, 31, 0x1580D0u);
    ctx->pc = 0x1580CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580C8u;
    // 0x1580cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x1580C8u, 0x1580D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580D0u;
label_1580d0:
    // 0x1580d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1580D0u;
    {
        const bool branch_taken_0x1580d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580d0) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x1580D8u;
    // 0x1580d8: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1580D8u;
    SET_GPR_U32(ctx, 31, 0x1580E0u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1580D8u, 0x1580E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580E0u;
label_1580e0:
    // 0x1580e0: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x1580E0u;
    SET_GPR_U32(ctx, 31, 0x1580E8u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x1580E0u, 0x1580E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580E8u;
label_1580e8:
    // 0x1580e8: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1580E8u;
    SET_GPR_U32(ctx, 31, 0x1580F0u);
    ctx->pc = 0x1580ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580E8u;
    // 0x1580ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1580E8u, 0x1580F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580F0u;
label_1580f0:
    // 0x1580f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1580f4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1580f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1580f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1580fc: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x158100: 0xc056690  jal         func_159A40
    ctx->pc = 0x158100u;
    SET_GPR_U32(ctx, 31, 0x158108u);
    ctx->pc = 0x158104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158100u;
    // 0x158104: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x158100u, 0x158108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158108u;
label_158108:
    // 0x158108: 0xc051420  jal         func_145080
    ctx->pc = 0x158108u;
    SET_GPR_U32(ctx, 31, 0x158110u);
    ctx->pc = 0x15810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158108u;
    // 0x15810c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158108u, 0x158110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158110u;
        // 0x158114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158110) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x158118u;
}
