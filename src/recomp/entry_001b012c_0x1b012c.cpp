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

// Function: entry_001b012c
// Address: 0x1b012c - 0x1b01a4
void entry_001b012c_0x1b012c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b012c_0x1b012c");
#endif

    switch (ctx->pc) {
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0154u: goto label_1b0154;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b0188u: goto label_1b0188;
        default: break;
    }

    ctx->pc = 0x1b012cu;

    // 0x1b012c: 0xc06bcfa  jal         func_1AF3E8
    ctx->pc = 0x1B012Cu;
    SET_GPR_U32(ctx, 31, 0x1B0134u);
    ctx->pc = 0x1B0130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B012Cu;
    // 0x1b0130: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E8u, 0x1B012Cu, 0x1B0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0134u;
label_1b0134:
    // 0x1b0134: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b0138: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B0138u;
    SET_GPR_U32(ctx, 31, 0x1B0140u);
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B0138u, 0x1B0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0140u;
label_1b0140:
    // 0x1b0140: 0x8e6372ac  lw          $v1, 0x72AC($s3)
    ctx->pc = 0x1b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b0144: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B0144u;
    {
        const bool branch_taken_0x1b0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0144u;
        // 0x1b0148: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0144) {
            ctx->pc = 0x1B02B4u;
            return;
        }
    }
    ctx->pc = 0x1B014Cu;
    // 0x1b014c: 0xc06bf0a  jal         func_1AFC28
    ctx->pc = 0x1B014Cu;
    SET_GPR_U32(ctx, 31, 0x1B0154u);
    ctx->pc = 0x1B0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B014Cu;
    // 0x1b0150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC28u, 0x1B014Cu, 0x1B0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0154u;
label_1b0154:
    // 0x1b0154: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B0154u;
    {
        const bool branch_taken_0x1b0154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0154u;
        // 0x1b0158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0154) {
            ctx->pc = 0x1B026Cu;
            return;
        }
    }
    ctx->pc = 0x1B015Cu;
    // 0x1b015c: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1B015Cu;
    SET_GPR_U32(ctx, 31, 0x1B0164u);
    ctx->pc = 0x1B0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B015Cu;
    // 0x1b0160: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1B015Cu, 0x1B0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0164u;
label_1b0164:
    // 0x1b0164: 0x8e2272c4  lw          $v0, 0x72C4($s1)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29380)));
    // 0x1b0168: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B0168u;
    {
        const bool branch_taken_0x1b0168 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0168u;
        // 0x1b016c: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0168) {
            ctx->pc = 0x1B021Cu;
            return;
        }
    }
    ctx->pc = 0x1B0170u;
    // 0x1b0170: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b0174: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0174u;
    {
        const bool branch_taken_0x1b0174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0174u;
        // 0x1b0178: 0x3c170029  lui         $s7, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0174) {
            ctx->pc = 0x1B01A4u;
            return;
        }
    }
    ctx->pc = 0x1B017Cu;
    // 0x1b017c: 0x0  nop
    ctx->pc = 0x1b017cu;
    // NOP
    // 0x1b0180: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0184: 0x0  nop
    ctx->pc = 0x1b0184u;
    // NOP
label_1b0188:
    // 0x1b0188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b018c: 0x0  nop
    ctx->pc = 0x1b018cu;
    // NOP
    // 0x1b0190: 0x0  nop
    ctx->pc = 0x1b0190u;
    // NOP
    // 0x1b0194: 0x0  nop
    ctx->pc = 0x1b0194u;
    // NOP
    // 0x1b0198: 0x0  nop
    ctx->pc = 0x1b0198u;
    // NOP
    // 0x1b019c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B019Cu;
    {
        const bool branch_taken_0x1b019c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b019c) {
            ctx->pc = 0x1B0188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0188;
        }
    }
    ctx->pc = 0x1B01A4u;
}
