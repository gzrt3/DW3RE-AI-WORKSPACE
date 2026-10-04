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

// Function: entry_001b3b68
// Address: 0x1b3b68 - 0x1b3dd0
void entry_001b3b68_0x1b3b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b68_0x1b3b68");
#endif

    switch (ctx->pc) {
        case 0x1b3b80u: goto label_1b3b80;
        case 0x1b3d28u: goto label_1b3d28;
        case 0x1b3d78u: goto label_1b3d78;
        case 0x1b3dacu: goto label_1b3dac;
        default: break;
    }

    ctx->pc = 0x1b3b68u;

    // 0x1b3b68: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x1b3b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x1b3b6c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b3b70: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x1B3B70u;
    {
        const bool branch_taken_0x1b3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b70) {
            ctx->pc = 0x1B3B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3B70u;
            // 0x1b3b74: 0x1015c3  sra         $v0, $s0, 23 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D08u;
            goto label_1b3d08;
        }
    }
    ctx->pc = 0x1B3B78u;
    // 0x1b3b78: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B3B78u;
    SET_GPR_U32(ctx, 31, 0x1B3B80u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B3B78u, 0x1B3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B80u;
label_1b3b80:
    // 0x1b3b80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3b84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3b88: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1b3b88u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1b3b8c: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1b3b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1b3b90: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x1b3b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x1b3b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b98: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3b9c: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1b3ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
    // 0x1b3ba8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b3ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b3bac: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1b3bb0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1b3bb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3bb8: 0x0  nop
    ctx->pc = 0x1b3bb8u;
    // NOP
    // 0x1b3bbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b3bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b3bc0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b3bc4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b3bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b3bc8: 0x0  nop
    ctx->pc = 0x1b3bc8u;
    // NOP
    // 0x1b3bcc: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x1b3bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b3bd0: 0x0  nop
    ctx->pc = 0x1b3bd0u;
    // NOP
    // 0x1b3bd4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1b3bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1b3bd8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1b3bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3bdc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b3bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1b3be0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1b3be0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1b3be4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3BE4u;
    {
        const bool branch_taken_0x1b3be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BE4u;
        // 0x1b3be8: 0x46012901  sub.s       $f4, $f5, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3be4) {
            ctx->pc = 0x1B3C18u;
            goto label_1b3c18;
        }
    }
    ctx->pc = 0x1B3BECu;
    // 0x1b3bec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3bf0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1b3bf4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b3bf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3bfc: 0x8c84b114  lw          $a0, -0x4EEC($a0)
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947092)));
    // 0x1b3c00: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1b3c04: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3C04u;
    {
        const bool branch_taken_0x1b3c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C04u;
        // 0x1b3c08: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c04) {
            ctx->pc = 0x1B3C1Cu;
            goto label_1b3c1c;
        }
    }
    ctx->pc = 0x1B3C0Cu;
    // 0x1b3c0c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B3C0Cu;
    {
        const bool branch_taken_0x1b3c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C0Cu;
        // 0x1b3c10: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c0c) {
            ctx->pc = 0x1B3CDCu;
            goto label_1b3cdc;
        }
    }
    ctx->pc = 0x1B3C14u;
    // 0x1b3c14: 0x0  nop
    ctx->pc = 0x1b3c14u;
    // NOP
label_1b3c18:
    // 0x1b3c18: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x1b3c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3c1c:
    // 0x1b3c1c: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1b3c20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b3c24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3c28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3c2c: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1b3c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c34: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3c38: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1b3c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b3c3c: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B3C3Cu;
    {
        const bool branch_taken_0x1b3c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c3c) {
            ctx->pc = 0x1B3C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C3Cu;
            // 0x1b3c40: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3CE0u;
            goto label_1b3ce0;
        }
    }
    ctx->pc = 0x1B3C44u;
    // 0x1b3c44: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1b3c48: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1b3c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1b3c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c50: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1b3c50u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1b3c54: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1b3c58: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1b3c5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3c60: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1b3c60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1b3c64: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1b3c64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1b3c68: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1b3c68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b3c6c: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1b3c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1b3c70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3c74: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1b3c74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b3c78: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1b3c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b3c7c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b3c80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b3c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3c84: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1b3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b3c88: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1b3c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c90: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3c94: 0x2863001a  slti        $v1, $v1, 0x1A
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1b3c98: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3C98u;
    {
        const bool branch_taken_0x1b3c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c98) {
            ctx->pc = 0x1B3C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C98u;
            // 0x1b3c9c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3CE0u;
            goto label_1b3ce0;
        }
    }
    ctx->pc = 0x1B3CA0u;
    // 0x1b3ca0: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1b3ca4: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x1b3ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x1b3ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3cac: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1b3cacu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1b3cb0: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x1b3cb4: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1b3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x1b3cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3cbc: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1b3cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1b3cc0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1b3cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1b3cc4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1b3cc4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b3cc8: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1b3cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1b3ccc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3cd0: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1b3cd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b3cd4: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1b3cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b3cd8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3cdc:
    // 0x1b3cdc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3ce0:
    // 0x1b3ce0: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1b3ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1b3ce4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3ce8: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3CE8u;
    {
        const bool branch_taken_0x1b3ce8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CE8u;
        // 0x1b3cec: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ce8) {
            ctx->pc = 0x1B3D00u;
            goto label_1b3d00;
        }
    }
    ctx->pc = 0x1B3CF0u;
    // 0x1b3cf0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3cf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1b3cf4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B3CF4u;
    {
        const bool branch_taken_0x1b3cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CF4u;
        // 0x1b3cf8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cf4) {
            ctx->pc = 0x1B3DC4u;
            goto label_1b3dc4;
        }
    }
    ctx->pc = 0x1B3CFCu;
    // 0x1b3cfc: 0x0  nop
    ctx->pc = 0x1b3cfcu;
    // NOP
label_1b3d00:
    // 0x1b3d00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B3D00u;
    {
        const bool branch_taken_0x1b3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D00u;
        // 0x1b3d04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d00) {
            ctx->pc = 0x1B3DD0u;
            return;
        }
    }
    ctx->pc = 0x1B3D08u;
label_1b3d08:
    // 0x1b3d08: 0x2446ff7a  addiu       $a2, $v0, -0x86
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967162));
    // 0x1b3d0c: 0x61dc0  sll         $v1, $a2, 23
    ctx->pc = 0x1b3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1b3d10: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b3d14: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1b3d14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3d18: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1b3d1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d28:
    // 0x1b3d28: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b3d2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b3d30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b3d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d38: 0x0  nop
    ctx->pc = 0x1b3d38u;
    // NOP
    // 0x1b3d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d40: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x1b3d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1b3d44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b3d48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b3d4c: 0x461fff6  bgez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d28;
        }
    }
    ctx->pc = 0x1B3D54u;
    // 0x1b3d54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3d58: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3d58u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b3d5c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x1b3d5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3d60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3d64: 0x0  nop
    ctx->pc = 0x1b3d64u;
    // NOP
    // 0x1b3d68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B3D68u;
    {
        const bool branch_taken_0x1b3d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D68u;
        // 0x1b3d6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d68) {
            ctx->pc = 0x1B3D94u;
            goto label_1b3d94;
        }
    }
    ctx->pc = 0x1B3D70u;
    // 0x1b3d70: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b3d74: 0x0  nop
    ctx->pc = 0x1b3d74u;
    // NOP
label_1b3d78:
    // 0x1b3d78: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b3d7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3d80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3d84: 0x0  nop
    ctx->pc = 0x1b3d84u;
    // NOP
    // 0x1b3d88: 0x0  nop
    ctx->pc = 0x1b3d88u;
    // NOP
    // 0x1b3d8c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3D8Cu;
    {
        const bool branch_taken_0x1b3d8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D8Cu;
        // 0x1b3d90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d8c) {
            ctx->pc = 0x1B3D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d78;
        }
    }
    ctx->pc = 0x1B3D94u;
label_1b3d94:
    // 0x1b3d94: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x1b3d94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x1b3d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d9c: 0x2529ae00  addiu       $t1, $t1, -0x5200
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946304));
    // 0x1b3da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3da4: 0xc06d00c  jal         func_1B4030
    ctx->pc = 0x1B3DA4u;
    SET_GPR_U32(ctx, 31, 0x1B3DACu);
    ctx->pc = 0x1B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DA4u;
    // 0x1b3da8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4030u, 0x1B3DA4u, 0x1B3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DACu;
label_1b3dac:
    // 0x1b3dac: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3DACu;
    {
        const bool branch_taken_0x1b3dac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dac) {
            ctx->pc = 0x1B3DD0u;
            return;
        }
    }
    ctx->pc = 0x1B3DB4u;
    // 0x1b3db4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3db8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1b3dbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3dc0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3dc0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3dc4:
    // 0x1b3dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b3dc8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b3dcc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->pc = 0x1b3dd0u;
}
