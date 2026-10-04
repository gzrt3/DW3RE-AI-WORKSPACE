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

// Function: FUN_0017fad0
// Address: 0x17fad0 - 0x17fd60
void FUN_0017fad0_0x17fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fad0_0x17fad0");
#endif

    switch (ctx->pc) {
        case 0x17fb04u: goto label_17fb04;
        case 0x17fb24u: goto label_17fb24;
        case 0x17fb64u: goto label_17fb64;
        case 0x17fba8u: goto label_17fba8;
        case 0x17fbb8u: goto label_17fbb8;
        case 0x17fc04u: goto label_17fc04;
        case 0x17fc0cu: goto label_17fc0c;
        case 0x17fc50u: goto label_17fc50;
        case 0x17fc60u: goto label_17fc60;
        case 0x17fcb0u: goto label_17fcb0;
        case 0x17fcb8u: goto label_17fcb8;
        case 0x17fcdcu: goto label_17fcdc;
        case 0x17fd00u: goto label_17fd00;
        case 0x17fd08u: goto label_17fd08;
        case 0x17fd30u: goto label_17fd30;
        case 0x17fd44u: goto label_17fd44;
        case 0x17fd58u: goto label_17fd58;
        default: break;
    }

    ctx->pc = 0x17fad0u;

    // 0x17fad0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17fad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17fad8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17fadc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17fae0: 0xe7ba0038  swc1        $f26, 0x38($sp)
    ctx->pc = 0x17fae0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17fae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fae8: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x17fae8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17faec: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x17faecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17faf0: 0xe7b7002c  swc1        $f23, 0x2C($sp)
    ctx->pc = 0x17faf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17faf4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x17faf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17faf8: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x17faf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17fafc: 0xc07f1a0  jal         func_1FC680
    ctx->pc = 0x17FAFCu;
    SET_GPR_U32(ctx, 31, 0x17FB04u);
    ctx->pc = 0x17FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAFCu;
    // 0x17fb00: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC680u, 0x17FAFCu, 0x17FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB04u;
label_17fb04:
    // 0x17fb04: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x17fb08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fb0c: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    // 0x17fb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fb18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fb1c: 0xc064634  jal         func_1918D0
    ctx->pc = 0x17FB1Cu;
    SET_GPR_U32(ctx, 31, 0x17FB24u);
    ctx->pc = 0x17FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB1Cu;
    // 0x17fb20: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x17FB1Cu, 0x17FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB24u;
label_17fb24:
    // 0x17fb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb28: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x17fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x17fb2c: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x17fb30: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x17fb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17fb34: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x17fb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x17fb38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FB38u;
    {
        const bool branch_taken_0x17fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB38u;
        // 0x17fb3c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb38) {
            ctx->pc = 0x17FB50u;
            goto label_17fb50;
        }
    }
    ctx->pc = 0x17FB40u;
    // 0x17fb40: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x17fb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x17fb44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FB44u;
    {
        const bool branch_taken_0x17fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB44u;
        // 0x17fb48: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb44) {
            ctx->pc = 0x17FB54u;
            goto label_17fb54;
        }
    }
    ctx->pc = 0x17FB4Cu;
    // 0x17fb4c: 0x4615bdc1  sub.s       $f23, $f23, $f21
    ctx->pc = 0x17fb4cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_17fb50:
    // 0x17fb50: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_17fb54:
    // 0x17fb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb5c: 0xc064654  jal         func_191950
    ctx->pc = 0x17FB5Cu;
    SET_GPR_U32(ctx, 31, 0x17FB64u);
    ctx->pc = 0x17FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB5Cu;
    // 0x17fb60: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191950u, 0x17FB5Cu, 0x17FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB64u;
label_17fb64:
    // 0x17fb64: 0xc78187fc  lwc1        $f1, -0x7804($gp)
    ctx->pc = 0x17fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fb68: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x17fb6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17fb6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17fb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17fb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17fb78: 0xc78087f8  lwc1        $f0, -0x7808($gp)
    ctx->pc = 0x17fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fb7c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x17fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x17fb80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17fb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17fb84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fb88: 0x46030e83  div.s       $f26, $f1, $f3
    ctx->pc = 0x17fb88u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[3];
    // 0x17fb8c: 0x0  nop
    ctx->pc = 0x17fb8cu;
    // NOP
    // 0x17fb90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fb94: 0x46020643  div.s       $f25, $f0, $f2
    ctx->pc = 0x17fb94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[2];
    // 0x17fb98: 0x0  nop
    ctx->pc = 0x17fb98u;
    // NOP
    // 0x17fb9c: 0x0  nop
    ctx->pc = 0x17fb9cu;
    // NOP
    // 0x17fba0: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x17FBA0u;
    SET_GPR_U32(ctx, 31, 0x17FBA8u);
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x17FBA0u, 0x17FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBA8u;
label_17fba8:
    // 0x17fba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbb0: 0xc064624  jal         func_191890
    ctx->pc = 0x17FBB0u;
    SET_GPR_U32(ctx, 31, 0x17FBB8u);
    ctx->pc = 0x17FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBB0u;
    // 0x17fbb4: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x17FBB0u, 0x17FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBB8u;
label_17fbb8:
    // 0x17fbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fbbc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x17fbc0: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x17fbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x17fbc4: 0x468004a0  cvt.s.w     $f18, $f0
    ctx->pc = 0x17fbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x17fbc8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x17fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x17fbcc: 0x3444df00  ori         $a0, $v0, 0xDF00
    ctx->pc = 0x17fbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
    // 0x17fbd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17fbd4: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x17fbd8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x17fbdc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17fbe0: 0x24849480  addiu       $a0, $a0, -0x6B80
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939776));
    // 0x17fbe4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17fbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17fbe8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17fbe8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x17fbec: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x17fbecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x17fbf0: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x17fbf0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x17fbf4: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x17fbf4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x17fbf8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17fbf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x17fbfc: 0xc06490c  jal         func_192430
    ctx->pc = 0x17FBFCu;
    SET_GPR_U32(ctx, 31, 0x17FC04u);
    ctx->pc = 0x17FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBFCu;
    // 0x17fc00: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192430u, 0x17FBFCu, 0x17FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC04u;
label_17fc04:
    // 0x17fc04: 0xc064654  jal         func_191950
    ctx->pc = 0x17FC04u;
    SET_GPR_U32(ctx, 31, 0x17FC0Cu);
    ctx->pc = 0x17FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC04u;
    // 0x17fc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191950u, 0x17FC04u, 0x17FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC0Cu;
label_17fc0c:
    // 0x17fc0c: 0xc78387fc  lwc1        $f3, -0x7804($gp)
    ctx->pc = 0x17fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17fc10: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x17fc14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17fc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17fc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc1c: 0xc78187f8  lwc1        $f1, -0x7808($gp)
    ctx->pc = 0x17fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fc20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17fc20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17fc24: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x17fc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc2c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17fc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17fc30: 0x46021e83  div.s       $f26, $f3, $f2
    ctx->pc = 0x17fc30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[26] = ctx->f[3] / ctx->f[2];
    // 0x17fc34: 0x0  nop
    ctx->pc = 0x17fc34u;
    // NOP
    // 0x17fc38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fc3c: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x17fc3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[25] = ctx->f[1] / ctx->f[0];
    // 0x17fc40: 0x0  nop
    ctx->pc = 0x17fc40u;
    // NOP
    // 0x17fc44: 0x0  nop
    ctx->pc = 0x17fc44u;
    // NOP
    // 0x17fc48: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x17FC48u;
    SET_GPR_U32(ctx, 31, 0x17FC50u);
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x17FC48u, 0x17FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC50u;
label_17fc50:
    // 0x17fc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc58: 0xc064624  jal         func_191890
    ctx->pc = 0x17FC58u;
    SET_GPR_U32(ctx, 31, 0x17FC60u);
    ctx->pc = 0x17FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC58u;
    // 0x17fc5c: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x17FC58u, 0x17FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC60u;
label_17fc60:
    // 0x17fc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc64: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x17fc68: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x17fc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x17fc6c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x17fc70: 0x3444df00  ori         $a0, $v0, 0xDF00
    ctx->pc = 0x17fc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
    // 0x17fc74: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x17fc78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17fc7c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x17fc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x17fc80: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x17fc84: 0x468004a0  cvt.s.w     $f18, $f0
    ctx->pc = 0x17fc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x17fc88: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17fc8c: 0x24849440  addiu       $a0, $a0, -0x6BC0
    ctx->pc = 0x17fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939712));
    // 0x17fc90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17fc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17fc94: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17fc94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x17fc98: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x17fc98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x17fc9c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x17fc9cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x17fca0: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x17fca0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x17fca4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x17fca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x17fca8: 0xc06490c  jal         func_192430
    ctx->pc = 0x17FCA8u;
    SET_GPR_U32(ctx, 31, 0x17FCB0u);
    ctx->pc = 0x17FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCA8u;
    // 0x17fcac: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192430u, 0x17FCA8u, 0x17FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCB0u;
label_17fcb0:
    // 0x17fcb0: 0xc064654  jal         func_191950
    ctx->pc = 0x17FCB0u;
    SET_GPR_U32(ctx, 31, 0x17FCB8u);
    ctx->pc = 0x17FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCB0u;
    // 0x17fcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191950u, 0x17FCB0u, 0x17FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCB8u;
label_17fcb8:
    // 0x17fcb8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x17fcbc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17fcc0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17fcc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17fcc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17fcc8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17fccc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17fcccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x17fcd0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x17fcd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x17fcd4: 0xc06494c  jal         func_192530
    ctx->pc = 0x17FCD4u;
    SET_GPR_U32(ctx, 31, 0x17FCDCu);
    ctx->pc = 0x17FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCD4u;
    // 0x17fcd8: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192530u, 0x17FCD4u, 0x17FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCDCu;
label_17fcdc:
    // 0x17fcdc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17fce0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x17fce4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x17fce8: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x17fcec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fcf0: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
    // 0x17fcf4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17fcf8: 0xc066d86  jal         func_19B618
    ctx->pc = 0x17FCF8u;
    SET_GPR_U32(ctx, 31, 0x17FD00u);
    ctx->pc = 0x17FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCF8u;
    // 0x17fcfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x17FCF8u, 0x17FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD00u;
label_17fd00:
    // 0x17fd00: 0xc064654  jal         func_191950
    ctx->pc = 0x17FD00u;
    SET_GPR_U32(ctx, 31, 0x17FD08u);
    ctx->pc = 0x17FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD00u;
    // 0x17fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191950u, 0x17FD00u, 0x17FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD08u;
label_17fd08:
    // 0x17fd08: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x17fd0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17fd10: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x17fd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x17fd14: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17fd18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17fd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17fd1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17fd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17fd20: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x17fd20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x17fd24: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x17fd24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x17fd28: 0xc06494c  jal         func_192530
    ctx->pc = 0x17FD28u;
    SET_GPR_U32(ctx, 31, 0x17FD30u);
    ctx->pc = 0x17FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD28u;
    // 0x17fd2c: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192530u, 0x17FD28u, 0x17FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD30u;
label_17fd30:
    // 0x17fd30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x17fd34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17fd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd38: 0x248493c0  addiu       $a0, $a0, -0x6C40
    ctx->pc = 0x17fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939584));
    // 0x17fd3c: 0xc066d86  jal         func_19B618
    ctx->pc = 0x17FD3Cu;
    SET_GPR_U32(ctx, 31, 0x17FD44u);
    ctx->pc = 0x17FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD3Cu;
    // 0x17fd40: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x17FD3Cu, 0x17FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD44u;
label_17fd44:
    // 0x17fd44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x17fd48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x17fd4c: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
    // 0x17fd50: 0xc05fea8  jal         func_17FAA0
    ctx->pc = 0x17FD50u;
    SET_GPR_U32(ctx, 31, 0x17FD58u);
    ctx->pc = 0x17FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD50u;
    // 0x17fd54: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAA0u, 0x17FD50u, 0x17FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD58u;
label_17fd58:
    // 0x17fd58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17fd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fd5c: 0xc7ba0038  lwc1        $f26, 0x38($sp)
    ctx->pc = 0x17fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    ctx->pc = 0x17fd60u;
}
