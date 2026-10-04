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

// Function: entry_001b0fec
// Address: 0x1b0fec - 0x1b1158
void entry_001b0fec_0x1b0fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0fec_0x1b0fec");
#endif

    switch (ctx->pc) {
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b111cu: goto label_1b111c;
        default: break;
    }

    ctx->pc = 0x1b0fecu;

    // 0x1b0fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ff4: 0xc06c672  jal         func_1B19C8
    ctx->pc = 0x1B0FF4u;
    SET_GPR_U32(ctx, 31, 0x1B0FFCu);
    ctx->pc = 0x1B0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF4u;
    // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19C8u, 0x1B0FF4u, 0x1B0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FFCu;
label_1b0ffc:
    // 0x1b0ffc: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1B0FFCu;
    SET_GPR_U32(ctx, 31, 0x1B1004u);
    ctx->pc = 0x1B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FFCu;
    // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1B0FFCu, 0x1B1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1004u;
label_1b1004:
    // 0x1b1004: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1B1004u;
    SET_GPR_U32(ctx, 31, 0x1B100Cu);
    ctx->pc = 0x1B1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1004u;
    // 0x1b1008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1B1004u, 0x1B100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B100Cu;
label_1b100c:
    // 0x1b100c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1010: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b1014: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B1014u;
    {
        const bool branch_taken_0x1b1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1014) {
            ctx->pc = 0x1B1044u;
            goto label_1b1044;
        }
    }
    ctx->pc = 0x1B101Cu;
    // 0x1b101c: 0x0  nop
    ctx->pc = 0x1b101cu;
    // NOP
label_1b1020:
    // 0x1b1020: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b1024: 0x0  nop
    ctx->pc = 0x1b1024u;
    // NOP
label_1b1028:
    // 0x1b1028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b102c: 0x0  nop
    ctx->pc = 0x1b102cu;
    // NOP
    // 0x1b1030: 0x0  nop
    ctx->pc = 0x1b1030u;
    // NOP
    // 0x1b1034: 0x0  nop
    ctx->pc = 0x1b1034u;
    // NOP
    // 0x1b1038: 0x0  nop
    ctx->pc = 0x1b1038u;
    // NOP
    // 0x1b103c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B103Cu;
    {
        const bool branch_taken_0x1b103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b103c) {
            ctx->pc = 0x1B1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1028;
        }
    }
    ctx->pc = 0x1B1044u;
label_1b1044:
    // 0x1b1044: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1048: 0x26046200  addiu       $a0, $s0, 0x6200
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
    // 0x1b104c: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1b104cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x1b1050: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1B1050u;
    SET_GPR_U32(ctx, 31, 0x1B1058u);
    ctx->pc = 0x1B1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1050u;
    // 0x1b1054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1B1050u, 0x1B1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1058u;
label_1b1058:
    // 0x1b1058: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1058u;
    {
        const bool branch_taken_0x1b1058 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1058u;
        // 0x1b105c: 0x26126200  addiu       $s2, $s0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1058) {
            ctx->pc = 0x1B108Cu;
            goto label_1b108c;
        }
    }
    ctx->pc = 0x1B1060u;
    // 0x1b1060: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b1064: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B1064u;
    SET_GPR_U32(ctx, 31, 0x1B106Cu);
    ctx->pc = 0x1B1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1064u;
    // 0x1b1068: 0x2484ac98  addiu       $a0, $a0, -0x5368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B1064u, 0x1B106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B106Cu;
label_1b106c:
    // 0x1b106c: 0x0  nop
    ctx->pc = 0x1b106cu;
    // NOP
label_1b1070:
    // 0x1b1070: 0x0  nop
    ctx->pc = 0x1b1070u;
    // NOP
    // 0x1b1074: 0x0  nop
    ctx->pc = 0x1b1074u;
    // NOP
    // 0x1b1078: 0x0  nop
    ctx->pc = 0x1b1078u;
    // NOP
    // 0x1b107c: 0x0  nop
    ctx->pc = 0x1b107cu;
    // NOP
    // 0x1b1080: 0x0  nop
    ctx->pc = 0x1b1080u;
    // NOP
    // 0x1b1084: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1084u;
    {
        const bool branch_taken_0x1b1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1084) {
            ctx->pc = 0x1B1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1070;
        }
    }
    ctx->pc = 0x1B108Cu;
label_1b108c:
    // 0x1b108c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1b1090: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B1090u;
    {
        const bool branch_taken_0x1b1090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1090) {
            ctx->pc = 0x1B1020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1020;
        }
    }
    ctx->pc = 0x1B1098u;
    // 0x1b1098: 0x269177c0  addiu       $s1, $s4, 0x77C0
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 30656));
    // 0x1b109c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b109cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10a0: 0x26c76280  addiu       $a3, $s6, 0x6280
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 25216));
    // 0x1b10a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b10a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10ac: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1b10b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b10b8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b10bc: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B10BCu;
    SET_GPR_U32(ctx, 31, 0x1B10C4u);
    ctx->pc = 0x1B10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10BCu;
    // 0x1b10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B10BCu, 0x1B10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10C4u;
label_1b10c4:
    // 0x1b10c4: 0x8ea48d0c  lw          $a0, -0x72F4($s5)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    // 0x1b10c8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B10C8u;
    SET_GPR_U32(ctx, 31, 0x1B10D0u);
    ctx->pc = 0x1B10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C8u;
    // 0x1b10cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B10C8u, 0x1B10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10D0u;
label_1b10d0:
    // 0x1b10d0: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B10D0u;
    {
        const bool branch_taken_0x1b10d0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b10d0) {
            ctx->pc = 0x1B10D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10D0u;
            // 0x1b10d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B10E4u;
            goto label_1b10e4;
        }
    }
    ctx->pc = 0x1B10D8u;
    // 0x1b10d8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1b10dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B10DCu;
    {
        const bool branch_taken_0x1b10dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10DCu;
        // 0x1b10e0: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10dc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B10E4u;
label_1b10e4:
    // 0x1b10e4: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x1b10e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B10E8u;
    {
        const bool branch_taken_0x1b10e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E8u;
        // 0x1b10ec: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10e8) {
            ctx->pc = 0x1B1104u;
            goto label_1b1104;
        }
    }
    ctx->pc = 0x1B10F0u;
    // 0x1b10f0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B10F0u;
    SET_GPR_U32(ctx, 31, 0x1B10F8u);
    ctx->pc = 0x1B10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10F0u;
    // 0x1b10f4: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B10F0u, 0x1B10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1b10fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B10FCu;
    {
        const bool branch_taken_0x1b10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10FCu;
        // 0x1b1100: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10fc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1104u;
label_1b1104:
    // 0x1b1104: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1108: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x1b110c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B110Cu;
    {
        const bool branch_taken_0x1b110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B110Cu;
        // 0x1b1110: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b110c) {
            ctx->pc = 0x1B1128u;
            goto label_1b1128;
        }
    }
    ctx->pc = 0x1B1114u;
    // 0x1b1114: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B1114u;
    SET_GPR_U32(ctx, 31, 0x1B111Cu);
    ctx->pc = 0x1B1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1114u;
    // 0x1b1118: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B1114u, 0x1B111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1b111cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1b1120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1120u;
    {
        const bool branch_taken_0x1b1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1120) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1128u;
label_1b1128:
    // 0x1b1128: 0x8e8277c0  lw          $v0, 0x77C0($s4)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30656)));
label_1b112c:
    // 0x1b112c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b1130: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1134: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1138: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1b1138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b113c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1b113cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1140: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1b1140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1144: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1b1144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1148: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b1148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b114c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B114Cu;
        // 0x1b1150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1154u;
    // 0x1b1154: 0x0  nop
    ctx->pc = 0x1b1154u;
    // NOP
    ctx->pc = 0x1b1158u;
}
