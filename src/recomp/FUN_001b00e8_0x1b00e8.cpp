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

// Function: FUN_001b00e8
// Address: 0x1b00e8 - 0x1b02d8
void FUN_001b00e8_0x1b00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b00e8_0x1b00e8");
#endif

    switch (ctx->pc) {
        case 0x1b012cu: goto label_1b012c;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0154u: goto label_1b0154;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b0180u: goto label_1b0180;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b01a8u: goto label_1b01a8;
        case 0x1b01bcu: goto label_1b01bc;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b0238u: goto label_1b0238;
        case 0x1b0264u: goto label_1b0264;
        case 0x1b0278u: goto label_1b0278;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02b0u: goto label_1b02b0;
        default: break;
    }

    ctx->pc = 0x1b00e8u;

    // 0x1b00e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b00ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b00ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b00f0: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
    // 0x1b00f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b00f8: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x287290u));
    // 0x1b00fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b00fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0100: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b0104: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b0108: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b0108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b010c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b0110: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b0114: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b0118: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0118u;
    {
        const bool branch_taken_0x1b0118 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0118u;
        // 0x1b011c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0118) {
            ctx->pc = 0x1B012Cu;
            goto label_1b012c;
        }
    }
    ctx->pc = 0x1B0120u;
    // 0x1b0120: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0124: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0124u;
    SET_GPR_U32(ctx, 31, 0x1B012Cu);
    ctx->pc = 0x1B0128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0124u;
    // 0x1b0128: 0x2484aab8  addiu       $a0, $a0, -0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0124u, 0x1B012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B012Cu;
label_1b012c:
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
            goto label_1b02b4;
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
            goto label_1b026c;
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
            goto label_1b021c;
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
            goto label_1b01a4;
        }
    }
    ctx->pc = 0x1B017Cu;
    // 0x1b017c: 0x0  nop
    ctx->pc = 0x1b017cu;
    // NOP
label_1b0180:
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
label_1b01a4:
    // 0x1b01a4: 0x26b06190  addiu       $s0, $s5, 0x6190
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
label_1b01a8:
    // 0x1b01a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b01ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01b0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x1b01b4: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1B01B4u;
    SET_GPR_U32(ctx, 31, 0x1B01BCu);
    ctx->pc = 0x1B01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01B4u;
    // 0x1b01b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1B01B4u, 0x1B01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01BCu;
label_1b01bc:
    // 0x1b01bc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B01BCu;
    {
        const bool branch_taken_0x1b01bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b01bc) {
            ctx->pc = 0x1B01C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B01BCu;
            // 0x1b01c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B020Cu;
            goto label_1b020c;
        }
    }
    ctx->pc = 0x1B01C4u;
    // 0x1b01c4: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b01c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B01C8u;
    {
        const bool branch_taken_0x1b01c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C8u;
        // 0x1b01cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01c8) {
            ctx->pc = 0x1B01E0u;
            goto label_1b01e0;
        }
    }
    ctx->pc = 0x1B01D0u;
    // 0x1b01d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b01d4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x2484aac8  addiu       $a0, $a0, -0x5538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B01D4u, 0x1B01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1b01e0:
    // 0x1b01e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b01e4: 0x0  nop
    ctx->pc = 0x1b01e4u;
    // NOP
label_1b01e8:
    // 0x1b01e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b01ec: 0x0  nop
    ctx->pc = 0x1b01ecu;
    // NOP
    // 0x1b01f0: 0x0  nop
    ctx->pc = 0x1b01f0u;
    // NOP
    // 0x1b01f4: 0x0  nop
    ctx->pc = 0x1b01f4u;
    // NOP
    // 0x1b01f8: 0x0  nop
    ctx->pc = 0x1b01f8u;
    // NOP
    // 0x1b01fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B01E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01e8;
        }
    }
    ctx->pc = 0x1B0204u;
    // 0x1b0204: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B0204u;
    {
        const bool branch_taken_0x1b0204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0204u;
        // 0x1b0208: 0x26b06190  addiu       $s0, $s5, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0204) {
            ctx->pc = 0x1B01A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01a8;
        }
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B020Cu;
    {
        const bool branch_taken_0x1b020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B020Cu;
        // 0x1b0210: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b020c) {
            ctx->pc = 0x1B0180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0180;
        }
    }
    ctx->pc = 0x1B0214u;
    // 0x1b0214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0214u;
    {
        const bool branch_taken_0x1b0214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0xae2072c4  sw          $zero, 0x72C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0214) {
            ctx->pc = 0x1B0224u;
            goto label_1b0224;
        }
    }
    ctx->pc = 0x1B021Cu;
label_1b021c:
    // 0x1b021c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b021cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b0220: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
label_1b0224:
    // 0x1b0224: 0x269061d0  addiu       $s0, $s4, 0x61D0
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25040));
    // 0x1b0228: 0xae9261d0  sw          $s2, 0x61D0($s4)
    ctx->pc = 0x1b0228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 25040), GPR_U32(ctx, 18));
    // 0x1b022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0230: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0230u;
    SET_GPR_U32(ctx, 31, 0x1B0238u);
    ctx->pc = 0x1B0234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0230u;
    // 0x1b0234: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0230u, 0x1B0238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0238u;
label_1b0238:
    // 0x1b0238: 0x26f18480  addiu       $s1, $s7, -0x7B80
    ctx->pc = 0x1b0238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935680));
    // 0x1b023c: 0x26a46190  addiu       $a0, $s5, 0x6190
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
    // 0x1b0240: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b0240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b024c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b024cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0250: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0254: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b0254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b025c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B025Cu;
    SET_GPR_U32(ctx, 31, 0x1B0264u);
    ctx->pc = 0x1B0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B025Cu;
    // 0x1b0260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B025Cu, 0x1B0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0264u;
label_1b0264:
    // 0x1b0264: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0264u;
            // 0x1b0268: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B028Cu;
            goto label_1b028c;
        }
    }
    ctx->pc = 0x1B026Cu;
label_1b026c:
    // 0x1b026c: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b0270: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0270u;
    SET_GPR_U32(ctx, 31, 0x1B0278u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0270u, 0x1B0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0278u;
label_1b0278:
    // 0x1b0278: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x1b027c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0280: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B02B4u;
            goto label_1b02b4;
        }
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B028Cu;
    {
        const bool branch_taken_0x1b028c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b028c) {
            ctx->pc = 0x1B029Cu;
            goto label_1b029c;
        }
    }
    ctx->pc = 0x1B0294u;
    // 0x1b0294: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0294u, 0x1B029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b02a0: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
    // 0x1b02a4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1b02a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B02A8u;
    SET_GPR_U32(ctx, 31, 0x1B02B0u);
    ctx->pc = 0x1B02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02A8u;
    // 0x1b02ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B02A8u, 0x1B02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02B0u;
label_1b02b0:
    // 0x1b02b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b02b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b02b4:
    // 0x1b02b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b02b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b02b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b02bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b02c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b02c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b02c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b02c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b02cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b02ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b02d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b02d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b02d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b02d8u;
}
