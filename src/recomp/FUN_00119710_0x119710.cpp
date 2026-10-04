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

// Function: FUN_00119710
// Address: 0x119710 - 0x11984c
void FUN_00119710_0x119710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119710_0x119710");
#endif

    switch (ctx->pc) {
        case 0x11972cu: goto label_11972c;
        case 0x119740u: goto label_119740;
        case 0x119748u: goto label_119748;
        case 0x119780u: goto label_119780;
        case 0x11979cu: goto label_11979c;
        case 0x1197d8u: goto label_1197d8;
        case 0x119814u: goto label_119814;
        case 0x11981cu: goto label_11981c;
        case 0x119834u: goto label_119834;
        default: break;
    }

    ctx->pc = 0x119710u;

    // 0x119710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11971c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11971cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119724: 0xc0590dc  jal         func_164370
    ctx->pc = 0x119724u;
    SET_GPR_U32(ctx, 31, 0x11972Cu);
    ctx->pc = 0x119728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119724u;
    // 0x119728: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x119724u, 0x11972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11972Cu;
label_11972c:
    // 0x11972c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119730: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x119730u;
    {
        const bool branch_taken_0x119730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x119734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119730u;
        // 0x119734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119730) {
            ctx->pc = 0x119848u;
            goto label_119848;
        }
    }
    ctx->pc = 0x119738u;
    // 0x119738: 0xc066e26  jal         func_19B898
    ctx->pc = 0x119738u;
    SET_GPR_U32(ctx, 31, 0x119740u);
    ctx->pc = 0x11973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119738u;
    // 0x11973c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x119738u, 0x119740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119740u;
label_119740:
    // 0x119740: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x119740u;
    SET_GPR_U32(ctx, 31, 0x119748u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x119740u, 0x119748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119748u;
label_119748:
    // 0x119748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11974c: 0x0  nop
    ctx->pc = 0x11974cu;
    // NOP
    // 0x119750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119754: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x119754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x119758: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x119758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x11975c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x119760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x119760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119764: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x119764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119768: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x119768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11976c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x11976cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
    // 0x119770: 0x0  nop
    ctx->pc = 0x119770u;
    // NOP
    // 0x119774: 0x0  nop
    ctx->pc = 0x119774u;
    // NOP
    // 0x119778: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x119778u;
    SET_GPR_U32(ctx, 31, 0x119780u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x119778u, 0x119780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119780u;
label_119780:
    // 0x119780: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x119784: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x119784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119788: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x119788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11978c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11978cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119790: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x119790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x119794: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x119794u;
    SET_GPR_U32(ctx, 31, 0x11979Cu);
    ctx->pc = 0x119798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119794u;
    // 0x119798: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x119794u, 0x11979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11979Cu;
label_11979c:
    // 0x11979c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11979cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1197a0: 0x0  nop
    ctx->pc = 0x1197a0u;
    // NOP
    // 0x1197a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1197a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1197a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1197ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1197b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1197b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1197b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1197b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1197b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1197b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1197bc: 0x0  nop
    ctx->pc = 0x1197bcu;
    // NOP
    // 0x1197c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1197c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1197c4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1197c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1197c8: 0x0  nop
    ctx->pc = 0x1197c8u;
    // NOP
    // 0x1197cc: 0x0  nop
    ctx->pc = 0x1197ccu;
    // NOP
    // 0x1197d0: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x1197D0u;
    SET_GPR_U32(ctx, 31, 0x1197D8u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1197D0u, 0x1197D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197D8u;
label_1197d8:
    // 0x1197d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1197dc: 0xdf868ac0  ld          $a2, -0x7540($gp)
    ctx->pc = 0x1197dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1197e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1197e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1197e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197e8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1197e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1197ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1197ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1197f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1197f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1197f4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1197f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1197f8: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1197fc: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1197fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x119800: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x119800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x119804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119808: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x119808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11980c: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11980Cu;
    SET_GPR_U32(ctx, 31, 0x119814u);
    ctx->pc = 0x119810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11980Cu;
    // 0x119810: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11980Cu, 0x119814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119814u;
label_119814:
    // 0x119814: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x119814u;
    SET_GPR_U32(ctx, 31, 0x11981Cu);
    ctx->pc = 0x119818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119814u;
    // 0x119818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x119814u, 0x11981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11981Cu;
label_11981c:
    // 0x11981c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119820: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x119824: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x119824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x119828: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x119828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x11982c: 0xc071400  jal         func_1C5000
    ctx->pc = 0x11982Cu;
    SET_GPR_U32(ctx, 31, 0x119834u);
    ctx->pc = 0x119830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11982Cu;
    // 0x119830: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x11982Cu, 0x119834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119838: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11983c: 0x24639860  addiu       $v1, $v1, -0x67A0
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940768));
    // 0x119840: 0xa20402e1  sb          $a0, 0x2E1($s0)
    ctx->pc = 0x119840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 4));
    // 0x119844: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x119844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_119848:
    // 0x119848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11984cu;
}
