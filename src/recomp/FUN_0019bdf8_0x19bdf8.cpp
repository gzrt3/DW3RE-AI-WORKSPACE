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

// Function: FUN_0019bdf8
// Address: 0x19bdf8 - 0x19bef4
void FUN_0019bdf8_0x19bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bdf8_0x19bdf8");
#endif

    switch (ctx->pc) {
        case 0x19be80u: goto label_19be80;
        case 0x19bea8u: goto label_19bea8;
        case 0x19bed0u: goto label_19bed0;
        default: break;
    }

    ctx->pc = 0x19bdf8u;

    // 0x19bdf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19bdfc: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x19bdfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x19be00: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x19be00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x19be04: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x19be04u;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x19be08: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x19be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19be0c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x19be0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x19be10: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x19be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x19be14: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x19be14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x19be18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x19be1c: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x19be1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x19be20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be24: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x19be24u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x19be28: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x19be28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19be2c: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x19be2cu;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x19be30: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x19be30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x19be34: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x19be34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x19be38: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x19be38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19be3c: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x19be3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x19be40: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x19be40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x19be44: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x19be44u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x19be48: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x19be48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x19be4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x19be4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x19be50: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x19be50u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x19be54: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x19be54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x19be58: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x19be58u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x19be5c: 0x0  nop
    ctx->pc = 0x19be5cu;
    // NOP
    // 0x19be60: 0x0  nop
    ctx->pc = 0x19be60u;
    // NOP
    // 0x19be64: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x19be64u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
    // 0x19be68: 0x0  nop
    ctx->pc = 0x19be68u;
    // NOP
    // 0x19be6c: 0x0  nop
    ctx->pc = 0x19be6cu;
    // NOP
    // 0x19be70: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x19be70u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
    // 0x19be74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19be78: 0xc066e44  jal         func_19B910
    ctx->pc = 0x19BE78u;
    SET_GPR_U32(ctx, 31, 0x19BE80u);
    ctx->pc = 0x19BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE78u;
    // 0x19be7c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x19BE78u, 0x19BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19be84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19be84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19be88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be8c: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x19be8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x19be90: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x19be90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x19be94: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x19be94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x19be98: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x19be9c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x19be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x19bea0: 0xc066e44  jal         func_19B910
    ctx->pc = 0x19BEA0u;
    SET_GPR_U32(ctx, 31, 0x19BEA8u);
    ctx->pc = 0x19BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEA0u;
    // 0x19bea4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x19BEA0u, 0x19BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19beac: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x19beacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19beb0: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x19beb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19beb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19beb8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x19beb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19bebc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x19bec0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19bec4: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x19bec4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x19bec8: 0xc066d86  jal         func_19B618
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x19BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEC8u;
    // 0x19becc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x19BEC8u, 0x19BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BED0u;
label_19bed0:
    // 0x19bed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bed4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bed8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x19bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x19bedc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x19bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x19bee0: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x19bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x19bee4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x19bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x19bee8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x19bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19beec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x19beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19bef0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x19bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x19bef4u;
}
