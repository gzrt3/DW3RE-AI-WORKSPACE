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

// Function: FUN_00185a90
// Address: 0x185a90 - 0x186908
void FUN_00185a90_0x185a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185a90_0x185a90");
#endif

    switch (ctx->pc) {
        case 0x185b98u: goto label_185b98;
        case 0x185bc8u: goto label_185bc8;
        case 0x185c44u: goto label_185c44;
        case 0x185d80u: goto label_185d80;
        case 0x185e08u: goto label_185e08;
        case 0x185e98u: goto label_185e98;
        case 0x185f44u: goto label_185f44;
        case 0x185facu: goto label_185fac;
        case 0x186034u: goto label_186034;
        case 0x1860c0u: goto label_1860c0;
        case 0x186138u: goto label_186138;
        case 0x1861b0u: goto label_1861b0;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861f8u: goto label_1861f8;
        case 0x1862dcu: goto label_1862dc;
        case 0x186364u: goto label_186364;
        case 0x18641cu: goto label_18641c;
        case 0x18643cu: goto label_18643c;
        case 0x186580u: goto label_186580;
        case 0x186608u: goto label_186608;
        case 0x186770u: goto label_186770;
        case 0x1867f8u: goto label_1867f8;
        case 0x18688cu: goto label_18688c;
        default: break;
    }

    ctx->pc = 0x185a90u;

    // 0x185a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x185a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x185a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185aa0: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x185aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x185aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185aac: 0x10650027  beq         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x185AACu;
    {
        const bool branch_taken_0x185aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AACu;
        // 0x185ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aac) {
            ctx->pc = 0x185B4Cu;
            goto label_185b4c;
        }
    }
    ctx->pc = 0x185AB4u;
    // 0x185ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x185ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185ab8: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x185AB8u;
    {
        const bool branch_taken_0x185ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x185ab8) {
            ctx->pc = 0x185AFCu;
            goto label_185afc;
        }
    }
    ctx->pc = 0x185AC0u;
    // 0x185ac0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185AC8u;
    // 0x185ac8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x185AC8u;
    {
        const bool branch_taken_0x185ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x8623003c  lh          $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac8) {
            ctx->pc = 0x185B78u;
            goto label_185b78;
        }
    }
    ctx->pc = 0x185AD0u;
label_185ad0:
    // 0x185ad0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ad4: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
    // 0x185ad8: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x185adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ae0: 0x0  nop
    ctx->pc = 0x185ae0u;
    // NOP
    // 0x185ae4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ae8: 0x0  nop
    ctx->pc = 0x185ae8u;
    // NOP
    // 0x185aec: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x185AECu;
    {
        const bool branch_taken_0x185aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185aec) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185AF4u;
    // 0x185af4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x185AF4u;
    {
        const bool branch_taken_0x185af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF4u;
        // 0x185af8: 0xa224023c  sb          $a0, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af4) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185AFCu;
label_185afc:
    // 0x185afc: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b00: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
    // 0x185b04: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x185b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b0c: 0x0  nop
    ctx->pc = 0x185b0cu;
    // NOP
    // 0x185b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b14: 0x0  nop
    ctx->pc = 0x185b14u;
    // NOP
    // 0x185b18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x185B18u;
    {
        const bool branch_taken_0x185b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B18u;
        // 0x185b1c: 0x3c034974  lui         $v1, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b18) {
            ctx->pc = 0x185B28u;
            goto label_185b28;
        }
    }
    ctx->pc = 0x185B20u;
    // 0x185b20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0xa220023c  sb          $zero, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B28u;
label_185b28:
    // 0x185b28: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x185b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b30: 0x0  nop
    ctx->pc = 0x185b30u;
    // NOP
    // 0x185b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b38: 0x0  nop
    ctx->pc = 0x185b38u;
    // NOP
    // 0x185b3c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B44u;
    // 0x185b44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x185B44u;
    {
        const bool branch_taken_0x185b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B44u;
        // 0x185b48: 0xa225023c  sb          $a1, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b44) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B4Cu;
label_185b4c:
    // 0x185b4c: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b50: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x185b54: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x185b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b5c: 0x0  nop
    ctx->pc = 0x185b5cu;
    // NOP
    // 0x185b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b64: 0x0  nop
    ctx->pc = 0x185b64u;
    // NOP
    // 0x185b68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B70u;
    // 0x185b70: 0xa223023c  sb          $v1, 0x23C($s1)
    ctx->pc = 0x185b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 3));
label_185b74:
    // 0x185b74: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_185b78:
    // 0x185b78: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x185b7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185B7Cu;
    {
        const bool branch_taken_0x185b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B7Cu;
        // 0x185b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b7c) {
            ctx->pc = 0x185B88u;
            goto label_185b88;
        }
    }
    ctx->pc = 0x185B84u;
    // 0x185b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185b88:
    // 0x185b88: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x185B88u;
    {
        const bool branch_taken_0x185b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B88u;
        // 0x185b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b88) {
            ctx->pc = 0x185BD0u;
            goto label_185bd0;
        }
    }
    ctx->pc = 0x185B90u;
    // 0x185b90: 0xc062210  jal         func_188840
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B90u;
    // 0x185b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188840u, 0x185B90u, 0x185B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B98u;
label_185b98:
    // 0x185b98: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x185b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185b9c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x185ba0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BC0u;
            goto label_185bc0;
        }
    }
    ctx->pc = 0x185BA8u;
    // 0x185ba8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bb0: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x185bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x185bb4: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
    // 0x185bb8: 0x10000352  b           . + 4 + (0x352 << 2)
    ctx->pc = 0x185BB8u;
    {
        const bool branch_taken_0x185bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bb8) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185BC0u;
label_185bc0:
    // 0x185bc0: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x185BC0u;
    SET_GPR_U32(ctx, 31, 0x185BC8u);
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x185BC0u, 0x185BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BC8u;
label_185bc8:
    // 0x185bc8: 0x1000034f  b           . + 4 + (0x34F << 2)
    ctx->pc = 0x185BC8u;
    {
        const bool branch_taken_0x185bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC8u;
        // 0x185bcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bc8) {
            ctx->pc = 0x186908u;
            return;
        }
    }
    ctx->pc = 0x185BD0u;
label_185bd0:
    // 0x185bd0: 0x9225023d  lbu         $a1, 0x23D($s1)
    ctx->pc = 0x185bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185bd4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x185bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x185bd8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x185BD8u;
    {
        const bool branch_taken_0x185bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bd8) {
            ctx->pc = 0x185C14u;
            goto label_185c14;
        }
    }
    ctx->pc = 0x185BE0u;
    // 0x185be0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185be0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185be4: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185be4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x185be8: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x185bec: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x185bf0: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x185bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x185bf4: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x185bf8: 0x1c600342  bgtz        $v1, . + 4 + (0x342 << 2)
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185C00u;
    // 0x185c00: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185c04: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x185c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x185c08: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    // 0x185c0c: 0x1000033d  b           . + 4 + (0x33D << 2)
    ctx->pc = 0x185C0Cu;
    {
        const bool branch_taken_0x185c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c0c) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185C14u;
label_185c14:
    // 0x185c14: 0x9224023c  lbu         $a0, 0x23C($s1)
    ctx->pc = 0x185c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x185c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185c1c: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x185C1Cu;
    {
        const bool branch_taken_0x185c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C1Cu;
        // 0x185c20: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c1c) {
            ctx->pc = 0x185E88u;
            goto label_185e88;
        }
    }
    ctx->pc = 0x185C24u;
    // 0x185c24: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x185c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x185c28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x185C28u;
    {
        const bool branch_taken_0x185c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C28u;
        // 0x185c2c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c28) {
            ctx->pc = 0x185CA0u;
            goto label_185ca0;
        }
    }
    ctx->pc = 0x185C30u;
    // 0x185c30: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x185c34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x185c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x185c38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x185c3c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x185C3Cu;
    SET_GPR_U32(ctx, 31, 0x185C44u);
    ctx->pc = 0x185C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C3Cu;
    // 0x185c40: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x185C3Cu, 0x185C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C44u;
label_185c44:
    // 0x185c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185c48: 0x92240230  lbu         $a0, 0x230($s1)
    ctx->pc = 0x185c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x185c4c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x185c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x185c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185c54: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x185c58: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x185c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185c68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x185c70: 0x24422b15  addiu       $v0, $v0, 0x2B15
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11029));
    // 0x185c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x185c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185c7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x185c7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c80: 0x0  nop
    ctx->pc = 0x185c80u;
    // NOP
    // 0x185c84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185c84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x185c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185c90: 0x0  nop
    ctx->pc = 0x185c90u;
    // NOP
    // 0x185c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c98: 0xa6220224  sh          $v0, 0x224($s1)
    ctx->pc = 0x185c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
    // 0x185c9c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_185ca0:
    // 0x185ca0: 0x8224023d  lb          $a0, 0x23D($s1)
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185ca4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x185ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ca8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185cac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185cb8: 0x308200cb  andi        $v0, $a0, 0xCB
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)203);
    // 0x185cbc: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x185cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    // 0x185cc0: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cc4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x185cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ccc: 0x0  nop
    ctx->pc = 0x185cccu;
    // NOP
    // 0x185cd0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185CD0u;
    {
        const bool branch_taken_0x185cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CD0u;
        // 0x185cd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cd0) {
            ctx->pc = 0x185CECu;
            goto label_185cec;
        }
    }
    ctx->pc = 0x185CD8u;
    // 0x185cd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185cdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ce4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185CECu;
label_185cec:
    // 0x185cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
    // 0x185cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185cfc: 0x0  nop
    ctx->pc = 0x185cfcu;
    // NOP
    // 0x185d00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185D00u;
    {
        const bool branch_taken_0x185d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d00) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D08u;
    // 0x185d08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185d0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d14: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185D14u;
    {
        const bool branch_taken_0x185d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D14u;
        // 0x185d18: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d14) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D1Cu;
label_185d1c:
    // 0x185d1c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x185d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x185d20: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x185d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x185d24: 0x4a000138  vcallms     0x20
    ctx->pc = 0x185d24u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x185d28: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x185d28u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185d2c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x185d2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d30: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x185d30u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185d34: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x185d34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x185d38: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x185d3c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x185d40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x185d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x185d44: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x185d48: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x185d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185d50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x185d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x185d54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x185d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x185d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x185d5c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x185d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d60: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x185d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x185d64: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x185d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x185d68: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x185d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x185d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x185d74: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x185d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d78: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x185D78u;
    SET_GPR_U32(ctx, 31, 0x185D80u);
    ctx->pc = 0x185D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D78u;
    // 0x185d7c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185D78u, 0x185D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D80u;
label_185d80:
    // 0x185d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185D80u;
    {
        const bool branch_taken_0x185d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d80) {
            ctx->pc = 0x185D90u;
            goto label_185d90;
        }
    }
    ctx->pc = 0x185D88u;
    // 0x185d88: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185D88u;
    {
        const bool branch_taken_0x185d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D88u;
        // 0x185d8c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d88) {
            ctx->pc = 0x185E0Cu;
            goto label_185e0c;
        }
    }
    ctx->pc = 0x185D90u;
label_185d90:
    // 0x185d90: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185d94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185d98: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185da4: 0x0  nop
    ctx->pc = 0x185da4u;
    // NOP
    // 0x185da8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185da8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x185dac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185db0: 0x0  nop
    ctx->pc = 0x185db0u;
    // NOP
    // 0x185db4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185DB4u;
    {
        const bool branch_taken_0x185db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DB4u;
        // 0x185db8: 0xe7ac007c  swc1        $f12, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185db4) {
            ctx->pc = 0x185DD0u;
            goto label_185dd0;
        }
    }
    ctx->pc = 0x185DBCu;
    // 0x185dbc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185dc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185DC8u;
    {
        const bool branch_taken_0x185dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC8u;
        // 0x185dcc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DD0u;
label_185dd0:
    // 0x185dd0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x185dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ddc: 0x0  nop
    ctx->pc = 0x185ddcu;
    // NOP
    // 0x185de0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185de4: 0x0  nop
    ctx->pc = 0x185de4u;
    // NOP
    // 0x185de8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x185DE8u;
    {
        const bool branch_taken_0x185de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE8u;
        // 0x185dec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DF0u;
    // 0x185df0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185df8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185DF8u;
    {
        const bool branch_taken_0x185df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF8u;
        // 0x185dfc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185E00u;
label_185e00:
    // 0x185e00: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x185E00u;
    SET_GPR_U32(ctx, 31, 0x185E08u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x185E00u, 0x185E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E08u;
label_185e08:
    // 0x185e08: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x185e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_185e0c:
    // 0x185e0c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e10: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x185e14: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185e1c: 0x0  nop
    ctx->pc = 0x185e1cu;
    // NOP
    // 0x185e20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185e24: 0x0  nop
    ctx->pc = 0x185e24u;
    // NOP
    // 0x185e28: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185e28) {
            ctx->pc = 0x185E44u;
            goto label_185e44;
        }
    }
    ctx->pc = 0x185E30u;
    // 0x185e30: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x185e34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185e38: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x185e3c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E7Cu;
            goto label_185e7c;
        }
    }
    ctx->pc = 0x185E44u;
label_185e44:
    // 0x185e44: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x185e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x185e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185e50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185e54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185e58: 0x0  nop
    ctx->pc = 0x185e58u;
    // NOP
    // 0x185e5c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x185e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x185e60: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x185e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x185e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185e6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185e74: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x185E74u;
    {
        const bool branch_taken_0x185e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e74) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185E7Cu;
label_185e7c:
    // 0x185e7c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e80: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x185E80u;
    {
        const bool branch_taken_0x185e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e80) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185E88u;
label_185e88:
    // 0x185e88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x185E88u;
    {
        const bool branch_taken_0x185e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e88) {
            ctx->pc = 0x185EB0u;
            goto label_185eb0;
        }
    }
    ctx->pc = 0x185E90u;
    // 0x185e90: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E90u;
    // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x185E90u, 0x185E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0x1440029a  bnez        $v0, . + 4 + (0x29A << 2)
    ctx->pc = 0x185E98u;
    {
        const bool branch_taken_0x185e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e98) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185EA0u;
    // 0x185ea0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185ea4: 0x306300cb  andi        $v1, $v1, 0xCB
    ctx->pc = 0x185ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)203);
    // 0x185ea8: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x185EB0u;
label_185eb0:
    // 0x185eb0: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x185eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x185eb4: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x185eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x185eb8: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x18611Cu;
            goto label_18611c;
        }
    }
    ctx->pc = 0x185EC0u;
    // 0x185ec0: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x185ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x185ec4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185ec8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x185ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x185ecc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ed0: 0x306300eb  andi        $v1, $v1, 0xEB
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)235);
    // 0x185ed4: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    // 0x185ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185edc: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x185edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185ee0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x185ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ee4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x185ee4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185ee8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
    // 0x185ef0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185EF0u;
    {
        const bool branch_taken_0x185ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ef0) {
            ctx->pc = 0x185F0Cu;
            goto label_185f0c;
        }
    }
    ctx->pc = 0x185EF8u;
    // 0x185ef8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185F04u;
    {
        const bool branch_taken_0x185f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f04) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f14: 0x0  nop
    ctx->pc = 0x185f14u;
    // NOP
    // 0x185f18: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f1c: 0x0  nop
    ctx->pc = 0x185f1cu;
    // NOP
    // 0x185f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185F20u;
    {
        const bool branch_taken_0x185f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f20) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F28u;
    // 0x185f28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x185F3Cu;
    SET_GPR_U32(ctx, 31, 0x185F44u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x185F3Cu, 0x185F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x185f48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x185f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x185f4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x185f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f54: 0x0  nop
    ctx->pc = 0x185f54u;
    // NOP
    // 0x185f58: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
    // 0x185f60: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f60) {
            ctx->pc = 0x1860B8u;
            goto label_1860b8;
        }
    }
    ctx->pc = 0x185F68u;
    // 0x185f68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x185f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185f70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x185f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x185f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f74) {
            ctx->pc = 0x185F84u;
            goto label_185f84;
        }
    }
    ctx->pc = 0x185F7Cu;
    // 0x185f7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185F7Cu;
    {
        const bool branch_taken_0x185f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f7c) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F84u;
label_185f84:
    // 0x185f84: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x185f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x185f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F90u;
    // 0x185f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185f94:
    // 0x185f94: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f94) {
            ctx->pc = 0x1860B4u;
            goto label_1860b4;
        }
    }
    ctx->pc = 0x185F9Cu;
    // 0x185f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185fa0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x185fa4: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x185FA4u;
    SET_GPR_U32(ctx, 31, 0x185FACu);
    ctx->pc = 0x185FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA4u;
    // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185FA4u, 0x185FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fac) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FB4u;
    // 0x185fb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185FB4u;
    {
        const bool branch_taken_0x185fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fb4) {
            ctx->pc = 0x186038u;
            goto label_186038;
        }
    }
    ctx->pc = 0x185FBCu;
label_185fbc:
    // 0x185fbc: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185fc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185fc4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x185fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185fd0: 0x0  nop
    ctx->pc = 0x185fd0u;
    // NOP
    // 0x185fd4: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185fd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x185fd8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185fdc: 0x0  nop
    ctx->pc = 0x185fdcu;
    // NOP
    // 0x185fe0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FFCu;
            goto label_185ffc;
        }
    }
    ctx->pc = 0x185FE8u;
    // 0x185fe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185fec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ff4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185FF4u;
    {
        const bool branch_taken_0x185ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff4) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FFCu;
label_185ffc:
    // 0x185ffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x186000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186008: 0x0  nop
    ctx->pc = 0x186008u;
    // NOP
    // 0x18600c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18600cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186010: 0x0  nop
    ctx->pc = 0x186010u;
    // NOP
    // 0x186014: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x186014u;
    {
        const bool branch_taken_0x186014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186014) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18601Cu;
    // 0x18601c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186024: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186024u;
    {
        const bool branch_taken_0x186024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186024) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18602Cu;
label_18602c:
    // 0x18602c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x18602Cu;
    SET_GPR_U32(ctx, 31, 0x186034u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x18602Cu, 0x186034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186034u;
label_186034:
    // 0x186034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_186038:
    // 0x186038: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x186038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18603c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186040: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186048: 0x0  nop
    ctx->pc = 0x186048u;
    // NOP
    // 0x18604c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18604cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186050: 0x0  nop
    ctx->pc = 0x186050u;
    // NOP
    // 0x186054: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186054u;
    {
        const bool branch_taken_0x186054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186054) {
            ctx->pc = 0x186070u;
            goto label_186070;
        }
    }
    ctx->pc = 0x18605Cu;
    // 0x18605c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186064: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x186068: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186068) {
            ctx->pc = 0x1860A8u;
            goto label_1860a8;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186074: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x186074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18607c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18607cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186084: 0x0  nop
    ctx->pc = 0x186084u;
    // NOP
    // 0x186088: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x186088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x18608c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x18608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186090: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x186090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18609c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18609cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1860a0: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1860a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1860ac: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860ACu;
        // 0x1860b0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1860b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1860b8:
    // 0x1860b8: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x1860B8u;
    SET_GPR_U32(ctx, 31, 0x1860C0u);
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x1860B8u, 0x1860C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0x14400210  bnez        $v0, . + 4 + (0x210 << 2)
    ctx->pc = 0x1860C0u;
    {
        const bool branch_taken_0x1860c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860c0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1860C8u;
    // 0x1860c8: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1860c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1860cc: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1860d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x1860DCu;
            goto label_1860dc;
        }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1860dc:
    // 0x1860dc: 0x14600209  bnez        $v1, . + 4 + (0x209 << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1860e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1860e8: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1860e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1860ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1860f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1860f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1860f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1860f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1860f8: 0x0  nop
    ctx->pc = 0x1860f8u;
    // NOP
    // 0x1860fc: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1860fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186100: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x186100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186104: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18610c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18610cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186114: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x186114u;
    {
        const bool branch_taken_0x186114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186114u;
        // 0x186118: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186114) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x18611Cu;
label_18611c:
    // 0x18611c: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x18611Cu;
    {
        const bool branch_taken_0x18611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18611c) {
            ctx->pc = 0x1863E4u;
            goto label_1863e4;
        }
    }
    ctx->pc = 0x186124u;
    // 0x186124: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186124) {
            ctx->pc = 0x186138u;
            goto label_186138;
        }
    }
    ctx->pc = 0x18612Cu;
    // 0x18612c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186130: 0xc061cd8  jal         func_187360
    ctx->pc = 0x186130u;
    SET_GPR_U32(ctx, 31, 0x186138u);
    ctx->pc = 0x186134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186130u;
    // 0x186134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187360u, 0x186130u, 0x186138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186138u;
label_186138:
    // 0x186138: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x186138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18613c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186140: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x186140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18614c: 0x0  nop
    ctx->pc = 0x18614cu;
    // NOP
    // 0x186150: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x186150u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x186154: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186158: 0x0  nop
    ctx->pc = 0x186158u;
    // NOP
    // 0x18615c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186164u;
    // 0x186164: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186168: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186170: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186170u;
    {
        const bool branch_taken_0x186170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186170u;
        // 0x186174: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186170) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186178u;
label_186178:
    // 0x186178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18617c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186180: 0x0  nop
    ctx->pc = 0x186180u;
    // NOP
    // 0x186184: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186188: 0x0  nop
    ctx->pc = 0x186188u;
    // NOP
    // 0x18618c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18618Cu;
    {
        const bool branch_taken_0x18618c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18618c) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186194u;
    // 0x186194: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186198: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18619c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1861a0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1861A0u;
    {
        const bool branch_taken_0x1861a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861A0u;
        // 0x1861a4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a0) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x1861A8u;
label_1861a8:
    // 0x1861a8: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1861A8u;
    SET_GPR_U32(ctx, 31, 0x1861B0u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1861A8u, 0x1861B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861B0u;
label_1861b0:
    // 0x1861b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1861b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1861b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1861b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1861bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1861bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1861c0: 0x0  nop
    ctx->pc = 0x1861c0u;
    // NOP
    // 0x1861c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1861c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1861c8: 0x0  nop
    ctx->pc = 0x1861c8u;
    // NOP
    // 0x1861cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x1861E4u;
            goto label_1861e4;
        }
    }
    ctx->pc = 0x1861D4u;
    // 0x1861d4: 0xc0623cc  jal         func_188F30
    ctx->pc = 0x1861D4u;
    SET_GPR_U32(ctx, 31, 0x1861DCu);
    ctx->pc = 0x1861D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861D4u;
    // 0x1861d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F30u, 0x1861D4u, 0x1861DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861DCu;
label_1861dc:
    // 0x1861dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1861DCu;
    {
        const bool branch_taken_0x1861dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1861dc) {
            ctx->pc = 0x186200u;
            goto label_186200;
        }
    }
    ctx->pc = 0x1861E4u;
label_1861e4:
    // 0x1861e4: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1861e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861ec: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x1861ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
    // 0x1861f0: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861F0u;
    // 0x1861f4: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x1861F0u, 0x1861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1861F8u;
    {
        const bool branch_taken_0x1861f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861f8) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186204: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x186208: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x186208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18620c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18620cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186210: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18621c: 0x0  nop
    ctx->pc = 0x18621cu;
    // NOP
    // 0x186220: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x186220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x186224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186228: 0x0  nop
    ctx->pc = 0x186228u;
    // NOP
    // 0x18622c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18622Cu;
    {
        const bool branch_taken_0x18622c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18622Cu;
        // 0x186230: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18622c) {
            ctx->pc = 0x186248u;
            goto label_186248;
        }
    }
    ctx->pc = 0x186234u;
    // 0x186234: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18623c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186240: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186240u;
    {
        const bool branch_taken_0x186240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186240u;
        // 0x186244: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186240) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186248u;
label_186248:
    // 0x186248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186250: 0x0  nop
    ctx->pc = 0x186250u;
    // NOP
    // 0x186254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186258: 0x0  nop
    ctx->pc = 0x186258u;
    // NOP
    // 0x18625c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18625Cu;
    {
        const bool branch_taken_0x18625c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18625c) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186264u;
    // 0x186264: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18626c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18626cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186270: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186270u;
    {
        const bool branch_taken_0x186270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186270) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186278u;
label_186278:
    // 0x186278: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x186278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18627c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18627cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186280: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186280u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186284: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186284u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x186288: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x186288u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18628c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18628cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186290: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186290u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186294: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x186298: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x18629c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1862a0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1862a4: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1862a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1862a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1862acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1862b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1862b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1862b4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1862b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1862b8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1862b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862bc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1862bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1862c0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1862c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1862c4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1862c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1862c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1862cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1862ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1862d0: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x1862d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1862d4: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x1862D4u;
    SET_GPR_U32(ctx, 31, 0x1862DCu);
    ctx->pc = 0x1862D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862D4u;
    // 0x1862d8: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1862D4u, 0x1862DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862DCu;
label_1862dc:
    // 0x1862dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1862DCu;
    {
        const bool branch_taken_0x1862dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862dc) {
            ctx->pc = 0x1862ECu;
            goto label_1862ec;
        }
    }
    ctx->pc = 0x1862E4u;
    // 0x1862e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1862E4u;
    {
        const bool branch_taken_0x1862e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862E4u;
        // 0x1862e8: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862e4) {
            ctx->pc = 0x186368u;
            goto label_186368;
        }
    }
    ctx->pc = 0x1862ECu;
label_1862ec:
    // 0x1862ec: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1862ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1862f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1862f4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1862f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1862f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1862fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1862fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186300: 0x0  nop
    ctx->pc = 0x186300u;
    // NOP
    // 0x186304: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186304u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x186308: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18630c: 0x0  nop
    ctx->pc = 0x18630cu;
    // NOP
    // 0x186310: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186310u;
    {
        const bool branch_taken_0x186310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0xe7ac0088  swc1        $f12, 0x88($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186310) {
            ctx->pc = 0x18632Cu;
            goto label_18632c;
        }
    }
    ctx->pc = 0x186318u;
    // 0x186318: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18631c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186324: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186324u;
    {
        const bool branch_taken_0x186324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186324u;
        // 0x186328: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186324) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18632Cu;
label_18632c:
    // 0x18632c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x186330: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186338: 0x0  nop
    ctx->pc = 0x186338u;
    // NOP
    // 0x18633c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18633cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186340: 0x0  nop
    ctx->pc = 0x186340u;
    // NOP
    // 0x186344: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x186344u;
    {
        const bool branch_taken_0x186344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186344u;
        // 0x186348: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186344) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18634Cu;
    // 0x18634c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186354: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186354u;
    {
        const bool branch_taken_0x186354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186354u;
        // 0x186358: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186354) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18635Cu;
label_18635c:
    // 0x18635c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x18635Cu;
    SET_GPR_U32(ctx, 31, 0x186364u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x18635Cu, 0x186364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x186364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_186368:
    // 0x186368: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x186368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18636c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186370: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186378: 0x0  nop
    ctx->pc = 0x186378u;
    // NOP
    // 0x18637c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18637cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186380: 0x0  nop
    ctx->pc = 0x186380u;
    // NOP
    // 0x186384: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186384u;
    {
        const bool branch_taken_0x186384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186384) {
            ctx->pc = 0x1863A0u;
            goto label_1863a0;
        }
    }
    ctx->pc = 0x18638Cu;
    // 0x18638c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186390: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186394: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x186398: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x186398u;
    {
        const bool branch_taken_0x186398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186398) {
            ctx->pc = 0x1863D8u;
            goto label_1863d8;
        }
    }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1863a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1863a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1863a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1863ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1863b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1863b4: 0x0  nop
    ctx->pc = 0x1863b4u;
    // NOP
    // 0x1863b8: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1863b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x1863bc: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x1863bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863c0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1863c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1863c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1863c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1863cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1863d0: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x1863D0u;
    {
        const bool branch_taken_0x1863d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D0u;
        // 0x1863d4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1863D8u;
label_1863d8:
    // 0x1863d8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1863d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1863dc: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x1863DCu;
    {
        const bool branch_taken_0x1863dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863DCu;
        // 0x1863e0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863dc) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1863E4u;
label_1863e4:
    // 0x1863e4: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1863e8: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1863E8u;
    {
        const bool branch_taken_0x1863e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863e8) {
            ctx->pc = 0x186694u;
            goto label_186694;
        }
    }
    ctx->pc = 0x1863F0u;
    // 0x1863f0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x1863f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863f4: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
    // 0x1863f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1863f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1863fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1863fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186400: 0x0  nop
    ctx->pc = 0x186400u;
    // NOP
    // 0x186404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186408: 0x0  nop
    ctx->pc = 0x186408u;
    // NOP
    // 0x18640c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18640Cu;
    {
        const bool branch_taken_0x18640c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18640Cu;
        // 0x186410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18640c) {
            ctx->pc = 0x18641Cu;
            goto label_18641c;
        }
    }
    ctx->pc = 0x186414u;
    // 0x186414: 0xc061cd8  jal         func_187360
    ctx->pc = 0x186414u;
    SET_GPR_U32(ctx, 31, 0x18641Cu);
    ctx->pc = 0x186418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186414u;
    // 0x186418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187360u, 0x186414u, 0x18641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x186420: 0x30631c07  andi        $v1, $v1, 0x1C07
    ctx->pc = 0x186420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7175);
    // 0x186424: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x186424u;
    {
        const bool branch_taken_0x186424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186424) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x18642Cu;
    // 0x18642c: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x18642cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x186430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x186430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x186434: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x186434u;
    SET_GPR_U32(ctx, 31, 0x18643Cu);
    ctx->pc = 0x186438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186434u;
    // 0x186438: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x186434u, 0x18643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18643Cu;
label_18643c:
    // 0x18643c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18643cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186440: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x186444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186448: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x186448u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x18644c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18644cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186450: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x186450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x186454: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x186458: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x18645c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18645cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x186460: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186464: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186468: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18646c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186470: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x186470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186474: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x186474u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186478: 0x0  nop
    ctx->pc = 0x186478u;
    // NOP
    // 0x18647c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18647cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x186480: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186484: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x186488: 0x0  nop
    ctx->pc = 0x186488u;
    // NOP
    // 0x18648c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186490: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x186490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_186494:
    // 0x186494: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x186494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x186498: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x186498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18649c: 0x14600119  bnez        $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x18649Cu;
    {
        const bool branch_taken_0x18649c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18649c) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1864A4u;
    // 0x1864a4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1864a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1864a8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1864ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1864acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1864b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1864b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864c0: 0x0  nop
    ctx->pc = 0x1864c0u;
    // NOP
    // 0x1864c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1864c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1864c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864cc: 0x0  nop
    ctx->pc = 0x1864ccu;
    // NOP
    // 0x1864d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1864D0u;
    {
        const bool branch_taken_0x1864d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864d0) {
            ctx->pc = 0x1864ECu;
            goto label_1864ec;
        }
    }
    ctx->pc = 0x1864D8u;
    // 0x1864d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1864dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864E4u;
        // 0x1864e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x1864ECu;
label_1864ec:
    // 0x1864ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864f4: 0x0  nop
    ctx->pc = 0x1864f4u;
    // NOP
    // 0x1864f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864fc: 0x0  nop
    ctx->pc = 0x1864fcu;
    // NOP
    // 0x186500: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x186500u;
    {
        const bool branch_taken_0x186500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186500) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x186508u;
    // 0x186508: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18650c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186514: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186514u;
    {
        const bool branch_taken_0x186514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186514u;
        // 0x186518: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186514) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x18651Cu;
label_18651c:
    // 0x18651c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18651cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x186520: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186524: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186524u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186528: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186528u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18652c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18652cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186530: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186530u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186534: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186534u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186538: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x18653c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x186540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186544: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x186548: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18654c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186550: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x186554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186558: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x186558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18655c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186560: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x186564: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x186564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x186568: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18656c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18656cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186570: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x186574: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186578: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x186578u;
    SET_GPR_U32(ctx, 31, 0x186580u);
    ctx->pc = 0x18657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186578u;
    // 0x18657c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186578u, 0x186580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186580u;
label_186580:
    // 0x186580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186580u;
    {
        const bool branch_taken_0x186580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186580) {
            ctx->pc = 0x186590u;
            goto label_186590;
        }
    }
    ctx->pc = 0x186588u;
    // 0x186588: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x186588u;
    {
        const bool branch_taken_0x186588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186588u;
        // 0x18658c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186588) {
            ctx->pc = 0x18660Cu;
            goto label_18660c;
        }
    }
    ctx->pc = 0x186590u;
label_186590:
    // 0x186590: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186594: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186598: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x186598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18659c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865a4: 0x0  nop
    ctx->pc = 0x1865a4u;
    // NOP
    // 0x1865a8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1865a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1865ac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865b0: 0x0  nop
    ctx->pc = 0x1865b0u;
    // NOP
    // 0x1865b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1865B4u;
    {
        const bool branch_taken_0x1865b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865B4u;
        // 0x1865b8: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865b4) {
            ctx->pc = 0x1865D0u;
            goto label_1865d0;
        }
    }
    ctx->pc = 0x1865BCu;
    // 0x1865bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1865c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1865C8u;
    {
        const bool branch_taken_0x1865c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865C8u;
        // 0x1865cc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865c8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865D0u;
label_1865d0:
    // 0x1865d0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1865d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865dc: 0x0  nop
    ctx->pc = 0x1865dcu;
    // NOP
    // 0x1865e0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865e4: 0x0  nop
    ctx->pc = 0x1865e4u;
    // NOP
    // 0x1865e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1865E8u;
    {
        const bool branch_taken_0x1865e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865E8u;
        // 0x1865ec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865e8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865F0u;
    // 0x1865f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1865F8u;
    {
        const bool branch_taken_0x1865f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865F8u;
        // 0x1865fc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865f8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x186600u;
label_186600:
    // 0x186600: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x186600u;
    SET_GPR_U32(ctx, 31, 0x186608u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x186600u, 0x186608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186608u;
label_186608:
    // 0x186608: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x186608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_18660c:
    // 0x18660c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x18660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186610: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186614: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18661c: 0x0  nop
    ctx->pc = 0x18661cu;
    // NOP
    // 0x186620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186624: 0x0  nop
    ctx->pc = 0x186624u;
    // NOP
    // 0x186628: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186628u;
    {
        const bool branch_taken_0x186628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186628) {
            ctx->pc = 0x186644u;
            goto label_186644;
        }
    }
    ctx->pc = 0x186630u;
    // 0x186630: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186634: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186638: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18663c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18663c) {
            ctx->pc = 0x18667Cu;
            goto label_18667c;
        }
    }
    ctx->pc = 0x186644u;
label_186644:
    // 0x186644: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186648: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x186648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18664c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18664cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x186650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186658: 0x0  nop
    ctx->pc = 0x186658u;
    // NOP
    // 0x18665c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18665cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186660: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186664: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x186664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186668: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18666c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18666cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186670: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186674u;
    {
        const bool branch_taken_0x186674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186674u;
        // 0x186678: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186674) {
            ctx->pc = 0x186684u;
            goto label_186684;
        }
    }
    ctx->pc = 0x18667Cu;
label_18667c:
    // 0x18667c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18667cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x186680: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186684:
    // 0x186684: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x186688: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
    // 0x18668c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x18668Cu;
    {
        const bool branch_taken_0x18668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18668Cu;
        // 0x186690: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18668c) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x186694u;
label_186694:
    // 0x186694: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186698: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x18669c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1866a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1866a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1866a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866b0: 0x0  nop
    ctx->pc = 0x1866b0u;
    // NOP
    // 0x1866b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1866b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1866b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1866bc: 0x0  nop
    ctx->pc = 0x1866bcu;
    // NOP
    // 0x1866c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1866C0u;
    {
        const bool branch_taken_0x1866c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1866C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C0u;
        // 0x1866c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c0) {
            ctx->pc = 0x1866DCu;
            goto label_1866dc;
        }
    }
    ctx->pc = 0x1866C8u;
    // 0x1866c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1866cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866D4u;
        // 0x1866d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866DCu;
label_1866dc:
    // 0x1866dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866e4: 0x0  nop
    ctx->pc = 0x1866e4u;
    // NOP
    // 0x1866e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1866ec: 0x0  nop
    ctx->pc = 0x1866ecu;
    // NOP
    // 0x1866f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866F8u;
    // 0x1866f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1866fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186704: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186704u;
    {
        const bool branch_taken_0x186704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186704u;
        // 0x186708: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186704) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x18670Cu;
label_18670c:
    // 0x18670c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18670cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x186710: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186714: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186714u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186718: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186718u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18671c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18671cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186720: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186720u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186724: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186724u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186728: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x18672c: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x186730: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186734: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x186738: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18673c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186740: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x186744: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186748: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x186748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18674c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186750: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x186754: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x186754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186758: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18675c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186760: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x186760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x186764: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186768: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x18676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186768u;
    // 0x18676c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186768u, 0x186770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186770u;
label_186770:
    // 0x186770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186770) {
            ctx->pc = 0x186780u;
            goto label_186780;
        }
    }
    ctx->pc = 0x186778u;
    // 0x186778: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x186778u;
    {
        const bool branch_taken_0x186778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186778u;
        // 0x18677c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186778) {
            ctx->pc = 0x1867FCu;
            goto label_1867fc;
        }
    }
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186784: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186788: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x186788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18678c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186794: 0x0  nop
    ctx->pc = 0x186794u;
    // NOP
    // 0x186798: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186798u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18679c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18679cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1867a0: 0x0  nop
    ctx->pc = 0x1867a0u;
    // NOP
    // 0x1867a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1867A4u;
    {
        const bool branch_taken_0x1867a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867A4u;
        // 0x1867a8: 0xe7ac0084  swc1        $f12, 0x84($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867a4) {
            ctx->pc = 0x1867C0u;
            goto label_1867c0;
        }
    }
    ctx->pc = 0x1867ACu;
    // 0x1867ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1867b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1867B8u;
    {
        const bool branch_taken_0x1867b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B8u;
        // 0x1867bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867b8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867C0u;
label_1867c0:
    // 0x1867c0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1867c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867cc: 0x0  nop
    ctx->pc = 0x1867ccu;
    // NOP
    // 0x1867d0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1867d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1867d4: 0x0  nop
    ctx->pc = 0x1867d4u;
    // NOP
    // 0x1867d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1867D8u;
    {
        const bool branch_taken_0x1867d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D8u;
        // 0x1867dc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867E0u;
    // 0x1867e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1867E8u;
    {
        const bool branch_taken_0x1867e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E8u;
        // 0x1867ec: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867e8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867F0u;
label_1867f0:
    // 0x1867f0: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1867F0u;
    SET_GPR_U32(ctx, 31, 0x1867F8u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1867F0u, 0x1867F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867F8u;
label_1867f8:
    // 0x1867f8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1867f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1867fc:
    // 0x1867fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186800: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186804: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18680c: 0x0  nop
    ctx->pc = 0x18680cu;
    // NOP
    // 0x186810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186814: 0x0  nop
    ctx->pc = 0x186814u;
    // NOP
    // 0x186818: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186818u;
    {
        const bool branch_taken_0x186818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186818) {
            ctx->pc = 0x186834u;
            goto label_186834;
        }
    }
    ctx->pc = 0x186820u;
    // 0x186820: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186828: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18682c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18682Cu;
    {
        const bool branch_taken_0x18682c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18682c) {
            ctx->pc = 0x18686Cu;
            goto label_18686c;
        }
    }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186838: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x186838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18683c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18683cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x186840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186844: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186848: 0x0  nop
    ctx->pc = 0x186848u;
    // NOP
    // 0x18684c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18684cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186850: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186854: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x186854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186858: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18685c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18685cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186860: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186864u;
        // 0x186868: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186864) {
            ctx->pc = 0x186874u;
            goto label_186874;
        }
    }
    ctx->pc = 0x18686Cu;
label_18686c:
    // 0x18686c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18686cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x186870: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186874:
    // 0x186874: 0x9623022c  lhu         $v1, 0x22C($s1)
    ctx->pc = 0x186874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x186878: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x186878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18687c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x18687Cu;
    {
        const bool branch_taken_0x18687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18687c) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x186884u;
    // 0x186884: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x186884u;
    SET_GPR_U32(ctx, 31, 0x18688Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x186884u, 0x18688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18688Cu;
label_18688c:
    // 0x18688c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186890: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x186894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186898: 0x92250232  lbu         $a1, 0x232($s1)
    ctx->pc = 0x186898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x18689c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18689cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1868a0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1868a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1868a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1868a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1868a8: 0x24632b14  addiu       $v1, $v1, 0x2B14
    ctx->pc = 0x1868a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11028));
    // 0x1868ac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1868acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1868b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1868b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1868b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1868b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1868bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1868c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1868c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1868c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1868c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1868c8: 0x0  nop
    ctx->pc = 0x1868c8u;
    // NOP
    // 0x1868cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1868ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1868d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1868d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1868d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1868d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1868d8: 0x0  nop
    ctx->pc = 0x1868d8u;
    // NOP
    // 0x1868dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1868e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x1868E8u;
    // 0x1868e8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1868ec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1868ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1868f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1868F0u;
    {
        const bool branch_taken_0x1868f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868F0u;
        // 0x1868f4: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868f0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1868F8u;
label_1868f8:
    // 0x1868f8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1868fc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x186900: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x186900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_186904:
    // 0x186904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x186908u;
}
