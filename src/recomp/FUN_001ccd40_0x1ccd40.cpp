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

// Function: FUN_001ccd40
// Address: 0x1ccd40 - 0x1ccdcc
void FUN_001ccd40_0x1ccd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccd40_0x1ccd40");
#endif

    switch (ctx->pc) {
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd9cu: goto label_1ccd9c;
        case 0x1ccdacu: goto label_1ccdac;
        case 0x1ccdb4u: goto label_1ccdb4;
        default: break;
    }

    ctx->pc = 0x1ccd40u;

    // 0x1ccd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ccd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ccd48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ccd4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccd4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ccd50: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1ccd50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1ccd54: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1ccd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ccd58: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCD58u;
    {
        const bool branch_taken_0x1ccd58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD58u;
        // 0x1ccd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd58) {
            ctx->pc = 0x1CCDB8u;
            goto label_1ccdb8;
        }
    }
    ctx->pc = 0x1CCD60u;
    // 0x1ccd60: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CCD60u;
    SET_GPR_U32(ctx, 31, 0x1CCD68u);
    ctx->pc = 0x1CCD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD60u;
    // 0x1ccd64: 0xc6140050  lwc1        $f20, 0x50($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CCD60u, 0x1CCD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD68u;
label_1ccd68:
    // 0x1ccd68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccd6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccd70: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ccd74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ccd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ccd78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ccd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ccd7c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1ccd7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1ccd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd84: 0x0  nop
    ctx->pc = 0x1ccd84u;
    // NOP
    // 0x1ccd88: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ccd88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ccd8c: 0x0  nop
    ctx->pc = 0x1ccd8cu;
    // NOP
    // 0x1ccd90: 0x0  nop
    ctx->pc = 0x1ccd90u;
    // NOP
    // 0x1ccd94: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CCD94u;
    SET_GPR_U32(ctx, 31, 0x1CCD9Cu);
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CCD94u, 0x1CCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD9Cu;
label_1ccd9c:
    // 0x1ccd9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ccd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ccda0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ccda4: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CCDA4u;
    SET_GPR_U32(ctx, 31, 0x1CCDACu);
    ctx->pc = 0x1CCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDA4u;
    // 0x1ccda8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CCDA4u, 0x1CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDACu;
label_1ccdac:
    // 0x1ccdac: 0xc0733f4  jal         func_1CCFD0
    ctx->pc = 0x1CCDACu;
    SET_GPR_U32(ctx, 31, 0x1CCDB4u);
    ctx->pc = 0x1CCDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDACu;
    // 0x1ccdb0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFD0u, 0x1CCDACu, 0x1CCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDB4u;
label_1ccdb4:
    // 0x1ccdb4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1ccdb8:
    // 0x1ccdb8: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1ccdbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ccdc0: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccdc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x1ccdccu;
}
