#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"

void fate_original_sif_irq_resume(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    switch(ctx->pc) {
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fb4u: goto label_1a6fb4;
        default: return;
    }
label_1a6ea4:
    // 0x1a6ea4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6ea8:
    // 0x1a6ea8: 0x8c671818  lw          $a3, 0x1818($v1)
    ctx->pc = 0x1a6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6168)));
label_1a6eac:
    // 0x1a6eac: 0x24701818  addiu       $s0, $v1, 0x1818
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
label_1a6eb0:
    // 0x1a6eb0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1a6eb4:
    // 0x1a6eb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1a6eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a6eb8:
    // 0x1a6eb8: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_1a6ebc:
    if (ctx->pc == 0x1A6EBCu) {
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EC0u;
        goto label_1a6ec0;
    }
    ctx->pc = 0x1A6EB8u;
    {
        const bool branch_taken_0x1a6eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6eb8) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6EC0u;
label_1a6ec0:
    // 0x1a6ec0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1a6ec4:
    // 0x1a6ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a6ec8:
    // 0x1a6ec8: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_1a6ecc:
    // 0x1a6ecc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6ed0:
    // 0x1a6ed0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1a6ed0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1a6ed4:
    // 0x1a6ed4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ed8:
    // 0x1a6ed8: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_1a6edc:
    // 0x1a6edc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a6edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a6ee0:
    // 0x1a6ee0: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_1a6ee4:
    if (ctx->pc == 0x1A6EE4u) {
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EE8u;
        goto label_1a6ee8;
    }
    ctx->pc = 0x1A6EE0u;
    {
        const bool branch_taken_0x1a6ee0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee0) {
            ctx->pc = 0x1A6F0Cu;
            goto label_1a6f0c;
        }
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a6eec:
    // 0x1a6eec: 0x0  nop
    ctx->pc = 0x1a6eecu;
    // NOP
label_1a6ef0:
    // 0x1a6ef0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a6ef4:
    // 0x1a6ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a6ef8:
    // 0x1a6ef8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a6efc:
    // 0x1a6efc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1a6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1a6f00:
    // 0x1a6f00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a6f04:
    // 0x1a6f04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1a6f08:
    if (ctx->pc == 0x1A6F08u) {
        ctx->pc = 0x1A6F0Cu;
        goto label_1a6f0c;
    }
    ctx->pc = 0x1A6F04u;
    {
        const bool branch_taken_0x1a6f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f04) {
            ctx->pc = 0x1A6EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6ef0;
        }
    }
    ctx->pc = 0x1A6F0Cu;
label_1a6f0c:
    // 0x1a6f0c: 0xc069304  jal         func_1A4C10
label_1a6f10:
    if (ctx->pc == 0x1A6F10u) {
        ctx->pc = 0x1A6F14u;
        goto label_1a6f14;
    }
    ctx->pc = 0x1A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F14u);
    ctx->pc = 0x1A4C10u;
    { ctx->pc = 0x1a4c10; return; }
    ctx->pc = 0x1A6F14u;
label_1a6f14:
    // 0x1a6f14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f18:
    // 0x1a6f18: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const bool branch_taken_0x1a6f18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a6f18) {
            ctx->pc = 0x1A6F68u;
            goto label_1a6f68;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f24:
    // 0x1a6f24: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1a6f28:
    // 0x1a6f28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a6f2c:
    // 0x1a6f2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6f30:
    // 0x1a6f30: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a6f34:
    // 0x1a6f34: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1a6f34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a6f38:
    // 0x1a6f38: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    {
        const bool branch_taken_0x1a6f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f38) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a6f44:
    // 0x1a6f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f48:
    // 0x1a6f48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f4c:
    // 0x1a6f4c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1a6f50:
    if (ctx->pc == 0x1A6F50u) {
        ctx->pc = 0x1A6F54u;
        goto label_1a6f54;
    }
    ctx->pc = 0x1A6F4Cu;
    {
        const bool branch_taken_0x1a6f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f4c) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f58:
    // 0x1a6f58: 0xc0f809  jalr        $a2
label_1a6f5c:
    if (ctx->pc == 0x1A6F5Cu) {
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F60u;
        goto label_1a6f60;
    }
    ctx->pc = 0x1A6F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F60u);
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F58u, 0x1A6F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F60u;
label_1a6f60:
    // 0x1a6f60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a6f64:
    if (ctx->pc == 0x1A6F64u) {
        ctx->pc = 0x1A6F68u;
        goto label_1a6f68;
    }
    ctx->pc = 0x1A6F60u;
    {
        const bool branch_taken_0x1a6f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f60) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F68u;
label_1a6f68:
    // 0x1a6f68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f6c:
    // 0x1a6f6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a6f70:
    // 0x1a6f70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a6f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6f74:
    // 0x1a6f74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6f78:
    if (ctx->pc == 0x1A6F78u) {
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F7Cu;
        goto label_1a6f7c;
    }
    ctx->pc = 0x1A6F74u;
    {
        const bool branch_taken_0x1a6f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f74) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F7Cu;
label_1a6f7c:
    // 0x1a6f7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6f80:
    // 0x1a6f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f84:
    // 0x1a6f84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f88:
    // 0x1a6f88: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1a6f8c:
    if (ctx->pc == 0x1A6F8Cu) {
        ctx->pc = 0x1A6F90u;
        goto label_1a6f90;
    }
    ctx->pc = 0x1A6F88u;
    {
        const bool branch_taken_0x1a6f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f88) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F90u;
label_1a6f90:
    // 0x1a6f90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f94:
    // 0x1a6f94: 0xc0f809  jalr        $a2
label_1a6f98:
    if (ctx->pc == 0x1A6F98u) {
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F9Cu;
        goto label_1a6f9c;
    }
    ctx->pc = 0x1A6F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F9Cu);
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F94u, 0x1A6F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F9Cu;
label_1a6f9c:
    // 0x1a6f9c: 0xf  sync
    ctx->pc = 0x1a6f9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6fa0:
    // 0x1a6fa0: 0x42000038  ei
    ctx->pc = 0x1a6fa0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a6fa4:
    // 0x1a6fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fa8:
    // 0x1a6fa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6fac:
    // 0x1a6fac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1a6facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6fb0:
    // 0x1a6fb0: 0x3e00008  jr          $ra
label_1a6fb4:
    if (ctx->pc == 0x1A6FB4u) {
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FB8u;
        return;
    }
    ctx->pc = 0x1A6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FB8u;
}
