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

// Function: FUN_00150bb0
// Address: 0x150bb0 - 0x150cec
void FUN_00150bb0_0x150bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150bb0_0x150bb0");
#endif

    ctx->pc = 0x150bb0u;

    // 0x150bb0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x150bb4: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x150BB4u;
    {
        const bool branch_taken_0x150bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bb4) {
            ctx->pc = 0x150CECu;
            return;
        }
    }
    ctx->pc = 0x150BBCu;
    // 0x150bbc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x150bc0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x150BC0u;
    {
        const bool branch_taken_0x150bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bc0) {
            ctx->pc = 0x150C80u;
            goto label_150c80;
        }
    }
    ctx->pc = 0x150BC8u;
    // 0x150bc8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x150bcc: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x150bd0: 0xac650088  sw          $a1, 0x88($v1)
    ctx->pc = 0x150bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 5));
    // 0x150bd4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x150bd8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x150BD8u;
    {
        const bool branch_taken_0x150bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bd8) {
            ctx->pc = 0x150C38u;
            goto label_150c38;
        }
    }
    ctx->pc = 0x150BE0u;
    // 0x150be0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x150be4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x150be8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x150be8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x150bec: 0x24a70090  addiu       $a3, $a1, 0x90
    ctx->pc = 0x150becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x150bf0: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x150bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x150bf4: 0x24e3008e  addiu       $v1, $a3, 0x8E
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 142));
    // 0x150bf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150bfc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x150bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150C00u;
    {
        const bool branch_taken_0x150c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c00) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150C08u;
    // 0x150c08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150c0c: 0x24e30080  addiu       $v1, $a3, 0x80
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x150c10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c18: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x150c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c1c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x150c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150c20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x150C20u;
    {
        const bool branch_taken_0x150c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C20u;
        // 0x150c24: 0xc4600030  lwc1        $f0, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c20) {
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150C28u;
label_150c28:
    // 0x150c28: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c2c: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150C30u;
    {
        const bool branch_taken_0x150c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C30u;
        // 0x150c34: 0xc4c00150  lwc1        $f0, 0x150($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c30) {
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150C38u;
label_150c38:
    // 0x150c38: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c3c: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c40: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150c44: 0x0  nop
    ctx->pc = 0x150c44u;
    // NOP
label_150c48:
    // 0x150c48: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x150c4c: 0xe4820058  swc1        $f2, 0x58($a0)
    ctx->pc = 0x150c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x150c50: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x150c54: 0x286101ff  slti        $at, $v1, 0x1FF
    ctx->pc = 0x150c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x150c58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C58u;
        // 0x150c5c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x150c64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c6c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x150c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x150c70: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x150C70u;
    {
        const bool branch_taken_0x150c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c70) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C78u;
    // 0x150c78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x150C78u;
    {
        const bool branch_taken_0x150c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C78u;
        // 0x150c7c: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c78) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C80u;
label_150c80:
    // 0x150c80: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c84: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x150c88: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c8c: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x150c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x150c90: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c94: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x150c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x150c98: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c9c: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x150c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x150ca0: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ca4: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x150ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x150ca8: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cac: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x150cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x150cb0: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cb4: 0xe4800158  swc1        $f0, 0x158($a0)
    ctx->pc = 0x150cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x150cb8: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cbc: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x150cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
label_150cc0:
    // 0x150cc0: 0xa4c0019c  sh          $zero, 0x19C($a2)
    ctx->pc = 0x150cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cc4: 0xa4c0019e  sh          $zero, 0x19E($a2)
    ctx->pc = 0x150cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cc8: 0xacc00194  sw          $zero, 0x194($a2)
    ctx->pc = 0x150cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 0));
    // 0x150ccc: 0xacc00200  sw          $zero, 0x200($a2)
    ctx->pc = 0x150cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 0));
    // 0x150cd0: 0xa4c00208  sh          $zero, 0x208($a2)
    ctx->pc = 0x150cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cd4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x150cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x150cd8: 0x90c301a2  lbu         $v1, 0x1A2($a2)
    ctx->pc = 0x150cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
    // 0x150cdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CDCu;
    {
        const bool branch_taken_0x150cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150cdc) {
            ctx->pc = 0x150CECu;
            return;
        }
    }
    ctx->pc = 0x150CE4u;
    // 0x150ce4: 0xacc0020c  sw          $zero, 0x20C($a2)
    ctx->pc = 0x150ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 524), GPR_U32(ctx, 0));
    // 0x150ce8: 0xacc00204  sw          $zero, 0x204($a2)
    ctx->pc = 0x150ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 516), GPR_U32(ctx, 0));
    ctx->pc = 0x150cecu;
}
