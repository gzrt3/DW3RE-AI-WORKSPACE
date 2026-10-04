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

// Function: FUN_00192430
// Address: 0x192430 - 0x192504
void FUN_00192430_0x192430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192430_0x192430");
#endif

    switch (ctx->pc) {
        case 0x19248cu: goto label_19248c;
        default: break;
    }

    ctx->pc = 0x192430u;

    // 0x192430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192438: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x192438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19243c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x19243cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x192440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192444: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x192444u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x192448: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x192448u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19244c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x19244cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x192450: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x192450u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x192454: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x192454u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x192458: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x192458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19245c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19245cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x192460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192464: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x192464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192468: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x192468u;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
    // 0x19246c: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x19246cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x192470: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x192470u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x192474: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x192474u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
    // 0x192478: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x192478u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x19247c: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x19247cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
    // 0x192480: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x192480u;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
    // 0x192484: 0xc066e44  jal         func_19B910
    ctx->pc = 0x192484u;
    SET_GPR_U32(ctx, 31, 0x19248Cu);
    ctx->pc = 0x192488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192484u;
    // 0x192488: 0x46009d46  mov.s       $f21, $f19 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[19]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x192484u, 0x19248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19248Cu;
label_19248c:
    // 0x19248c: 0x461ca002  mul.s       $f0, $f20, $f28
    ctx->pc = 0x19248cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x192490: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x192494: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x192498: 0x46190043  div.s       $f1, $f0, $f25
    ctx->pc = 0x192498u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[25];
    // 0x19249c: 0x461bc802  mul.s       $f0, $f25, $f27
    ctx->pc = 0x19249cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[27]);
    // 0x1924a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1924a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1924a4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1924a4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1924a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1924a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1924ac: 0x461aa002  mul.s       $f0, $f20, $f26
    ctx->pc = 0x1924acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x1924b0: 0x46190043  div.s       $f1, $f0, $f25
    ctx->pc = 0x1924b0u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[25];
    // 0x1924b4: 0x4618c802  mul.s       $f0, $f25, $f24
    ctx->pc = 0x1924b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[24]);
    // 0x1924b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1924b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1924bc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1924bcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1924c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1924c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1924c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1924c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1924c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1924cc: 0x0  nop
    ctx->pc = 0x1924ccu;
    // NOP
    // 0x1924d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1924d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1924d4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1924d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1924d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1924d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1924dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1924dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1924e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1924e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1924e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1924e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1924e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1924ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1924ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1924f0: 0xe6170030  swc1        $f23, 0x30($s0)
    ctx->pc = 0x1924f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1924f4: 0xe6160034  swc1        $f22, 0x34($s0)
    ctx->pc = 0x1924f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1924f8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1924f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1924fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1924fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192500: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x192500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    ctx->pc = 0x192504u;
}
