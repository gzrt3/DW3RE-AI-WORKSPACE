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

// Function: FUN_00150e20
// Address: 0x150e20 - 0x1510d0
void FUN_00150e20_0x150e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150e20_0x150e20");
#endif

    switch (ctx->pc) {
        case 0x150e60u: goto label_150e60;
        case 0x150f34u: goto label_150f34;
        case 0x150f40u: goto label_150f40;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f58u: goto label_150f58;
        case 0x150f64u: goto label_150f64;
        case 0x150fc4u: goto label_150fc4;
        case 0x150fd0u: goto label_150fd0;
        case 0x150fdcu: goto label_150fdc;
        case 0x150ff4u: goto label_150ff4;
        case 0x151014u: goto label_151014;
        case 0x1510c0u: goto label_1510c0;
        default: break;
    }

    ctx->pc = 0x150e20u;

    // 0x150e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e34: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x150e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E38u;
    {
        const bool branch_taken_0x150e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E38u;
        // 0x150e3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e38) {
            ctx->pc = 0x150E48u;
            goto label_150e48;
        }
    }
    ctx->pc = 0x150E40u;
    // 0x150e40: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x150E40u;
    {
        const bool branch_taken_0x150e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E40u;
        // 0x150e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e40) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x150E48u;
label_150e48:
    // 0x150e48: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e48) {
            ctx->pc = 0x150F6Cu;
            goto label_150f6c;
        }
    }
    ctx->pc = 0x150E50u;
    // 0x150e50: 0x8f868128  lw          $a2, -0x7ED8($gp)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x150e54: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x150e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x150e58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e5c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x150e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_150e60:
    // 0x150e60: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x150e64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150E64u;
    {
        const bool branch_taken_0x150e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e64) {
            ctx->pc = 0x150E70u;
            goto label_150e70;
        }
    }
    ctx->pc = 0x150E6Cu;
    // 0x150e6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150e70:
    // 0x150e70: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x150e74: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E84u;
            goto label_150e84;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150EA8u;
            goto label_150ea8;
        }
    }
    ctx->pc = 0x150E84u;
label_150e84:
    // 0x150e84: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x150e88: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E88u;
    {
        const bool branch_taken_0x150e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e88) {
            ctx->pc = 0x150E98u;
            goto label_150e98;
        }
    }
    ctx->pc = 0x150E90u;
    // 0x150e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150E90u;
    {
        const bool branch_taken_0x150e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E90u;
        // 0x150e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e90) {
            ctx->pc = 0x150EA8u;
            goto label_150ea8;
        }
    }
    ctx->pc = 0x150E98u;
label_150e98:
    // 0x150e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150e9c: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x150ea0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA0u;
        // 0x150ea4: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150e60;
        }
    }
    ctx->pc = 0x150EA8u;
label_150ea8:
    // 0x150ea8: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x150ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x150eac: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x150EACu;
    {
        const bool branch_taken_0x150eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EACu;
        // 0x150eb0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eac) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150EB4u;
    // 0x150eb4: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x150EB4u;
    {
        const bool branch_taken_0x150eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150eb4) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150EBCu;
    // 0x150ebc: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x150ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x150ec0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x150ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x150ec4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x150ec8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x150ecc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x150ed0: 0xc48021  addu        $s0, $a2, $a0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x150ed4: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x150ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x150ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150edc: 0xa603020a  sh          $v1, 0x20A($s0)
    ctx->pc = 0x150edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 3));
    // 0x150ee0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x150ee4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150ee8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150eec: 0xa2020210  sb          $v0, 0x210($s0)
    ctx->pc = 0x150eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x150ef0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x150ef4: 0xa2020211  sb          $v0, 0x211($s0)
    ctx->pc = 0x150ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x150ef8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x150efc: 0xa6020212  sh          $v0, 0x212($s0)
    ctx->pc = 0x150efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
    // 0x150f00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x150f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150f04: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x150f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x150f08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x150f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150f0c: 0xe6000218  swc1        $f0, 0x218($s0)
    ctx->pc = 0x150f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
    // 0x150f10: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x150f14: 0xa602021c  sh          $v0, 0x21C($s0)
    ctx->pc = 0x150f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 2));
    // 0x150f18: 0x8062000e  lb          $v0, 0xE($v1)
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x150f1c: 0xa202021e  sb          $v0, 0x21E($s0)
    ctx->pc = 0x150f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 2));
    // 0x150f20: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x150f24: 0xa202021f  sb          $v0, 0x21F($s0)
    ctx->pc = 0x150f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 2));
    // 0x150f28: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x150f2c: 0xc0457b0  jal         func_115EC0
    ctx->pc = 0x150F2Cu;
    SET_GPR_U32(ctx, 31, 0x150F34u);
    ctx->pc = 0x150F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F2Cu;
    // 0x150f30: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EC0u, 0x150F2Cu, 0x150F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F34u;
label_150f34:
    // 0x150f34: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x150f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x150f38: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150F38u;
    SET_GPR_U32(ctx, 31, 0x150F40u);
    ctx->pc = 0x150F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F38u;
    // 0x150f3c: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150F38u, 0x150F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F40u;
label_150f40:
    // 0x150f40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x150f44: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F44u;
    // 0x150f48: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150F44u, 0x150F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F4Cu;
label_150f4c:
    // 0x150f4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x150f50: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150F50u;
    SET_GPR_U32(ctx, 31, 0x150F58u);
    ctx->pc = 0x150F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F50u;
    // 0x150f54: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150F50u, 0x150F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F58u;
label_150f58:
    // 0x150f58: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x150f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x150f5c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150F5Cu;
    SET_GPR_U32(ctx, 31, 0x150F64u);
    ctx->pc = 0x150F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F5Cu;
    // 0x150f60: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150F5Cu, 0x150F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F64u;
label_150f64:
    // 0x150f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150F64u;
    {
        const bool branch_taken_0x150f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f64) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150F6Cu;
label_150f6c:
    // 0x150f6c: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x150f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x150f70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150F70u;
    {
        const bool branch_taken_0x150f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f70) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150F78u;
    // 0x150f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x150f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150f7c:
    // 0x150f7c: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x150F7Cu;
    {
        const bool branch_taken_0x150f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F7Cu;
        // 0x150f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f7c) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x150F84u;
    // 0x150f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150f88: 0xa2220231  sb          $v0, 0x231($s1)
    ctx->pc = 0x150f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 2));
    // 0x150f8c: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x150f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x150f90: 0x922201a2  lbu         $v0, 0x1A2($s1)
    ctx->pc = 0x150f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x150f94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150F94u;
    {
        const bool branch_taken_0x150f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f94) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150F9Cu;
    // 0x150f9c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x150fa0: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x150fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FA4u;
    {
        const bool branch_taken_0x150fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FA4u;
        // 0x150fa8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fa4) {
            ctx->pc = 0x150FB4u;
            goto label_150fb4;
        }
    }
    ctx->pc = 0x150FACu;
    // 0x150fac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x150FACu;
    {
        const bool branch_taken_0x150fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fac) {
            ctx->pc = 0x150FDCu;
            goto label_150fdc;
        }
    }
    ctx->pc = 0x150FB4u;
label_150fb4:
    // 0x150fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x150fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150fb8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x150fbc: 0xc050f08  jal         func_143C20
    ctx->pc = 0x150FBCu;
    SET_GPR_U32(ctx, 31, 0x150FC4u);
    ctx->pc = 0x150FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FBCu;
    // 0x150fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x150FBCu, 0x150FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FC4u;
label_150fc4:
    // 0x150fc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x150fc8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FC8u;
    // 0x150fcc: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150FC8u, 0x150FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x150fd4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150FD4u;
    SET_GPR_U32(ctx, 31, 0x150FDCu);
    ctx->pc = 0x150FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FD4u;
    // 0x150fd8: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150FD4u, 0x150FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FDCu;
label_150fdc:
    // 0x150fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150fe0:
    // 0x150fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fe4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x150fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x150fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fec: 0xc075224  jal         func_1D4890
    ctx->pc = 0x150FECu;
    SET_GPR_U32(ctx, 31, 0x150FF4u);
    ctx->pc = 0x150FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FECu;
    // 0x150ff0: 0xae110200  sw          $s1, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4890u, 0x150FECu, 0x150FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FF4u;
label_150ff4:
    // 0x150ff4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x150FFCu;
    // 0x150ffc: 0xae110204  sw          $s1, 0x204($s0)
    ctx->pc = 0x150ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 17));
    // 0x151000: 0x92220232  lbu         $v0, 0x232($s1)
    ctx->pc = 0x151000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x151004: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x151004u;
    {
        const bool branch_taken_0x151004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151004u;
        // 0x151008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151004) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x15100Cu;
    // 0x15100c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x15100Cu;
    SET_GPR_U32(ctx, 31, 0x151014u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15100Cu, 0x151014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151014u;
label_151014:
    // 0x151014: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x151018: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x151018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x15101c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151020: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x151024: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15102c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15102cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_151030:
    // 0x151030: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x151034: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151038: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x151038u;
    {
        const bool branch_taken_0x151038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151038) {
            ctx->pc = 0x1510C4u;
            goto label_1510c4;
        }
    }
    ctx->pc = 0x151040u;
    // 0x151040: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x151040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151044: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x151048: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15104c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15104cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151050: 0x0  nop
    ctx->pc = 0x151050u;
    // NOP
    // 0x151054: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x151054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151058: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x151058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15105c: 0x0  nop
    ctx->pc = 0x15105cu;
    // NOP
    // 0x151060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x151060u;
    {
        const bool branch_taken_0x151060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151060u;
        // 0x151064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151060) {
            ctx->pc = 0x15106Cu;
            goto label_15106c;
        }
    }
    ctx->pc = 0x151068u;
    // 0x151068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15106c:
    // 0x15106c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15106Cu;
    {
        const bool branch_taken_0x15106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15106c) {
            ctx->pc = 0x151088u;
            goto label_151088;
        }
    }
    ctx->pc = 0x151074u;
    // 0x151074: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x151074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x151078: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x151078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15107c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151080: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151080u;
    {
        const bool branch_taken_0x151080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151080u;
        // 0x151084: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151080) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x151088u;
label_151088:
    // 0x151088: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x15108c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x151090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151094: 0x0  nop
    ctx->pc = 0x151094u;
    // NOP
    // 0x151098: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x151098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15109c: 0x0  nop
    ctx->pc = 0x15109cu;
    // NOP
    // 0x1510a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510A8u;
    // 0x1510a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1510ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510b0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510B8u;
label_1510b8:
    // 0x1510b8: 0xc08c2ec  jal         func_230BB0
    ctx->pc = 0x1510B8u;
    SET_GPR_U32(ctx, 31, 0x1510C0u);
    ctx->pc = 0x230BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BB0u, 0x1510B8u, 0x1510C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510C0u;
label_1510c0:
    // 0x1510c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1510c4:
    // 0x1510c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1510C4u;
    {
        const bool branch_taken_0x1510c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510c4) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x1510CCu;
label_1510cc:
    // 0x1510cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1510ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1510d0u;
}
