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

// Function: FUN_001afe08
// Address: 0x1afe08 - 0x1b00e0
void FUN_001afe08_0x1afe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afe08_0x1afe08");
#endif

    switch (ctx->pc) {
        case 0x1afe40u: goto label_1afe40;
        case 0x1afe54u: goto label_1afe54;
        case 0x1afe5cu: goto label_1afe5c;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afee4u: goto label_1afee4;
        case 0x1aff04u: goto label_1aff04;
        case 0x1aff10u: goto label_1aff10;
        case 0x1aff4cu: goto label_1aff4c;
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff98u: goto label_1aff98;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b00acu: goto label_1b00ac;
        case 0x1b00b4u: goto label_1b00b4;
        default: break;
    }

    ctx->pc = 0x1afe08u;

    // 0x1afe08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1afe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1afe0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1afe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1afe10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1afe10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1afe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1afe18: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1afe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1afe1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afe20: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1afe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1afe24: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1afe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1afe28: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1afe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1afe2c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1afe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1afe30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1afe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1afe34: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1afe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1afe38: 0xc06bf0a  jal         func_1AFC28
    ctx->pc = 0x1AFE38u;
    SET_GPR_U32(ctx, 31, 0x1AFE40u);
    ctx->pc = 0x1AFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE38u;
    // 0x1afe3c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC28u, 0x1AFE38u, 0x1AFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE40u;
label_1afe40:
    // 0x1afe40: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1AFE40u;
    {
        const bool branch_taken_0x1afe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE40u;
        // 0x1afe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe40) {
            ctx->pc = 0x1B00B8u;
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1AFE48u;
    // 0x1afe48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe4c: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE54u);
    ctx->pc = 0x1AFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE4Cu;
    // 0x1afe50: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AFE4Cu, 0x1AFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE54u;
label_1afe54:
    // 0x1afe54: 0xc0691c4  jal         func_1A4710
    ctx->pc = 0x1AFE54u;
    SET_GPR_U32(ctx, 31, 0x1AFE5Cu);
    ctx->pc = 0x1AFE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE54u;
    // 0x1afe58: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4710u, 0x1AFE54u, 0x1AFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE5Cu;
label_1afe5c:
    // 0x1afe5c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1afe60: 0x8ea572d0  lw          $a1, 0x72D0($s5)
    ctx->pc = 0x1afe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29392)));
    // 0x1afe64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afe68: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1afe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x1afe6c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1afe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1afe70: 0xac8372a4  sw          $v1, 0x72A4($a0)
    ctx->pc = 0x1afe70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2872A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872A4u, _value); } while (0);
    // 0x1afe74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1afe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1afe78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1afe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afe7c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x1afe80: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x1afe84: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x1afe88: 0x3c0b0028  lui         $t3, 0x28
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)40 << 16));
    // 0x1afe8c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1afe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1afe90: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x1afe90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
    // 0x1afe94: 0xacc25f50  sw          $v0, 0x5F50($a2)
    ctx->pc = 0x1afe94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x375F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375F50u, _value); } while (0);
    // 0x1afe98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1afe9c: 0xac6472bc  sw          $a0, 0x72BC($v1)
    ctx->pc = 0x1afe9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872BCu, _value); } while (0);
    // 0x1afea0: 0xace472c0  sw          $a0, 0x72C0($a3)
    ctx->pc = 0x1afea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872C0u, _value); } while (0);
    // 0x1afea4: 0x24516168  addiu       $s1, $v0, 0x6168
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24936));
    // 0x1afea8: 0xad0472b8  sw          $a0, 0x72B8($t0)
    ctx->pc = 0x1afea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B8u, _value); } while (0);
    // 0x1afeac: 0x261261c0  addiu       $s2, $s0, 0x61C0
    ctx->pc = 0x1afeacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25024));
    // 0x1afeb0: 0xad2472c8  sw          $a0, 0x72C8($t1)
    ctx->pc = 0x1afeb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872C8u, _value); } while (0);
    // 0x1afeb4: 0x3c1e0029  lui         $fp, 0x29
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
    // 0x1afeb8: 0xad6472c4  sw          $a0, 0x72C4($t3)
    ctx->pc = 0x1afeb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872C4u, _value); } while (0);
    // 0x1afebc: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
    // 0x1afec0: 0xad4072b4  sw          $zero, 0x72B4($t2)
    ctx->pc = 0x1afec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2872B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B4u, _value); } while (0);
    // 0x1afec4: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x1afec4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x1afec8: 0xaea572d0  sw          $a1, 0x72D0($s5)
    ctx->pc = 0x1afec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 29392), GPR_U32(ctx, 5));
    // 0x1afecc: 0xae8472cc  sw          $a0, 0x72CC($s4)
    ctx->pc = 0x1afeccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29388), GPR_U32(ctx, 4));
label_1afed0:
    // 0x1afed0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afed8: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x1afedc: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AFEDCu;
    SET_GPR_U32(ctx, 31, 0x1AFEE4u);
    ctx->pc = 0x1AFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEDCu;
    // 0x1afee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AFEDCu, 0x1AFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE4u;
label_1afee4:
    // 0x1afee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afee8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AFEE8u;
    {
        const bool branch_taken_0x1afee8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1afee8) {
            ctx->pc = 0x1AFEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFEE8u;
            // 0x1afeec: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF34u;
            goto label_1aff34;
        }
    }
    ctx->pc = 0x1AFEF0u;
    // 0x1afef0: 0x8ee27290  lw          $v0, 0x7290($s7)
    ctx->pc = 0x1afef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29328)));
    // 0x1afef4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFEF4u;
    {
        const bool branch_taken_0x1afef4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF4u;
        // 0x1afef8: 0x8ea672d0  lw          $a2, 0x72D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afef4) {
            ctx->pc = 0x1AFF04u;
            goto label_1aff04;
        }
    }
    ctx->pc = 0x1AFEFCu;
    // 0x1afefc: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFEFCu;
    SET_GPR_U32(ctx, 31, 0x1AFF04u);
    ctx->pc = 0x1AFF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEFCu;
    // 0x1aff00: 0x26c4aa88  addiu       $a0, $s6, -0x5578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFEFCu, 0x1AFF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF04u;
label_1aff04:
    // 0x1aff04: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1aff08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aff0c: 0x0  nop
    ctx->pc = 0x1aff0cu;
    // NOP
label_1aff10:
    // 0x1aff10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aff14: 0x0  nop
    ctx->pc = 0x1aff14u;
    // NOP
    // 0x1aff18: 0x0  nop
    ctx->pc = 0x1aff18u;
    // NOP
    // 0x1aff1c: 0x0  nop
    ctx->pc = 0x1aff1cu;
    // NOP
    // 0x1aff20: 0x0  nop
    ctx->pc = 0x1aff20u;
    // NOP
    // 0x1aff24: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFF24u;
    {
        const bool branch_taken_0x1aff24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aff24) {
            ctx->pc = 0x1AFF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff10;
        }
    }
    ctx->pc = 0x1AFF2Cu;
    // 0x1aff2c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AFF2Cu;
    {
        const bool branch_taken_0x1aff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff2c) {
            ctx->pc = 0x1AFED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFF34u;
label_1aff34:
    // 0x1aff34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AFF34u;
    {
        const bool branch_taken_0x1aff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF34u;
        // 0x1aff38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff34) {
            ctx->pc = 0x1AFF8Cu;
            goto label_1aff8c;
        }
    }
    ctx->pc = 0x1AFF3Cu;
    // 0x1aff3c: 0xae1361c0  sw          $s3, 0x61C0($s0)
    ctx->pc = 0x1aff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25024), GPR_U32(ctx, 19));
    // 0x1aff40: 0xae8072cc  sw          $zero, 0x72CC($s4)
    ctx->pc = 0x1aff40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29388), GPR_U32(ctx, 0));
    // 0x1aff44: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1AFF44u;
    SET_GPR_U32(ctx, 31, 0x1AFF4Cu);
    ctx->pc = 0x1AFF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF44u;
    // 0x1aff48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1AFF44u, 0x1AFF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF4Cu;
label_1aff4c:
    // 0x1aff4c: 0x27d08480  addiu       $s0, $fp, -0x7B80
    ctx->pc = 0x1aff4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935680));
    // 0x1aff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aff54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aff5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aff60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff64: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1aff64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aff68: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aff68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff6c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1aff6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1aff70: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AFF70u;
    SET_GPR_U32(ctx, 31, 0x1AFF78u);
    ctx->pc = 0x1AFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF70u;
    // 0x1aff74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AFF70u, 0x1AFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF78u;
label_1aff78:
    // 0x1aff78: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AFF78u;
    {
        const bool branch_taken_0x1aff78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF78u;
        // 0x1aff7c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff78) {
            ctx->pc = 0x1AFFBCu;
            goto label_1affbc;
        }
    }
    ctx->pc = 0x1AFF80u;
    // 0x1aff80: 0xac4072a4  sw          $zero, 0x72A4($v0)
    ctx->pc = 0x1aff80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29348), GPR_U32(ctx, 0));
    // 0x1aff84: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1AFF84u;
    {
        const bool branch_taken_0x1aff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF84u;
        // 0x1aff88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff84) {
            ctx->pc = 0x1B00B8u;
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1AFF8Cu;
label_1aff8c:
    // 0x1aff8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1aff90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aff94: 0x0  nop
    ctx->pc = 0x1aff94u;
    // NOP
label_1aff98:
    // 0x1aff98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aff9c: 0x0  nop
    ctx->pc = 0x1aff9cu;
    // NOP
    // 0x1affa0: 0x0  nop
    ctx->pc = 0x1affa0u;
    // NOP
    // 0x1affa4: 0x0  nop
    ctx->pc = 0x1affa4u;
    // NOP
    // 0x1affa8: 0x0  nop
    ctx->pc = 0x1affa8u;
    // NOP
    // 0x1affac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFFACu;
    {
        const bool branch_taken_0x1affac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1affac) {
            ctx->pc = 0x1AFF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff98;
        }
    }
    ctx->pc = 0x1AFFB4u;
    // 0x1affb4: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1AFFB4u;
    {
        const bool branch_taken_0x1affb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affb4) {
            ctx->pc = 0x1AFED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFFBCu;
label_1affbc:
    // 0x1affbc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1affbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1affc0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1affc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1affc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1affc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1affc8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1affc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1affcc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1affccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1affd0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1affd4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1affd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1affd8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1affd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1affdc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1affdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1affe0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1affe4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1affe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1affe8: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AFFE8u;
    {
        const bool branch_taken_0x1affe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe8) {
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1AFFF0u;
    // 0x1afff0: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1afff4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFFF4u;
    {
        const bool branch_taken_0x1afff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF4u;
        // 0x1afff8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afff4) {
            ctx->pc = 0x1B0008u;
            goto label_1b0008;
        }
    }
    ctx->pc = 0x1AFFFCu;
    // 0x1afffc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0000: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0000u;
    {
        const bool branch_taken_0x1b0000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0000u;
        // 0x1b0004: 0xac507290  sw          $s0, 0x7290($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0000) {
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1B0008u;
label_1b0008:
    // 0x1b0008: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x1b0008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x1b000c: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1b000cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b0010: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1b0010u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1b0014: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1b0018: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b001c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B001Cu;
    {
        const bool branch_taken_0x1b001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b001c) {
            ctx->pc = 0x1B0020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B001Cu;
            // 0x1b0020: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1B0024u;
    // 0x1b0024: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1b0024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b0028: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x1b002c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b002cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b0030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1b0034: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b0038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1B0040u;
    // 0x1b0040: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0044:
    // 0x1b0044: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1b0048:
    // 0x1b0048: 0xac8072a4  sw          $zero, 0x72A4($a0)
    ctx->pc = 0x1b0048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29348), GPR_U32(ctx, 0));
    // 0x1b004c: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B004Cu;
    {
        const bool branch_taken_0x1b004c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B004Cu;
        // 0x1b0050: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b004c) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B0054u;
    // 0x1b0054: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B005Cu;
    // 0x1b005c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B005Cu;
    {
        const bool branch_taken_0x1b005c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B005Cu;
        // 0x1b0060: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b005c) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B0064u;
    // 0x1b0064: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
    // 0x1b0068: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B0078u;
            goto label_1b0078;
        }
    }
    ctx->pc = 0x1B0070u;
    // 0x1b0070: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0070u;
    SET_GPR_U32(ctx, 31, 0x1B0078u);
    ctx->pc = 0x1B0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0070u;
    // 0x1b0074: 0x2484aaa8  addiu       $a0, $a0, -0x5558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0070u, 0x1B0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0078u;
label_1b0078:
    // 0x1b0078: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B0078u;
    SET_GPR_U32(ctx, 31, 0x1B0080u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B0078u, 0x1B0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0080u;
label_1b0080:
    // 0x1b0080: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0084: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0088: 0xac4472a8  sw          $a0, 0x72A8($v0)
    ctx->pc = 0x1b0088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872A8u, _value); } while (0);
    // 0x1b008c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b0090: 0xac6472ac  sw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b0090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872ACu, _value); } while (0);
    // 0x1b0094: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0098: 0xac4472a0  sw          $a0, 0x72A0($v0)
    ctx->pc = 0x1b0098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2872A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872A0u, _value); } while (0);
    // 0x1b009c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B009Cu;
    {
        const bool branch_taken_0x1b009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B009Cu;
        // 0x1b00a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b009c) {
            ctx->pc = 0x1B00B8u;
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1B00A4u;
label_1b00a4:
    // 0x1b00a4: 0xc06bcfa  jal         func_1AF3E8
    ctx->pc = 0x1B00A4u;
    SET_GPR_U32(ctx, 31, 0x1B00ACu);
    ctx->pc = 0x1AF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E8u, 0x1B00A4u, 0x1B00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00ACu;
label_1b00ac:
    // 0x1b00ac: 0xc06bd74  jal         func_1AF5D0
    ctx->pc = 0x1B00ACu;
    SET_GPR_U32(ctx, 31, 0x1B00B4u);
    ctx->pc = 0x1AF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF5D0u, 0x1B00ACu, 0x1B00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00B4u;
label_1b00b4:
    // 0x1b00b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b00b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b00b8:
    // 0x1b00b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b00b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b00bc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b00c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b00c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b00c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b00c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b00c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b00cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b00d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b00d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b00d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b00d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b00d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b00d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b00dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b00dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b00e0u;
}
