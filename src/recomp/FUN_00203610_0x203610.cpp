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

// Function: FUN_00203610
// Address: 0x203610 - 0x2037fc
void FUN_00203610_0x203610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203610_0x203610");
#endif

    switch (ctx->pc) {
        case 0x203694u: goto label_203694;
        case 0x20369cu: goto label_20369c;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f4u: goto label_2036f4;
        case 0x203724u: goto label_203724;
        case 0x20372cu: goto label_20372c;
        case 0x203734u: goto label_203734;
        case 0x203758u: goto label_203758;
        case 0x203760u: goto label_203760;
        case 0x203768u: goto label_203768;
        case 0x203788u: goto label_203788;
        case 0x203790u: goto label_203790;
        case 0x203798u: goto label_203798;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f4u: goto label_2037f4;
        default: break;
    }

    ctx->pc = 0x203610u;

    // 0x203610: 0x27bdf8e0  addiu       $sp, $sp, -0x720
    ctx->pc = 0x203610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965472));
    // 0x203614: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20361c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203624: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x203624u;
    {
        const bool branch_taken_0x203624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203624u;
        // 0x203628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203624) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x20362Cu;
    // 0x20362c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x203630: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x203630u;
    {
        const bool branch_taken_0x203630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203630) {
            ctx->pc = 0x2037A8u;
            goto label_2037a8;
        }
    }
    ctx->pc = 0x203638u;
    // 0x203638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20363c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x20363Cu;
    {
        const bool branch_taken_0x20363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20363Cu;
        // 0x203640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20363c) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x203644u;
    // 0x203644: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x203644u;
    {
        const bool branch_taken_0x203644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203644u;
        // 0x203648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203644) {
            ctx->pc = 0x203774u;
            goto label_203774;
        }
    }
    ctx->pc = 0x20364Cu;
    // 0x20364c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20364Cu;
    {
        const bool branch_taken_0x20364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20364Cu;
        // 0x203650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20364c) {
            ctx->pc = 0x20365Cu;
            goto label_20365c;
        }
    }
    ctx->pc = 0x203654u;
    // 0x203654: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x203654u;
    {
        const bool branch_taken_0x203654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203654) {
            ctx->pc = 0x2037D8u;
            goto label_2037d8;
        }
    }
    ctx->pc = 0x20365Cu;
label_20365c:
    // 0x20365c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20365Cu;
    {
        const bool branch_taken_0x20365c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20365c) {
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x203664u;
    // 0x203664: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_203668:
    // 0x203668: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x20366c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203670: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x203674: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203674u;
    {
        const bool branch_taken_0x203674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203674) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x20367Cu;
    // 0x20367c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203680: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203684: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x203688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20368c: 0xc08104c  jal         func_204130
    ctx->pc = 0x20368Cu;
    SET_GPR_U32(ctx, 31, 0x203694u);
    ctx->pc = 0x203690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20368Cu;
    // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x20368Cu, 0x203694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203694u;
label_203694:
    // 0x203694: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203694u;
    SET_GPR_U32(ctx, 31, 0x20369Cu);
    ctx->pc = 0x203698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203694u;
    // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203694u, 0x20369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20369Cu;
label_20369c:
    // 0x20369c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x20369Cu, 0x2036A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2036a8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2036B0u;
label_2036b0:
    // 0x2036b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2036b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2036B4u;
    {
        const bool branch_taken_0x2036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036b4) {
            ctx->pc = 0x203700u;
            goto label_203700;
        }
    }
    ctx->pc = 0x2036BCu;
    // 0x2036bc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2036c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2036C0u;
    {
        const bool branch_taken_0x2036c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2036c0) {
            ctx->pc = 0x2036CCu;
            goto label_2036cc;
        }
    }
    ctx->pc = 0x2036C8u;
    // 0x2036c8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2036c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2036cc:
    // 0x2036cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2036d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036dc: 0xc08104c  jal         func_204130
    ctx->pc = 0x2036DCu;
    SET_GPR_U32(ctx, 31, 0x2036E4u);
    ctx->pc = 0x2036E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036DCu;
    // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2036DCu, 0x2036E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036E4u;
label_2036e4:
    // 0x2036e4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2036E4u;
    SET_GPR_U32(ctx, 31, 0x2036ECu);
    ctx->pc = 0x2036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036E4u;
    // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2036E4u, 0x2036ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036ECu;
label_2036ec:
    // 0x2036ec: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2036ECu;
    SET_GPR_U32(ctx, 31, 0x2036F4u);
    ctx->pc = 0x2036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036ECu;
    // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2036ECu, 0x2036F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2036f8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x203704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203704u;
    {
        const bool branch_taken_0x203704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203704) {
            ctx->pc = 0x203740u;
            goto label_203740;
        }
    }
    ctx->pc = 0x20370Cu;
    // 0x20370c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203710: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20371c: 0xc08104c  jal         func_204130
    ctx->pc = 0x20371Cu;
    SET_GPR_U32(ctx, 31, 0x203724u);
    ctx->pc = 0x203720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20371Cu;
    // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x20371Cu, 0x203724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203724u;
    SET_GPR_U32(ctx, 31, 0x20372Cu);
    ctx->pc = 0x203728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203724u;
    // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203724u, 0x20372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20372Cu;
label_20372c:
    // 0x20372c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x20372Cu;
    SET_GPR_U32(ctx, 31, 0x203734u);
    ctx->pc = 0x203730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20372Cu;
    // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x20372Cu, 0x203734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203734u;
label_203734:
    // 0x203734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203738: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203748: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20374c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203750: 0xc08104c  jal         func_204130
    ctx->pc = 0x203750u;
    SET_GPR_U32(ctx, 31, 0x203758u);
    ctx->pc = 0x203754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203750u;
    // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203750u, 0x203758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203758u;
    SET_GPR_U32(ctx, 31, 0x203760u);
    ctx->pc = 0x20375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203758u;
    // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203758u, 0x203760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203760u;
label_203760:
    // 0x203760: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203760u;
    // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203760u, 0x203768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20376c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x20376Cu;
    {
        const bool branch_taken_0x20376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20376c) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x203774u;
label_203774:
    // 0x203774: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20377c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203780: 0xc08104c  jal         func_204130
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 31, 0x203788u);
    ctx->pc = 0x203784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203780u;
    // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203780u, 0x203788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203788u;
label_203788:
    // 0x203788: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203788u;
    SET_GPR_U32(ctx, 31, 0x203790u);
    ctx->pc = 0x20378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203788u;
    // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203788u, 0x203790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 31, 0x203798u);
    ctx->pc = 0x203794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203790u;
    // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203790u, 0x203798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203798u;
label_203798:
    // 0x203798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20379c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20379Cu;
    {
        const bool branch_taken_0x20379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20379c) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2037A4u;
label_2037a4:
    // 0x2037a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2037a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2037a8:
    // 0x2037a8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2037ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2037b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037b4: 0xc08104c  jal         func_204130
    ctx->pc = 0x2037B4u;
    SET_GPR_U32(ctx, 31, 0x2037BCu);
    ctx->pc = 0x2037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037B4u;
    // 0x2037b8: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2037B4u, 0x2037BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037BCu;
label_2037bc:
    // 0x2037bc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2037BCu;
    SET_GPR_U32(ctx, 31, 0x2037C4u);
    ctx->pc = 0x2037C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037BCu;
    // 0x2037c0: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2037BCu, 0x2037C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2037C4u;
    SET_GPR_U32(ctx, 31, 0x2037CCu);
    ctx->pc = 0x2037C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037C4u;
    // 0x2037c8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2037C4u, 0x2037CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037CCu;
label_2037cc:
    // 0x2037cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2037d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2037D0u;
    {
        const bool branch_taken_0x2037d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d0) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2037D8u;
label_2037d8:
    // 0x2037d8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2037dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2037dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2037e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037e4: 0xc08104c  jal         func_204130
    ctx->pc = 0x2037E4u;
    SET_GPR_U32(ctx, 31, 0x2037ECu);
    ctx->pc = 0x2037E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037E4u;
    // 0x2037e8: 0x27a80620  addiu       $t0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2037E4u, 0x2037ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037ECu;
label_2037ec:
    // 0x2037ec: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2037ECu;
    SET_GPR_U32(ctx, 31, 0x2037F4u);
    ctx->pc = 0x2037F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037ECu;
    // 0x2037f0: 0x27a40620  addiu       $a0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2037ECu, 0x2037F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037F4u;
label_2037f4:
    // 0x2037f4: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2037F4u;
    SET_GPR_U32(ctx, 31, 0x2037FCu);
    ctx->pc = 0x2037F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037F4u;
    // 0x2037f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2037F4u, 0x2037FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037FCu;
}
