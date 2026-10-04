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

// Function: FUN_00175810
// Address: 0x175810 - 0x175938
void FUN_00175810_0x175810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00175810_0x175810");
#endif

    switch (ctx->pc) {
        case 0x1758c4u: goto label_1758c4;
        case 0x1758e4u: goto label_1758e4;
        case 0x175908u: goto label_175908;
        case 0x175934u: goto label_175934;
        default: break;
    }

    ctx->pc = 0x175810u;

    // 0x175810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175814: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x175818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17581c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x175820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175828: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x334AF4u));
    // 0x17582c: 0x14a30041  bne         $a1, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x17582Cu;
    {
        const bool branch_taken_0x17582c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x175830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17582Cu;
        // 0x175830: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17582c) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175834u;
    // 0x175834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175838: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x175838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x17583c: 0x14a3003d  bne         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x17583Cu;
    {
        const bool branch_taken_0x17583c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x175840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17583Cu;
        // 0x175840: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17583c) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175844u;
    // 0x175844: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x175848: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17584c: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x175850: 0x24a54974  addiu       $a1, $a1, 0x4974
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18804));
    // 0x175854: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x175858: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17585c: 0x25082570  addiu       $t0, $t0, 0x2570
    ctx->pc = 0x17585cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9584));
    // 0x175860: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x175860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175868: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x17586c: 0x38870001  xori        $a3, $a0, 0x1
    ctx->pc = 0x17586cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x175870: 0xa44823  subu        $t1, $a1, $a0
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175874: 0x72a00  sll         $a1, $a3, 8
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x175878: 0xa73823  subu        $a3, $a1, $a3
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17587c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x17587cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x175880: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x175880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x175884: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x175884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x175888: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x175888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x17588c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x175890: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x175894: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x175898: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17589c: 0x24b10048  addiu       $s1, $a1, 0x48
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x1758a0: 0x24f00048  addiu       $s0, $a3, 0x48
    ctx->pc = 0x1758a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
    // 0x1758a4: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1758a8: 0x24a70015  addiu       $a3, $a1, 0x15
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
    // 0x1758ac: 0x90a50015  lbu         $a1, 0x15($a1)
    ctx->pc = 0x1758acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x1758b0: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1758B0u;
    {
        const bool branch_taken_0x1758b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1758b0) {
            ctx->pc = 0x1758ECu;
            goto label_1758ec;
        }
    }
    ctx->pc = 0x1758B8u;
    // 0x1758b8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1758b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1758bc: 0xc05d760  jal         func_175D80
    ctx->pc = 0x1758BCu;
    SET_GPR_U32(ctx, 31, 0x1758C4u);
    ctx->pc = 0x1758C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758BCu;
    // 0x1758c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D80u, 0x1758BCu, 0x1758C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758C4u;
label_1758c4:
    // 0x1758c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1758c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1758cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1758ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1758d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1758d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758d8: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1758d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1758dc: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1758DCu;
    SET_GPR_U32(ctx, 31, 0x1758E4u);
    ctx->pc = 0x1758E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758DCu;
    // 0x1758e0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1758DCu, 0x1758E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758E4u;
label_1758e4:
    // 0x1758e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1758E4u;
    {
        const bool branch_taken_0x1758e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758E4u;
        // 0x1758e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758e4) {
            ctx->pc = 0x175938u;
            return;
        }
    }
    ctx->pc = 0x1758ECu;
label_1758ec:
    // 0x1758ec: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1758ECu;
    {
        const bool branch_taken_0x1758ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1758ec) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x1758F4u;
    // 0x1758f4: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x1758f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x1758f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1758F8u;
    {
        const bool branch_taken_0x1758f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758F8u;
        // 0x1758fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758f8) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175900u;
    // 0x175900: 0xc05d68c  jal         func_175A30
    ctx->pc = 0x175900u;
    SET_GPR_U32(ctx, 31, 0x175908u);
    ctx->pc = 0x175904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175900u;
    // 0x175904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A30u, 0x175900u, 0x175908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175908u;
label_175908:
    // 0x175908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17590c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175914: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x175918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17591c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175920: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x175920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x175924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175928: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x175928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x17592c: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x17592Cu;
    SET_GPR_U32(ctx, 31, 0x175934u);
    ctx->pc = 0x175930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17592Cu;
    // 0x175930: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x17592Cu, 0x175934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175934u;
label_175934:
    // 0x175934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x175938u;
}
