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

// Function: entry_00150ea8
// Address: 0x150ea8 - 0x150f6c
void entry_00150ea8_0x150ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ea8_0x150ea8");
#endif

    switch (ctx->pc) {
        case 0x150f34u: goto label_150f34;
        case 0x150f40u: goto label_150f40;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f58u: goto label_150f58;
        case 0x150f64u: goto label_150f64;
        default: break;
    }

    ctx->pc = 0x150ea8u;

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
            return;
        }
    }
    ctx->pc = 0x150EB4u;
    // 0x150eb4: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x150EB4u;
    {
        const bool branch_taken_0x150eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150eb4) {
            ctx->pc = 0x150F7Cu;
            return;
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
            return;
        }
    }
    ctx->pc = 0x150F6Cu;
}
