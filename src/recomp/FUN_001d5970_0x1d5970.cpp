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

// Function: FUN_001d5970
// Address: 0x1d5970 - 0x1d5b58
void FUN_001d5970_0x1d5970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5970_0x1d5970");
#endif

    switch (ctx->pc) {
        case 0x1d59a4u: goto label_1d59a4;
        case 0x1d5a20u: goto label_1d5a20;
        case 0x1d5a60u: goto label_1d5a60;
        case 0x1d5a84u: goto label_1d5a84;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5b34u: goto label_1d5b34;
        default: break;
    }

    ctx->pc = 0x1d5970u;

    // 0x1d5970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5974: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1d5974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1d5978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d597c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d5984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d5988: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x1d5988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x1d598c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5990: 0xa4860012  sh          $a2, 0x12($a0)
    ctx->pc = 0x1d5990u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d5994: 0x10c00058  beqz        $a2, . + 4 + (0x58 << 2)
    ctx->pc = 0x1D5994u;
    {
        const bool branch_taken_0x1d5994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5994u;
        // 0x1d5998: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5994) {
            ctx->pc = 0x1D5AF8u;
            goto label_1d5af8;
        }
    }
    ctx->pc = 0x1D599Cu;
    // 0x1d599c: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x1D599Cu;
    SET_GPR_U32(ctx, 31, 0x1D59A4u);
    ctx->pc = 0x1D59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D599Cu;
    // 0x1d59a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x1D599Cu, 0x1D59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59A4u;
label_1d59a4:
    // 0x1d59a4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1d59a8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d59ac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d59acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1d59b0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59b4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59b8: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x1d59b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x1d59bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59c0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1d59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59c4: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x1d59c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x1d59c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59cc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1d59ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59d0: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x1d59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x1d59d4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59d8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1d59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59dc: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x1d59dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x1d59e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59e4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59e8: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x1d59e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x1d59ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59f0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1d59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d59f4: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x1d59f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x1d59f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d59fc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1d59fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5a00: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x1d5a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
    // 0x1d5a04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d5a08: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1d5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5a0c: 0xe440016c  swc1        $f0, 0x16C($v0)
    ctx->pc = 0x1d5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
    // 0x1d5a10: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5a14: 0x90450247  lbu         $a1, 0x247($v0)
    ctx->pc = 0x1d5a14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 583)));
    // 0x1d5a18: 0xc065238  jal         func_1948E0
    ctx->pc = 0x1D5A18u;
    SET_GPR_U32(ctx, 31, 0x1D5A20u);
    ctx->pc = 0x1D5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A18u;
    // 0x1d5a1c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1948E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1948E0u, 0x1D5A18u, 0x1D5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A20u;
label_1d5a20:
    // 0x1d5a20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1d5a24: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x1d5a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x1d5a28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5A28u;
    {
        const bool branch_taken_0x1d5a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a28) {
            ctx->pc = 0x1D5A8Cu;
            goto label_1d5a8c;
        }
    }
    ctx->pc = 0x1D5A30u;
    // 0x1d5a30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5a34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5a38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d5a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d5a3c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5a40: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x1d5a44: 0x34212ef0  ori         $at, $at, 0x2EF0
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12016);
    // 0x1d5a48: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d5a4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5a50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5a58: 0xc0541d0  jal         func_150740
    ctx->pc = 0x1D5A58u;
    SET_GPR_U32(ctx, 31, 0x1D5A60u);
    ctx->pc = 0x1D5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A58u;
    // 0x1d5a5c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150740u, 0x1D5A58u, 0x1D5A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A60u;
label_1d5a60:
    // 0x1d5a60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D5A60u;
    {
        const bool branch_taken_0x1d5a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A60u;
        // 0x1d5a64: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a60) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5A68u;
    // 0x1d5a68: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5a70: 0x90830231  lbu         $v1, 0x231($a0)
    ctx->pc = 0x1d5a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 561)));
    // 0x1d5a74: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5A74u;
    {
        const bool branch_taken_0x1d5a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5a74) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5A7Cu;
    // 0x1d5a7c: 0xc054388  jal         func_150E20
    ctx->pc = 0x1D5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A84u);
    ctx->pc = 0x1D5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A7Cu;
    // 0x1d5a80: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5A7Cu, 0x1D5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A84u;
label_1d5a84:
    // 0x1d5a84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5A84u;
    {
        const bool branch_taken_0x1d5a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A84u;
        // 0x1d5a88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a84) {
            ctx->pc = 0x1D5AE8u;
            goto label_1d5ae8;
        }
    }
    ctx->pc = 0x1D5A8Cu;
label_1d5a8c:
    // 0x1d5a8c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5a90: 0xdc640270  ld          $a0, 0x270($v1)
    ctx->pc = 0x1d5a90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x1d5a94: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1d5a98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5A98u;
    {
        const bool branch_taken_0x1d5a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A98u;
        // 0x1d5a9c: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a98) {
            ctx->pc = 0x1D5ABCu;
            goto label_1d5abc;
        }
    }
    ctx->pc = 0x1D5AA0u;
    // 0x1d5aa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5aa4: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5aa8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5aac: 0xc054388  jal         func_150E20
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x1D5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AACu;
    // 0x1d5ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D5AB4u;
    {
        const bool branch_taken_0x1d5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ab4) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5ABCu;
label_1d5abc:
    // 0x1d5abc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5ABCu;
    {
        const bool branch_taken_0x1d5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5abc) {
            ctx->pc = 0x1D5AE0u;
            goto label_1d5ae0;
        }
    }
    ctx->pc = 0x1D5AC4u;
    // 0x1d5ac4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5ac8: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5acc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5ad0: 0xc054388  jal         func_150E20
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AD0u;
    // 0x1d5ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AD0u, 0x1D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5AD8u;
    {
        const bool branch_taken_0x1d5ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ad8) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5AE0u;
label_1d5ae0:
    // 0x1d5ae0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1d5ae4:
    // 0x1d5ae4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5ae8:
    // 0x1d5ae8: 0xc045460  jal         func_115180
    ctx->pc = 0x1D5AE8u;
    SET_GPR_U32(ctx, 31, 0x1D5AF0u);
    ctx->pc = 0x1D5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AE8u;
    // 0x1d5aec: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x1D5AE8u, 0x1D5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AF0u;
label_1d5af0:
    // 0x1d5af0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF0u;
        // 0x1d5af4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5AF8u;
label_1d5af8:
    // 0x1d5af8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d5afc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5b00: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1d5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b04: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1d5b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d5b0c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5b10: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d5b14: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d5b18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d5b1c:
    // 0x1d5b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b20: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1d5b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b24: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x1d5b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b28: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1d5b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b2c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d5b30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5b34:
    // 0x1d5b34: 0x0  nop
    ctx->pc = 0x1d5b34u;
    // NOP
    // 0x1d5b38: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d5b3c: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d5b40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5b44: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5b48: 0x0  nop
    ctx->pc = 0x1d5b48u;
    // NOP
    // 0x1d5b4c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5B4Cu;
    {
        const bool branch_taken_0x1d5b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b4c) {
            ctx->pc = 0x1D5B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b34;
        }
    }
    ctx->pc = 0x1D5B54u;
    // 0x1d5b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1d5b58u;
}
