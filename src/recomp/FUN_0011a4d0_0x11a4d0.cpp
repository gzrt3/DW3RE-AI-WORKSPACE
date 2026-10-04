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

// Function: FUN_0011a4d0
// Address: 0x11a4d0 - 0x11a574
void FUN_0011a4d0_0x11a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a4d0_0x11a4d0");
#endif

    switch (ctx->pc) {
        case 0x11a4ecu: goto label_11a4ec;
        case 0x11a500u: goto label_11a500;
        case 0x11a524u: goto label_11a524;
        case 0x11a52cu: goto label_11a52c;
        case 0x11a534u: goto label_11a534;
        default: break;
    }

    ctx->pc = 0x11a4d0u;

    // 0x11a4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a4dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a4e4: 0xc0590dc  jal         func_164370
    ctx->pc = 0x11A4E4u;
    SET_GPR_U32(ctx, 31, 0x11A4ECu);
    ctx->pc = 0x11A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4E4u;
    // 0x11a4e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x11A4E4u, 0x11A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4ECu;
label_11a4ec:
    // 0x11a4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4f0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11A4F0u;
    {
        const bool branch_taken_0x11a4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4F0u;
        // 0x11a4f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4f0) {
            ctx->pc = 0x11A570u;
            goto label_11a570;
        }
    }
    ctx->pc = 0x11A4F8u;
    // 0x11a4f8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11A4F8u;
    SET_GPR_U32(ctx, 31, 0x11A500u);
    ctx->pc = 0x11A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4F8u;
    // 0x11a4fc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11A4F8u, 0x11A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A500u;
label_11a500:
    // 0x11a500: 0xdf868be0  ld          $a2, -0x7420($gp)
    ctx->pc = 0x11a500u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937568)));
    // 0x11a504: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x11a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x11a508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a510: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a514: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x11a514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a518: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11a518u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11a51c: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11A51Cu;
    SET_GPR_U32(ctx, 31, 0x11A524u);
    ctx->pc = 0x11A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A51Cu;
    // 0x11a520: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11A51Cu, 0x11A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A524u;
label_11a524:
    // 0x11a524: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x11A524u;
    SET_GPR_U32(ctx, 31, 0x11A52Cu);
    ctx->pc = 0x11A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A524u;
    // 0x11a528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x11A524u, 0x11A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A52Cu;
label_11a52c:
    // 0x11a52c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A52Cu;
    SET_GPR_U32(ctx, 31, 0x11A534u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A52Cu, 0x11A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A534u;
label_11a534:
    // 0x11a534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a538: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11a538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x11a53c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11a53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a540: 0x0  nop
    ctx->pc = 0x11a540u;
    // NOP
    // 0x11a544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a548: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x11a548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x11a54c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x11a550: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11a554: 0x24635f80  addiu       $v1, $v1, 0x5F80
    ctx->pc = 0x11a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24448));
    // 0x11a558: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a558u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11a55c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a55cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a560: 0x0  nop
    ctx->pc = 0x11a560u;
    // NOP
    // 0x11a564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a568: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x11a568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x11a56c: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x11a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_11a570:
    // 0x11a570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a574u;
}
