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

// Function: FUN_0011a410
// Address: 0x11a410 - 0x11a4b4
void FUN_0011a410_0x11a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a410_0x11a410");
#endif

    switch (ctx->pc) {
        case 0x11a42cu: goto label_11a42c;
        case 0x11a440u: goto label_11a440;
        case 0x11a464u: goto label_11a464;
        case 0x11a46cu: goto label_11a46c;
        case 0x11a474u: goto label_11a474;
        default: break;
    }

    ctx->pc = 0x11a410u;

    // 0x11a410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a41c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a424: 0xc0590dc  jal         func_164370
    ctx->pc = 0x11A424u;
    SET_GPR_U32(ctx, 31, 0x11A42Cu);
    ctx->pc = 0x11A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A424u;
    // 0x11a428: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x11A424u, 0x11A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A42Cu;
label_11a42c:
    // 0x11a42c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a430: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11A430u;
    {
        const bool branch_taken_0x11a430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A430u;
        // 0x11a434: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a430) {
            ctx->pc = 0x11A4B0u;
            goto label_11a4b0;
        }
    }
    ctx->pc = 0x11A438u;
    // 0x11a438: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11A438u;
    SET_GPR_U32(ctx, 31, 0x11A440u);
    ctx->pc = 0x11A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A438u;
    // 0x11a43c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11A438u, 0x11A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A440u;
label_11a440:
    // 0x11a440: 0xdf868bd0  ld          $a2, -0x7430($gp)
    ctx->pc = 0x11a440u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x11a444: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x11a448: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a450: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a454: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x11a454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11a458: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11a458u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11a45c: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11A45Cu;
    SET_GPR_U32(ctx, 31, 0x11A464u);
    ctx->pc = 0x11A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A45Cu;
    // 0x11a460: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11A45Cu, 0x11A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A464u;
label_11a464:
    // 0x11a464: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x11A464u;
    SET_GPR_U32(ctx, 31, 0x11A46Cu);
    ctx->pc = 0x11A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A464u;
    // 0x11a468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x11A464u, 0x11A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A46Cu;
label_11a46c:
    // 0x11a46c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A46Cu;
    SET_GPR_U32(ctx, 31, 0x11A474u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A46Cu, 0x11A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A474u;
label_11a474:
    // 0x11a474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a478: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x11a47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11a47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a480: 0x0  nop
    ctx->pc = 0x11a480u;
    // NOP
    // 0x11a484: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a488: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x11a488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x11a48c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x11a48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x11a490: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11a490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11a494: 0x24635f80  addiu       $v1, $v1, 0x5F80
    ctx->pc = 0x11a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24448));
    // 0x11a498: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a498u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11a49c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a49cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a4a0: 0x0  nop
    ctx->pc = 0x11a4a0u;
    // NOP
    // 0x11a4a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a4a8: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x11a4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x11a4ac: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x11a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_11a4b0:
    // 0x11a4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a4b4u;
}
