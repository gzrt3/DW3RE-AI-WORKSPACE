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

// Function: FUN_0023d9b8
// Address: 0x23d9b8 - 0x23f010
void FUN_0023d9b8_0x23d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d9b8_0x23d9b8");
#endif

    switch (ctx->pc) {
        case 0x23d9f8u: goto label_23d9f8;
        case 0x23da28u: goto label_23da28;
        case 0x23da64u: goto label_23da64;
        case 0x23da88u: goto label_23da88;
        case 0x23da90u: goto label_23da90;
        case 0x23dab0u: goto label_23dab0;
        case 0x23db10u: goto label_23db10;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dd94u: goto label_23dd94;
        case 0x23ddacu: goto label_23ddac;
        case 0x23dddcu: goto label_23dddc;
        case 0x23de18u: goto label_23de18;
        case 0x23de84u: goto label_23de84;
        case 0x23e024u: goto label_23e024;
        case 0x23e050u: goto label_23e050;
        case 0x23e160u: goto label_23e160;
        case 0x23e168u: goto label_23e168;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e364u: goto label_23e364;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e424u: goto label_23e424;
        case 0x23e470u: goto label_23e470;
        case 0x23e4acu: goto label_23e4ac;
        case 0x23e514u: goto label_23e514;
        case 0x23e550u: goto label_23e550;
        case 0x23e58cu: goto label_23e58c;
        case 0x23e5f4u: goto label_23e5f4;
        case 0x23e648u: goto label_23e648;
        case 0x23e694u: goto label_23e694;
        case 0x23e700u: goto label_23e700;
        case 0x23e738u: goto label_23e738;
        case 0x23e770u: goto label_23e770;
        case 0x23e814u: goto label_23e814;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e944u: goto label_23e944;
        case 0x23e994u: goto label_23e994;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea68u: goto label_23ea68;
        case 0x23eaccu: goto label_23eacc;
        case 0x23eb58u: goto label_23eb58;
        case 0x23ebb4u: goto label_23ebb4;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec94u: goto label_23ec94;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ed40u: goto label_23ed40;
        case 0x23ed78u: goto label_23ed78;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee78u: goto label_23ee78;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eef8u: goto label_23eef8;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef94u: goto label_23ef94;
        case 0x23efc4u: goto label_23efc4;
        default: break;
    }

    ctx->pc = 0x23d9b8u;

    // 0x23d9b8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x23d9bc: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x23d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x23d9c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23d9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9c4: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x23d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x23d9c8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x23d9c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9cc: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x23d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    // 0x23d9d0: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x23d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x23d9d4: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x23d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x23d9d8: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x23d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x23d9dc: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x23d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x23d9e0: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x23d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x23d9e4: 0xffb70278  sd          $s7, 0x278($sp)
    ctx->pc = 0x23d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 23));
    // 0x23d9e8: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x23d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
    // 0x23d9ec: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x23d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
    // 0x23d9f0: 0xc08e548  jal         func_239520
    ctx->pc = 0x23D9F0u;
    SET_GPR_U32(ctx, 31, 0x23D9F8u);
    ctx->pc = 0x23D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9F0u;
    // 0x23d9f4: 0xafa501e8  sw          $a1, 0x1E8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239520u, 0x23D9F0u, 0x23D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9F8u;
label_23d9f8:
    // 0x23d9f8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23d9fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da00: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x23da00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23da04: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x23da04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x23da08: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x23da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x23da0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DA0Cu;
    {
        const bool branch_taken_0x23da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA0Cu;
        // 0x23da10: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da0c) {
            ctx->pc = 0x23DA20u;
            goto label_23da20;
        }
    }
    ctx->pc = 0x23DA14u;
    // 0x23da14: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23da18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DA18u;
    {
        const bool branch_taken_0x23da18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23da18) {
            ctx->pc = 0x23DA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA18u;
            // 0x23da1c: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA3Cu;
            goto label_23da3c;
        }
    }
    ctx->pc = 0x23DA20u;
label_23da20:
    // 0x23da20: 0xc08fcc6  jal         func_23F318
    ctx->pc = 0x23DA20u;
    SET_GPR_U32(ctx, 31, 0x23DA28u);
    ctx->pc = 0x23DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA20u;
    // 0x23da24: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F318u, 0x23DA20u, 0x23DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA28u;
label_23da28:
    // 0x23da28: 0x1440056f  bnez        $v0, . + 4 + (0x56F << 2)
    ctx->pc = 0x23DA28u;
    {
        const bool branch_taken_0x23da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA28u;
        // 0x23da2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da28) {
            ctx->pc = 0x23EFE8u;
            goto label_23efe8;
        }
    }
    ctx->pc = 0x23DA30u;
    // 0x23da30: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23da34: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x23da34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23da38: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x23da38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_23da3c:
    // 0x23da3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23da40: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DA40u;
    {
        const bool branch_taken_0x23da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA40u;
        // 0x23da44: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da40) {
            ctx->pc = 0x23DA70u;
            goto label_23da70;
        }
    }
    ctx->pc = 0x23DA48u;
    // 0x23da48: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23da4c: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x23da4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x23da50: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DA50u;
    {
        const bool branch_taken_0x23da50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da50) {
            ctx->pc = 0x23DA70u;
            goto label_23da70;
        }
    }
    ctx->pc = 0x23DA58u;
    // 0x23da58: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23da58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da5c: 0xc08f622  jal         func_23D888
    ctx->pc = 0x23DA5Cu;
    SET_GPR_U32(ctx, 31, 0x23DA64u);
    ctx->pc = 0x23DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA5Cu;
    // 0x23da60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D888u, 0x23DA5Cu, 0x23DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA64u;
label_23da64:
    // 0x23da64: 0x10000561  b           . + 4 + (0x561 << 2)
    ctx->pc = 0x23DA64u;
    {
        const bool branch_taken_0x23da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA64u;
        // 0x23da68: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da64) {
            ctx->pc = 0x23EFECu;
            goto label_23efec;
        }
    }
    ctx->pc = 0x23DA6Cu;
    // 0x23da6c: 0x0  nop
    ctx->pc = 0x23da6cu;
    // NOP
label_23da70:
    // 0x23da70: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x23da74: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x23da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x23da78: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da7c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23da80: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x23da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x23da84: 0x0  nop
    ctx->pc = 0x23da84u;
    // NOP
label_23da88:
    // 0x23da88: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x23da88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da8c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x23da8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_23da90:
    // 0x23da90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23da94: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23da98: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x23da9c: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x23daa0: 0x8c670820  lw          $a3, 0x820($v1)
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x290820u));
    // 0x23daa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23daa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23daa8: 0xc08e8d2  jal         func_23A348
    ctx->pc = 0x23DAA8u;
    SET_GPR_U32(ctx, 31, 0x23DAB0u);
    ctx->pc = 0x23DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAA8u;
    // 0x23daac: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A348u, 0x23DAA8u, 0x23DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAB0u;
label_23dab0:
    // 0x23dab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dab4: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DAB4u;
    {
        const bool branch_taken_0x23dab4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23dab4) {
            ctx->pc = 0x23DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAB4u;
            // 0x23dab8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DAD0u;
            goto label_23dad0;
        }
    }
    ctx->pc = 0x23DABCu;
    // 0x23dabc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x23dac0: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x23DAC0u;
    {
        const bool branch_taken_0x23dac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dac0) {
            ctx->pc = 0x23DA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da90;
        }
    }
    ctx->pc = 0x23DAC8u;
    // 0x23dac8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23dacc: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_23dad0:
    // 0x23dad0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23DAD0u;
    {
        const bool branch_taken_0x23dad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dad0) {
            ctx->pc = 0x23DB2Cu;
            goto label_23db2c;
        }
    }
    ctx->pc = 0x23DAD8u;
    // 0x23dad8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x23dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x23dadc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23dae0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23dae4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23dae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23daec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23daf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23daf4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23daf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23daf8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23dafc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DAFCu;
    {
        const bool branch_taken_0x23dafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAFCu;
        // 0x23db00: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dafc) {
            ctx->pc = 0x23DB20u;
            goto label_23db20;
        }
    }
    ctx->pc = 0x23DB04u;
    // 0x23db04: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23db08: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23DB08u;
    SET_GPR_U32(ctx, 31, 0x23DB10u);
    ctx->pc = 0x23DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB08u;
    // 0x23db0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23DB08u, 0x23DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB10u;
label_23db10:
    // 0x23db10: 0x14400530  bnez        $v0, . + 4 + (0x530 << 2)
    ctx->pc = 0x23DB10u;
    {
        const bool branch_taken_0x23db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db10) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23DB18u;
    // 0x23db18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23db1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23db1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23db20:
    // 0x23db20: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23db20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23db24: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x23db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x23db28: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x23db28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_23db2c:
    // 0x23db2c: 0x1a000521  blez        $s0, . + 4 + (0x521 << 2)
    ctx->pc = 0x23DB2Cu;
    {
        const bool branch_taken_0x23db2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB2Cu;
        // 0x23db30: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db2c) {
            ctx->pc = 0x23EFB4u;
            goto label_23efb4;
        }
    }
    ctx->pc = 0x23DB34u;
    // 0x23db34: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23db34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x23db38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23db3c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x23db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x23db40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23db40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db44: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x23db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x23db48: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23db4c:
    // 0x23db4c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23db4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23db50:
    // 0x23db50: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x23db50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x23db54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23db58: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_23db5c:
    // 0x23db5c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_23db60:
    // 0x23db60: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x23db64: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x23DB64u;
    {
        const bool branch_taken_0x23db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB64u;
        // 0x23db68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db64) {
            ctx->pc = 0x23E230u;
            goto label_23e230;
        }
    }
    ctx->pc = 0x23DB6Cu;
    // 0x23db6c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x23db70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23db74: 0x8c63e570  lw          $v1, -0x1A90($v1)
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960496)));
    // 0x23db78: 0x600008  jr          $v1
    ctx->pc = 0x23DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DB80u: goto label_23db80;
            case 0x23DB98u: goto label_23db98;
            case 0x23DBA0u: goto label_23dba0;
            case 0x23DBBCu: goto label_23dbbc;
            case 0x23DBC8u: goto label_23dbc8;
            case 0x23DBD8u: goto label_23dbd8;
            case 0x23DC58u: goto label_23dc58;
            case 0x23DC60u: goto label_23dc60;
            case 0x23DC98u: goto label_23dc98;
            case 0x23DCA0u: goto label_23dca0;
            case 0x23DCA8u: goto label_23dca8;
            case 0x23DCBCu: goto label_23dcbc;
            case 0x23DCD0u: goto label_23dcd0;
            case 0x23DCF0u: goto label_23dcf0;
            case 0x23DCF4u: goto label_23dcf4;
            case 0x23DD48u: goto label_23dd48;
            case 0x23DF28u: goto label_23df28;
            case 0x23DF88u: goto label_23df88;
            case 0x23DF8Cu: goto label_23df8c;
            case 0x23DFD0u: goto label_23dfd0;
            case 0x23DFF8u: goto label_23dff8;
            case 0x23E058u: goto label_23e058;
            case 0x23E05Cu: goto label_23e05c;
            case 0x23E0A0u: goto label_23e0a0;
            case 0x23E0B0u: goto label_23e0b0;
            case 0x23E230u: goto label_23e230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23DB80u;
label_23db80:
    // 0x23db80: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x23db84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x23DB84u;
    {
        const bool branch_taken_0x23db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23db84) {
            ctx->pc = 0x23DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB84u;
            // 0x23db88: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DB8Cu;
    // 0x23db8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23DB8Cu;
    {
        const bool branch_taken_0x23db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db8c) {
            ctx->pc = 0x23DBCCu;
            goto label_23dbcc;
        }
    }
    ctx->pc = 0x23DB94u;
    // 0x23db94: 0x0  nop
    ctx->pc = 0x23db94u;
    // NOP
label_23db98:
    // 0x23db98: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x23DB98u;
    {
        const bool branch_taken_0x23db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB98u;
        // 0x23db9c: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBA0u;
label_23dba0:
    // 0x23dba0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dba4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dbac: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x23DBACu;
    {
        const bool branch_taken_0x23dbac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBACu;
        // 0x23dbb0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbac) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBB4u;
    // 0x23dbb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x23dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23dbb8: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x23dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_23dbbc:
    // 0x23dbbc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x23DBBCu;
    {
        const bool branch_taken_0x23dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBBCu;
        // 0x23dbc0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBC4u;
    // 0x23dbc4: 0x0  nop
    ctx->pc = 0x23dbc4u;
    // NOP
label_23dbc8:
    // 0x23dbc8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23dbcc:
    // 0x23dbcc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23dbccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dbd0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x23DBD0u;
    {
        const bool branch_taken_0x23dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD0u;
        // 0x23dbd4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbd0) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dbdc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23dbe0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DBE0u;
    {
        const bool branch_taken_0x23dbe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE0u;
        // 0x23dbe4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbe0) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DBE8u;
    // 0x23dbe8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dbf0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbf4: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x23dbf8: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x23DBF8u;
    {
        const bool branch_taken_0x23dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF8u;
        // 0x23dbfc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbf8) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC00u;
    // 0x23dc00: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x23DC00u;
    {
        const bool branch_taken_0x23dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC00u;
        // 0x23dc04: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc00) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC08u;
label_23dc08:
    // 0x23dc08: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23DC40u;
            goto label_23dc40;
        }
    }
    ctx->pc = 0x23DC18u;
label_23dc18:
    // 0x23dc18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23dc1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23dc20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dc24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc28: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dc2c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x23dc30: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23DC38u;
    {
        const bool branch_taken_0x23dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc38) {
            ctx->pc = 0x23DC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc18;
        }
    }
    ctx->pc = 0x23DC40u;
label_23dc40:
    // 0x23dc40: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dc40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc44: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x23dc48: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x23DC48u;
    {
        const bool branch_taken_0x23dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc48) {
            ctx->pc = 0x23DC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC48u;
            // 0x23dc4c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC50u;
    // 0x23dc50: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x23DC50u;
    {
        const bool branch_taken_0x23dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC50u;
        // 0x23dc54: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc50) {
            ctx->pc = 0x23DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db60;
        }
    }
    ctx->pc = 0x23DC58u;
label_23dc58:
    // 0x23dc58: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x23DC58u;
    {
        const bool branch_taken_0x23dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC58u;
        // 0x23dc5c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc58) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC60u;
label_23dc60:
    // 0x23dc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc64: 0x0  nop
    ctx->pc = 0x23dc64u;
    // NOP
label_23dc68:
    // 0x23dc68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23dc6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23dc70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23dc74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc78: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dc7c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x23dc80: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x23dc84: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23dc88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC88u;
        // 0x23dc8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc68;
        }
    }
    ctx->pc = 0x23DC90u;
    // 0x23dc90: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x23DC90u;
    {
        const bool branch_taken_0x23dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC90u;
        // 0x23dc94: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc90) {
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC98u;
label_23dc98:
    // 0x23dc98: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC98u;
        // 0x23dc9c: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA0u;
label_23dca0:
    // 0x23dca0: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x23DCA0u;
    {
        const bool branch_taken_0x23dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA0u;
        // 0x23dca4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dca0) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA8u;
label_23dca8:
    // 0x23dca8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23dca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23dcac: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x23dcb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCB0u;
    {
        const bool branch_taken_0x23dcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB0u;
        // 0x23dcb4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb0) {
            ctx->pc = 0x23DCC8u;
            goto label_23dcc8;
        }
    }
    ctx->pc = 0x23DCB8u;
    // 0x23dcb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23dcbc:
    // 0x23dcbc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x23DCBCu;
    {
        const bool branch_taken_0x23dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCC4u;
    // 0x23dcc4: 0x0  nop
    ctx->pc = 0x23dcc4u;
    // NOP
label_23dcc8:
    // 0x23dcc8: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x23DCC8u;
    {
        const bool branch_taken_0x23dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC8u;
        // 0x23dccc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcc8) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DCD0u;
label_23dcd0:
    // 0x23dcd0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dcd4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dcd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23dcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dcdc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23dce0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dce4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x23DCE4u;
    {
        const bool branch_taken_0x23dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dce4) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23DCECu;
    // 0x23dcec: 0x0  nop
    ctx->pc = 0x23dcecu;
    // NOP
label_23dcf0:
    // 0x23dcf0: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23dcf4:
    // 0x23dcf4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23dcf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCF8u;
    {
        const bool branch_taken_0x23dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf8) {
            ctx->pc = 0x23DD10u;
            goto label_23dd10;
        }
    }
    ctx->pc = 0x23DD00u;
    // 0x23dd00: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23DD04u;
    {
        const bool branch_taken_0x23dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD04u;
        // 0x23dd08: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd04) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD0Cu;
    // 0x23dd0c: 0x0  nop
    ctx->pc = 0x23dd0cu;
    // NOP
label_23dd10:
    // 0x23dd10: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23dd14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD14u;
    {
        const bool branch_taken_0x23dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD14u;
        // 0x23dd18: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd14) {
            ctx->pc = 0x23DD28u;
            goto label_23dd28;
        }
    }
    ctx->pc = 0x23DD1Cu;
    // 0x23dd1c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23DD20u;
    {
        const bool branch_taken_0x23dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD20u;
        // 0x23dd24: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd20) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD28u;
label_23dd28:
    // 0x23dd28: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dd2c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dd30:
    // 0x23dd30: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x23DD30u;
    {
        const bool branch_taken_0x23dd30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x23DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD30u;
        // 0x23dd34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd30) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD38u;
    // 0x23dd38: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23dd3c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x23dd3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x23dd40: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x23DD40u;
    {
        const bool branch_taken_0x23dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd40) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dd4c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD4Cu;
    {
        const bool branch_taken_0x23dd4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd4c) {
            ctx->pc = 0x23DD60u;
            goto label_23dd60;
        }
    }
    ctx->pc = 0x23DD54u;
    // 0x23dd54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23DD54u;
    {
        const bool branch_taken_0x23dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd54) {
            ctx->pc = 0x23DD78u;
            goto label_23dd78;
        }
    }
    ctx->pc = 0x23DD5Cu;
    // 0x23dd5c: 0x0  nop
    ctx->pc = 0x23dd5cu;
    // NOP
label_23dd60:
    // 0x23dd60: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DD60u;
    {
        const bool branch_taken_0x23dd60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD60u;
        // 0x23dd64: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd60) {
            ctx->pc = 0x23DD70u;
            goto label_23dd70;
        }
    }
    ctx->pc = 0x23DD68u;
    // 0x23dd68: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD68u;
    {
        const bool branch_taken_0x23dd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD68u;
        // 0x23dd6c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd68) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD70u;
label_23dd70:
    // 0x23dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dd74: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x23dd74u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_23dd78:
    // 0x23dd78: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x23dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_23dd7c:
    // 0x23dd7c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd80: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x23dd80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dd84: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x23dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x23dd88: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23dd8c: 0xc06d338  jal         func_1B4CE0
    ctx->pc = 0x23DD8Cu;
    SET_GPR_U32(ctx, 31, 0x23DD94u);
    ctx->pc = 0x23DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD8Cu;
    // 0x23dd90: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CE0u, 0x23DD8Cu, 0x23DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD94u;
label_23dd94:
    // 0x23dd94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23DD94u;
    {
        const bool branch_taken_0x23dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd94) {
            ctx->pc = 0x23DDD0u;
            goto label_23ddd0;
        }
    }
    ctx->pc = 0x23DD9Cu;
    // 0x23dd9c: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23dda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dda4: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23DDA4u;
    SET_GPR_U32(ctx, 31, 0x23DDACu);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23DDA4u, 0x23DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDACu;
label_23ddac:
    // 0x23ddac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDACu;
    {
        const bool branch_taken_0x23ddac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddac) {
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DDB4u;
    // 0x23ddb4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23ddb8: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x23ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ddbc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23ddc0:
    // 0x23ddc0: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ddc4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x23DDC4u;
    {
        const bool branch_taken_0x23ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x2455e4f0  addiu       $s5, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc4) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DDCCu;
    // 0x23ddcc: 0x0  nop
    ctx->pc = 0x23ddccu;
    // NOP
label_23ddd0:
    // 0x23ddd0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23ddd4: 0xc06d34a  jal         func_1B4D28
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x1B4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D28u, 0x23DDD4u, 0x23DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDDCu;
    {
        const bool branch_taken_0x23dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dddc) {
            ctx->pc = 0x23DDF0u;
            goto label_23ddf0;
        }
    }
    ctx->pc = 0x23DDE4u;
    // 0x23dde4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23dde8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x23DDE8u;
    {
        const bool branch_taken_0x23dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2455e4f8  addiu       $s5, $v0, -0x1B08 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dde8) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DDF0u;
label_23ddf0:
    // 0x23ddf0: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x23ddf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x23ddf4: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x23ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x23ddf8: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x23ddf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23ddfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de00: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x23de00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de04: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x23de04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x23de08: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x23de0c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x23de0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de10: 0xc08fc06  jal         func_23F018
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x23DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE10u;
    // 0x23de14: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F018u, 0x23DE10u, 0x23DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de1c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x23de20: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DE20u;
    {
        const bool branch_taken_0x23de20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE20u;
        // 0x23de24: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de20) {
            ctx->pc = 0x23DE30u;
            goto label_23de30;
        }
    }
    ctx->pc = 0x23DE28u;
    // 0x23de28: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE28u;
        // 0x23de2c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE30u;
label_23de30:
    // 0x23de30: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23de30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23de34: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x23de34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x23de38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DE38u;
    {
        const bool branch_taken_0x23de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de38) {
            ctx->pc = 0x23DE50u;
            goto label_23de50;
        }
    }
    ctx->pc = 0x23DE40u;
    // 0x23de40: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x23de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23de44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DE44u;
    {
        const bool branch_taken_0x23de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de44) {
            ctx->pc = 0x23DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE44u;
            // 0x23de48: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE4Cu;
    // 0x23de4c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x23de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_23de50:
    // 0x23de50: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x23de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x23de54: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x23de58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23de58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de5c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x23de5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_23de60:
    // 0x23de60: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x23de60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x23de64: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23DE64u;
    {
        const bool branch_taken_0x23de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de64) {
            ctx->pc = 0x23DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE64u;
            // 0x23de68: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DEB0u;
            goto label_23deb0;
        }
    }
    ctx->pc = 0x23DE6Cu;
    // 0x23de6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23de70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23de70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de7c: 0xc08fc76  jal         func_23F1D8
    ctx->pc = 0x23DE7Cu;
    SET_GPR_U32(ctx, 31, 0x23DE84u);
    ctx->pc = 0x23DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE7Cu;
    // 0x23de80: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1D8u, 0x23DE7Cu, 0x23DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE84u;
label_23de84:
    // 0x23de84: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x23de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x23de88: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23de8c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x23de90: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x23de90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23de94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DE94u;
    {
        const bool branch_taken_0x23de94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE94u;
        // 0x23de98: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de94) {
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE9Cu;
    // 0x23de9c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23dea0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23DEA0u;
    {
        const bool branch_taken_0x23dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea0) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DEA8u;
label_23dea8:
    // 0x23dea8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23DEA8u;
    {
        const bool branch_taken_0x23dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA8u;
        // 0x23deac: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEB0u;
label_23deb0:
    // 0x23deb0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DEB0u;
    {
        const bool branch_taken_0x23deb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb0) {
            ctx->pc = 0x23DEE0u;
            goto label_23dee0;
        }
    }
    ctx->pc = 0x23DEB8u;
    // 0x23deb8: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x23DEB8u;
    {
        const bool branch_taken_0x23deb8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEC0u;
    // 0x23dec0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DEC0u;
    {
        const bool branch_taken_0x23dec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC0u;
        // 0x23dec4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec0) {
            ctx->pc = 0x23DED4u;
            goto label_23ded4;
        }
    }
    ctx->pc = 0x23DEC8u;
    // 0x23dec8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23decc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23DECCu;
    {
        const bool branch_taken_0x23decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23decc) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DED4u;
label_23ded4:
    // 0x23ded4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x23ded8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23DED8u;
    {
        const bool branch_taken_0x23ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DED8u;
        // 0x23dedc: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ded8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEE0u;
label_23dee0:
    // 0x23dee0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x23dee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23dee4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEE4u;
    {
        const bool branch_taken_0x23dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee4) {
            ctx->pc = 0x23DF00u;
            goto label_23df00;
        }
    }
    ctx->pc = 0x23DEECu;
    // 0x23deec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DEECu;
    {
        const bool branch_taken_0x23deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deec) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEF4u;
    // 0x23def4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEFCu;
    // 0x23defc: 0x0  nop
    ctx->pc = 0x23defcu;
    // NOP
label_23df00:
    // 0x23df00: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DF00u;
    {
        const bool branch_taken_0x23df00 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x23df00) {
            ctx->pc = 0x23DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF00u;
            // 0x23df04: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DF08u;
    // 0x23df08: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23df0c: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_23df10:
    // 0x23df10: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_23df14:
    // 0x23df14: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x23DF14u;
    {
        const bool branch_taken_0x23df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF14u;
        // 0x23df18: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df14) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DF1Cu;
    // 0x23df1c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DF24u;
    // 0x23df24: 0x0  nop
    ctx->pc = 0x23df24u;
    // NOP
label_23df28:
    // 0x23df28: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23df2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DF2Cu;
    {
        const bool branch_taken_0x23df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df2c) {
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DF34u;
    // 0x23df34: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23df34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df38: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df40: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df44: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x23DF44u;
    {
        const bool branch_taken_0x23df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF44u;
        // 0x23df48: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df44) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da88;
        }
    }
    ctx->pc = 0x23DF4Cu;
    // 0x23df4c: 0x0  nop
    ctx->pc = 0x23df4cu;
    // NOP
label_23df50:
    // 0x23df50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DF50u;
    {
        const bool branch_taken_0x23df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF50u;
        // 0x23df54: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df50) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF58u;
    // 0x23df58: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df60: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df64: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x23DF64u;
    {
        const bool branch_taken_0x23df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF64u;
        // 0x23df68: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df64) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da88;
        }
    }
    ctx->pc = 0x23DF6Cu;
    // 0x23df6c: 0x0  nop
    ctx->pc = 0x23df6cu;
    // NOP
label_23df70:
    // 0x23df70: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df78: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23df7c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da88;
        }
    }
    ctx->pc = 0x23DF84u;
    // 0x23df84: 0x0  nop
    ctx->pc = 0x23df84u;
    // NOP
label_23df88:
    // 0x23df88: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23df88u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23df8c:
    // 0x23df8c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23df90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF90u;
    {
        const bool branch_taken_0x23df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF90u;
        // 0x23df94: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df90) {
            ctx->pc = 0x23DFA8u;
            goto label_23dfa8;
        }
    }
    ctx->pc = 0x23DF98u;
    // 0x23df98: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23df9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23DF9Cu;
    {
        const bool branch_taken_0x23df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF9Cu;
        // 0x23dfa0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df9c) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFA4u;
    // 0x23dfa4: 0x0  nop
    ctx->pc = 0x23dfa4u;
    // NOP
label_23dfa8:
    // 0x23dfa8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23dfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DFACu;
    {
        const bool branch_taken_0x23dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFACu;
        // 0x23dfb0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfac) {
            ctx->pc = 0x23DFC0u;
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DFB4u;
    // 0x23dfb4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23DFB8u;
    {
        const bool branch_taken_0x23dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb8) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfc4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23dfc4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dfc8:
    // 0x23dfc8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x23DFC8u;
    {
        const bool branch_taken_0x23dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC8u;
        // 0x23dfcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfc8) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFD0u;
label_23dfd0:
    // 0x23dfd0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23dfd4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfd8: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
    // 0x23dfdc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dfe0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23dfe4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x23dfe8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x23dfec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23dff0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x23DFF0u;
    {
        const bool branch_taken_0x23dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff0) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFF8u;
label_23dff8:
    // 0x23dff8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dffc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x23dffcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e000: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E000u;
    {
        const bool branch_taken_0x23e000 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E000u;
        // 0x23e004: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e000) {
            ctx->pc = 0x23E010u;
            goto label_23e010;
        }
    }
    ctx->pc = 0x23E008u;
    // 0x23e008: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e00c: 0x2455e518  addiu       $s5, $v0, -0x1AE8
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960408));
label_23e010:
    // 0x23e010: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x23E010u;
    {
        const bool branch_taken_0x23e010 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e010) {
            ctx->pc = 0x23E048u;
            goto label_23e048;
        }
    }
    ctx->pc = 0x23E018u;
    // 0x23e018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e01c: 0xc08e8e0  jal         func_23A380
    ctx->pc = 0x23E01Cu;
    SET_GPR_U32(ctx, 31, 0x23E024u);
    ctx->pc = 0x23E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E01Cu;
    // 0x23e020: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A380u, 0x23E01Cu, 0x23E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E024u;
label_23e024:
    // 0x23e024: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x23E024u;
    {
        const bool branch_taken_0x23e024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E024u;
        // 0x23e028: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e024) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E02Cu;
    // 0x23e02c: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e030: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x23e034: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E034u;
            // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x23E03Cu;
    {
        const bool branch_taken_0x23e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e03c) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E044u;
    // 0x23e044: 0x0  nop
    ctx->pc = 0x23e044u;
    // NOP
label_23e048:
    // 0x23e048: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E048u;
    // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x23E048u, 0x23E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23e05c:
    // 0x23e05c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23e060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E078u;
            goto label_23e078;
        }
    }
    ctx->pc = 0x23E068u;
    // 0x23e068: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e06c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E074u;
    // 0x23e074: 0x0  nop
    ctx->pc = 0x23e074u;
    // NOP
label_23e078:
    // 0x23e078: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23e07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E07Cu;
    {
        const bool branch_taken_0x23e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e07c) {
            ctx->pc = 0x23E090u;
            goto label_23e090;
        }
    }
    ctx->pc = 0x23E084u;
    // 0x23e084: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E088u;
    {
        const bool branch_taken_0x23e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e088) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E090u;
label_23e090:
    // 0x23e090: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e094: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e094u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e098:
    // 0x23e098: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E0A0u;
label_23e0a0:
    // 0x23e0a0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0A4u;
    {
        const bool branch_taken_0x23e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a4) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23E0ACu;
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
label_23e0b0:
    // 0x23e0b0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e0b4: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
label_23e0b8:
    // 0x23e0b8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x23e0bc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x23e0c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0C0u;
    {
        const bool branch_taken_0x23e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c0) {
            ctx->pc = 0x23E0D8u;
            goto label_23e0d8;
        }
    }
    ctx->pc = 0x23E0C8u;
    // 0x23e0c8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23E0CCu;
    {
        const bool branch_taken_0x23e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0cc) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0D4u;
    // 0x23e0d4: 0x0  nop
    ctx->pc = 0x23e0d4u;
    // NOP
label_23e0d8:
    // 0x23e0d8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x23e0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0DCu;
    {
        const bool branch_taken_0x23e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0dc) {
            ctx->pc = 0x23E0F0u;
            goto label_23e0f0;
        }
    }
    ctx->pc = 0x23E0E4u;
    // 0x23e0e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E0E8u;
    {
        const bool branch_taken_0x23e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e8) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x23e0f4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e0f4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e0f8:
    // 0x23e0f8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23e0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E0FCu;
    {
        const bool branch_taken_0x23e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0fc) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E104u;
    // 0x23e104: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x23e108: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x23e108u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_23e10c:
    // 0x23e10c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e110:
    // 0x23e110: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E110u;
    {
        const bool branch_taken_0x23e110 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e110) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E118u;
    // 0x23e118: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x23e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x23e11c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x23e11cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_23e120:
    // 0x23e120: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E128u;
    // 0x23e128: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x23e12c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e138: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23E138u;
    {
        const bool branch_taken_0x23e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e138) {
            ctx->pc = 0x23E1D4u;
            goto label_23e1d4;
        }
    }
    ctx->pc = 0x23E140u;
    // 0x23e140: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E148u;
    // 0x23e148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e14c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E1F0u;
            goto label_23e1f0;
        }
    }
    ctx->pc = 0x23E154u;
    // 0x23e154: 0x2455e538  addiu       $s5, $v0, -0x1AC8
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960440));
    // 0x23e158: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x23E158u, 0x23E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x23e16c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x23e170: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e170u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x23e174: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e178: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e17c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E184u;
    // 0x23e184: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23e188: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23E188u;
    {
        const bool branch_taken_0x23e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e188) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E190u;
    // 0x23e190: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E190u;
            // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E198u;
    // 0x23e198: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e19c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23E19Cu;
    {
        const bool branch_taken_0x23e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e19c) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1A4u;
    // 0x23e1a4: 0x0  nop
    ctx->pc = 0x23e1a4u;
    // NOP
label_23e1a8:
    // 0x23e1a8: 0xc06d9fe  jal         func_1B67F8
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67F8u, 0x23E1A8u, 0x23E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1b4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e1b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x23e1b8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e1c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e1c4: 0xc06d89e  jal         func_1B6278
    ctx->pc = 0x23E1C4u;
    SET_GPR_U32(ctx, 31, 0x23E1CCu);
    ctx->pc = 0x23E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C4u;
    // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6278u, 0x23E1C4u, 0x23E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1CCu;
label_23e1cc:
    // 0x23e1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1d0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23e1d4:
    // 0x23e1d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1a8;
        }
    }
    ctx->pc = 0x23E1DCu;
    // 0x23e1dc: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x23e1dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x23e1e0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e1e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e1e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23E1E8u;
    {
        const bool branch_taken_0x23e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1e8) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1F0u;
label_23e1f0:
    // 0x23e1f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e1f4: 0x0  nop
    ctx->pc = 0x23e1f4u;
    // NOP
label_23e1f8:
    // 0x23e1f8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x23e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x23e1fc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x23e200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23e204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23e208: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23e20c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e210: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x23e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x23e214: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e218: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23E218u;
    {
        const bool branch_taken_0x23e218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e218) {
            ctx->pc = 0x23E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1f8;
        }
    }
    ctx->pc = 0x23E220u;
label_23e220:
    // 0x23e220: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x23e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_23e224:
    // 0x23e224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E22Cu;
    // 0x23e22c: 0x0  nop
    ctx->pc = 0x23e22cu;
    // NOP
label_23e230:
    // 0x23e230: 0x1220035f  beqz        $s1, . + 4 + (0x35F << 2)
    ctx->pc = 0x23E230u;
    {
        const bool branch_taken_0x23e230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e230) {
            ctx->pc = 0x23EFB0u;
            goto label_23efb0;
        }
    }
    ctx->pc = 0x23E238u;
    // 0x23e238: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e23c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x23e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_23e240:
    // 0x23e240: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e244:
    // 0x23e244: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x23e248: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23e248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e24c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23e24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e250: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x23e254: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x23e254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23e258: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x23e258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x23e25c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x23e25cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x23e260: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x23e260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
    // 0x23e264: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E264u;
    {
        const bool branch_taken_0x23e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E264u;
        // 0x23e268: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e264) {
            ctx->pc = 0x23E278u;
            goto label_23e278;
        }
    }
    ctx->pc = 0x23E26Cu;
    // 0x23e26c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23e270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E270u;
    {
        const bool branch_taken_0x23e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E270u;
        // 0x23e274: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e270) {
            ctx->pc = 0x23E288u;
            goto label_23e288;
        }
    }
    ctx->pc = 0x23E278u;
label_23e278:
    // 0x23e278: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x23e27c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x23e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x23e280: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e284: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x23e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
label_23e288:
    // 0x23e288: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x23e288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
    // 0x23e28c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x23E28Cu;
    {
        const bool branch_taken_0x23e28c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E28Cu;
        // 0x23e290: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e28c) {
            ctx->pc = 0x23E378u;
            goto label_23e378;
        }
    }
    ctx->pc = 0x23E294u;
    // 0x23e294: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x23e294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x23e298: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x23e29c: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23e2a0: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23E2A0u;
    {
        const bool branch_taken_0x23e2a0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A0u;
        // 0x23e2a4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2a0) {
            ctx->pc = 0x23E378u;
            goto label_23e378;
        }
    }
    ctx->pc = 0x23E2A8u;
    // 0x23e2a8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E2A8u;
    {
        const bool branch_taken_0x23e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A8u;
        // 0x23e2ac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2a8) {
            ctx->pc = 0x23E328u;
            goto label_23e328;
        }
    }
    ctx->pc = 0x23E2B0u;
    // 0x23e2b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e2b4: 0x24f4e4d0  addiu       $s4, $a3, -0x1B30
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
    // 0x23e2b8: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x23e2bc: 0x0  nop
    ctx->pc = 0x23e2bcu;
    // NOP
label_23e2c0:
    // 0x23e2c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x23e2c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e2c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e2d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e2d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23e2d8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e2d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e2dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e2e0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E2E0u;
    {
        const bool branch_taken_0x23e2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E0u;
        // 0x23e2e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2e0) {
            ctx->pc = 0x23E310u;
            goto label_23e310;
        }
    }
    ctx->pc = 0x23E2E8u;
    // 0x23e2e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e2ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e2f0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x23e2f4: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E2F4u;
    SET_GPR_U32(ctx, 31, 0x23E2FCu);
    ctx->pc = 0x23E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2F4u;
    // 0x23e2f8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E2F4u, 0x23E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2FCu;
label_23e2fc:
    // 0x23e2fc: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e2fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x23e300: 0x14400333  bnez        $v0, . + 4 + (0x333 << 2)
    ctx->pc = 0x23E300u;
    {
        const bool branch_taken_0x23e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E300u;
        // 0x23e304: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e300) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E308u;
    // 0x23e308: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e30c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e310:
    // 0x23e310: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23e314: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e318: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23E318u;
    {
        const bool branch_taken_0x23e318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e318) {
            ctx->pc = 0x23E31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E318u;
            // 0x23e31c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e2c0;
        }
    }
    ctx->pc = 0x23E320u;
    // 0x23e320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E320u;
    {
        const bool branch_taken_0x23e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e320) {
            ctx->pc = 0x23E32Cu;
            goto label_23e32c;
        }
    }
    ctx->pc = 0x23E328u;
label_23e328:
    // 0x23e328: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e32c:
    // 0x23e32c: 0x24e2e4d0  addiu       $v0, $a3, -0x1B30
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
    // 0x23e330: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e334: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e338: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e33c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e344: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e348: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e34c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e350: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E350u;
    {
        const bool branch_taken_0x23e350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E350u;
        // 0x23e354: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e350) {
            ctx->pc = 0x23E374u;
            goto label_23e374;
        }
    }
    ctx->pc = 0x23E358u;
    // 0x23e358: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e35c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E35Cu;
    SET_GPR_U32(ctx, 31, 0x23E364u);
    ctx->pc = 0x23E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E35Cu;
    // 0x23e360: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E35Cu, 0x23E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E364u;
label_23e364:
    // 0x23e364: 0x1440031b  bnez        $v0, . + 4 + (0x31B << 2)
    ctx->pc = 0x23E364u;
    {
        const bool branch_taken_0x23e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E364u;
        // 0x23e368: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e364) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E36Cu;
    // 0x23e36c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e374:
    // 0x23e374: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x23e374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e378:
    // 0x23e378: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23E378u;
    {
        const bool branch_taken_0x23e378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E378u;
        // 0x23e37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e378) {
            ctx->pc = 0x23E3D0u;
            goto label_23e3d0;
        }
    }
    ctx->pc = 0x23E380u;
    // 0x23e380: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x23e384: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23e384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x23e388: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23e388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x23e38c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e38cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e390: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e39c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e3a0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e3a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e3a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e3a8: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23E3A8u;
    {
        const bool branch_taken_0x23e3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A8u;
        // 0x23e3ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3a8) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3B0u;
    // 0x23e3b0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e3b4: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E3B4u;
    SET_GPR_U32(ctx, 31, 0x23E3BCu);
    ctx->pc = 0x23E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3B4u;
    // 0x23e3b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E3B4u, 0x23E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3BCu;
label_23e3bc:
    // 0x23e3bc: 0x14400305  bnez        $v0, . + 4 + (0x305 << 2)
    ctx->pc = 0x23E3BCu;
    {
        const bool branch_taken_0x23e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3BCu;
        // 0x23e3c0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3bc) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E3C4u;
    // 0x23e3c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e3c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23E3C8u;
    {
        const bool branch_taken_0x23e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3C8u;
        // 0x23e3cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3c8) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3D0u;
label_23e3d0:
    // 0x23e3d0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x23e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x23e3d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23E3D4u;
    {
        const bool branch_taken_0x23e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3D4u;
        // 0x23e3d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3d4) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3DCu;
    // 0x23e3dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e3e0: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x23e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e3e4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x23e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x23e3e8: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x23e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
    // 0x23e3ec: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x23e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x23e3f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x23e3f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e3f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e3f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e3fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e404: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23e408: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e408u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e40c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e410: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E410u;
    {
        const bool branch_taken_0x23e410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E410u;
        // 0x23e414: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e410) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E418u;
    // 0x23e418: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e41c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E41Cu;
    SET_GPR_U32(ctx, 31, 0x23E424u);
    ctx->pc = 0x23E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E41Cu;
    // 0x23e420: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E41Cu, 0x23E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x144002eb  bnez        $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x23E424u;
    {
        const bool branch_taken_0x23e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E424u;
        // 0x23e428: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e424) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E42Cu;
    // 0x23e42c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e430: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e434:
    // 0x23e434: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x23e438: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e43c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23E43Cu;
    {
        const bool branch_taken_0x23e43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E43Cu;
        // 0x23e440: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e43c) {
            ctx->pc = 0x23E528u;
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E444u;
    // 0x23e444: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x23e448: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x23e448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x23e44c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23e450: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23E450u;
    {
        const bool branch_taken_0x23e450 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E450u;
        // 0x23e454: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e450) {
            ctx->pc = 0x23E528u;
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E458u;
    // 0x23e458: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e45c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23E45Cu;
    {
        const bool branch_taken_0x23e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E45Cu;
        // 0x23e460: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e45c) {
            ctx->pc = 0x23E4D8u;
            goto label_23e4d8;
        }
    }
    ctx->pc = 0x23E464u;
    // 0x23e464: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e468: 0x24f4e4e0  addiu       $s4, $a3, -0x1B20
    ctx->pc = 0x23e468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e46c: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_23e470:
    // 0x23e470: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x23e474: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e478: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e47c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e484: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23e488: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e488u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e48c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e490: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E490u;
    {
        const bool branch_taken_0x23e490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E490u;
        // 0x23e494: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e490) {
            ctx->pc = 0x23E4C0u;
            goto label_23e4c0;
        }
    }
    ctx->pc = 0x23E498u;
    // 0x23e498: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e49c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e4a0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x23e4a4: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E4A4u;
    SET_GPR_U32(ctx, 31, 0x23E4ACu);
    ctx->pc = 0x23E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4A4u;
    // 0x23e4a8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E4A4u, 0x23E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4ACu;
label_23e4ac:
    // 0x23e4ac: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e4acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x23e4b0: 0x144002c7  bnez        $v0, . + 4 + (0x2C7 << 2)
    ctx->pc = 0x23E4B0u;
    {
        const bool branch_taken_0x23e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4B0u;
        // 0x23e4b4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4b0) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E4B8u;
    // 0x23e4b8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e4bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e4c0:
    // 0x23e4c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23e4c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e4c8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23E4C8u;
    {
        const bool branch_taken_0x23e4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4c8) {
            ctx->pc = 0x23E4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4C8u;
            // 0x23e4cc: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e470;
        }
    }
    ctx->pc = 0x23E4D0u;
    // 0x23e4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E4DCu;
            goto label_23e4dc;
        }
    }
    ctx->pc = 0x23E4D8u;
label_23e4d8:
    // 0x23e4d8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e4dc:
    // 0x23e4dc: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e4e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e4e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e4e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e4ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e4f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e4f8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e4f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e4fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e500: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E500u;
    {
        const bool branch_taken_0x23e500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E500u;
        // 0x23e504: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e500) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E508u;
    // 0x23e508: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e50c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E50Cu;
    SET_GPR_U32(ctx, 31, 0x23E514u);
    ctx->pc = 0x23E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E50Cu;
    // 0x23e510: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E50Cu, 0x23E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E514u;
label_23e514:
    // 0x23e514: 0x144002af  bnez        $v0, . + 4 + (0x2AF << 2)
    ctx->pc = 0x23E514u;
    {
        const bool branch_taken_0x23e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E514u;
        // 0x23e518: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e514) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E51Cu;
    // 0x23e51c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e520: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e524:
    // 0x23e524: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x23e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e528:
    // 0x23e528: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x23e52c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x23E52Cu;
    {
        const bool branch_taken_0x23e52c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e52c) {
            ctx->pc = 0x23E608u;
            goto label_23e608;
        }
    }
    ctx->pc = 0x23E534u;
    // 0x23e534: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e538: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E538u;
    {
        const bool branch_taken_0x23e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E538u;
        // 0x23e53c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e538) {
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E540u;
    // 0x23e540: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e544: 0x24f4e4e0  addiu       $s4, $a3, -0x1B20
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e548: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x23e54c: 0x0  nop
    ctx->pc = 0x23e54cu;
    // NOP
label_23e550:
    // 0x23e550: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x23e554: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e558: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e55c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e564: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23e568: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e568u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e56c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e570: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E570u;
    {
        const bool branch_taken_0x23e570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E570u;
        // 0x23e574: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e570) {
            ctx->pc = 0x23E5A0u;
            goto label_23e5a0;
        }
    }
    ctx->pc = 0x23E578u;
    // 0x23e578: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e57c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e580: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x23e584: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E584u;
    SET_GPR_U32(ctx, 31, 0x23E58Cu);
    ctx->pc = 0x23E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E584u;
    // 0x23e588: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E584u, 0x23E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E58Cu;
label_23e58c:
    // 0x23e58c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e58cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x23e590: 0x1440028f  bnez        $v0, . + 4 + (0x28F << 2)
    ctx->pc = 0x23E590u;
    {
        const bool branch_taken_0x23e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E590u;
        // 0x23e594: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e590) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E598u;
    // 0x23e598: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e59c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e5a0:
    // 0x23e5a0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23e5a4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e5a8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23E5A8u;
    {
        const bool branch_taken_0x23e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5a8) {
            ctx->pc = 0x23E5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E5A8u;
            // 0x23e5ac: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e550;
        }
    }
    ctx->pc = 0x23E5B0u;
    // 0x23e5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E5B0u;
    {
        const bool branch_taken_0x23e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5b0) {
            ctx->pc = 0x23E5BCu;
            goto label_23e5bc;
        }
    }
    ctx->pc = 0x23E5B8u;
label_23e5b8:
    // 0x23e5b8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e5bc:
    // 0x23e5bc: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e5c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e5c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e5c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e5cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e5d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e5d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e5d8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e5d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e5dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e5e0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E5E0u;
    {
        const bool branch_taken_0x23e5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5E0u;
        // 0x23e5e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5e0) {
            ctx->pc = 0x23E604u;
            goto label_23e604;
        }
    }
    ctx->pc = 0x23E5E8u;
    // 0x23e5e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e5ec: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E5ECu;
    SET_GPR_U32(ctx, 31, 0x23E5F4u);
    ctx->pc = 0x23E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5ECu;
    // 0x23e5f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E5ECu, 0x23E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5F4u;
label_23e5f4:
    // 0x23e5f4: 0x14400277  bnez        $v0, . + 4 + (0x277 << 2)
    ctx->pc = 0x23E5F4u;
    {
        const bool branch_taken_0x23e5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5F4u;
        // 0x23e5f8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5f4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E5FCu;
    // 0x23e5fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e600: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e604:
    // 0x23e604: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x23e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
label_23e608:
    // 0x23e608: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E608u;
    {
        const bool branch_taken_0x23e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e608) {
            ctx->pc = 0x23E60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E608u;
            // 0x23e60c: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E630u;
            goto label_23e630;
        }
    }
    ctx->pc = 0x23E610u;
    // 0x23e610: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x23e610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
    // 0x23e614: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23e618: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e61c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e628: 0x1000020b  b           . + 4 + (0x20B << 2)
    ctx->pc = 0x23E628u;
    {
        const bool branch_taken_0x23e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E628u;
        // 0x23e62c: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e628) {
            ctx->pc = 0x23EE58u;
            goto label_23ee58;
        }
    }
    ctx->pc = 0x23E630u;
label_23e630:
    // 0x23e630: 0x1440017d  bnez        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x23E630u;
    {
        const bool branch_taken_0x23e630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E630u;
        // 0x23e634: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e630) {
            ctx->pc = 0x23EC28u;
            goto label_23ec28;
        }
    }
    ctx->pc = 0x23E638u;
    // 0x23e638: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23e638u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e640: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23E640u;
    SET_GPR_U32(ctx, 31, 0x23E648u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23E640u, 0x23E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E648u;
label_23e648:
    // 0x23e648: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x23E648u;
    {
        const bool branch_taken_0x23e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E648u;
        // 0x23e64c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e648) {
            ctx->pc = 0x23E7C8u;
            goto label_23e7c8;
        }
    }
    ctx->pc = 0x23E650u;
    // 0x23e650: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e654: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e658: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x23e65c: 0x2442e558  addiu       $v0, $v0, -0x1AA8
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
    // 0x23e660: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e664: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e668: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e66c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e678: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e67c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e680: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E680u;
    {
        const bool branch_taken_0x23e680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e680) {
            ctx->pc = 0x23E6A4u;
            goto label_23e6a4;
        }
    }
    ctx->pc = 0x23E688u;
    // 0x23e688: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e68c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E68Cu;
    SET_GPR_U32(ctx, 31, 0x23E694u);
    ctx->pc = 0x23E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E68Cu;
    // 0x23e690: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E68Cu, 0x23E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E694u;
label_23e694:
    // 0x23e694: 0x1440024f  bnez        $v0, . + 4 + (0x24F << 2)
    ctx->pc = 0x23E694u;
    {
        const bool branch_taken_0x23e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E694u;
        // 0x23e698: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e694) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E69Cu;
    // 0x23e69c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e6a0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e6a4:
    // 0x23e6a4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23e6a8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23e6ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23e6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e6b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E6B0u;
    {
        const bool branch_taken_0x23e6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e6b0) {
            ctx->pc = 0x23E6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6B0u;
            // 0x23e6b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E6C8u;
            goto label_23e6c8;
        }
    }
    ctx->pc = 0x23E6B8u;
    // 0x23e6b8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23e6bc: 0x104001f3  beqz        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x23E6BCu;
    {
        const bool branch_taken_0x23e6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6BCu;
        // 0x23e6c0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6bc) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23E6C4u;
    // 0x23e6c4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e6c8:
    // 0x23e6c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e6cc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x23e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x23e6d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e6d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x23e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x23e6dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e6e4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e6e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e6e8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e6ec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E6ECu;
    {
        const bool branch_taken_0x23e6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6ECu;
        // 0x23e6f0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6ec) {
            ctx->pc = 0x23E710u;
            goto label_23e710;
        }
    }
    ctx->pc = 0x23E6F4u;
    // 0x23e6f4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e6f8: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E6F8u;
    SET_GPR_U32(ctx, 31, 0x23E700u);
    ctx->pc = 0x23E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6F8u;
    // 0x23e6fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E6F8u, 0x23E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E700u;
label_23e700:
    // 0x23e700: 0x14400234  bnez        $v0, . + 4 + (0x234 << 2)
    ctx->pc = 0x23E700u;
    {
        const bool branch_taken_0x23e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E700u;
        // 0x23e704: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e700) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E708u;
    // 0x23e708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e70c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e710:
    // 0x23e710: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23e714: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x23e714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e718: 0x1a0001dc  blez        $s0, . + 4 + (0x1DC << 2)
    ctx->pc = 0x23E718u;
    {
        const bool branch_taken_0x23e718 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E718u;
        // 0x23e71c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e718) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23E720u;
    // 0x23e720: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e724: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23E724u;
    {
        const bool branch_taken_0x23e724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E724u;
        // 0x23e728: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e724) {
            ctx->pc = 0x23E798u;
            goto label_23e798;
        }
    }
    ctx->pc = 0x23E72Cu;
    // 0x23e72c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23e72cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e730: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e734: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23e734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23e738:
    // 0x23e738: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23e738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x23e73c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e740: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e74c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23e750: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e750u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e754: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e758: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E758u;
    {
        const bool branch_taken_0x23e758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E758u;
        // 0x23e75c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e758) {
            ctx->pc = 0x23E780u;
            goto label_23e780;
        }
    }
    ctx->pc = 0x23E760u;
    // 0x23e760: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e764: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e768: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E768u;
    SET_GPR_U32(ctx, 31, 0x23E770u);
    ctx->pc = 0x23E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E768u;
    // 0x23e76c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E768u, 0x23E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x14400217  bnez        $v0, . + 4 + (0x217 << 2)
    ctx->pc = 0x23E770u;
    {
        const bool branch_taken_0x23e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E770u;
        // 0x23e774: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e770) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E778u;
    // 0x23e778: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e77c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e780:
    // 0x23e780: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23e784: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e788: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23E788u;
    {
        const bool branch_taken_0x23e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e788) {
            ctx->pc = 0x23E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E788u;
            // 0x23e78c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e738;
        }
    }
    ctx->pc = 0x23E790u;
    // 0x23e790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E790u;
    {
        const bool branch_taken_0x23e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E790u;
        // 0x23e794: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e790) {
            ctx->pc = 0x23E79Cu;
            goto label_23e79c;
        }
    }
    ctx->pc = 0x23E798u;
label_23e798:
    // 0x23e798: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e79c:
    // 0x23e79c: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e7a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e7a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e7a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e7b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e7b8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e7b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e7bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e7c0: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x23E7C0u;
    {
        const bool branch_taken_0x23e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c0) {
            ctx->pc = 0x23EE64u;
            goto label_23ee64;
        }
    }
    ctx->pc = 0x23E7C8u;
label_23e7c8:
    // 0x23e7c8: 0x1c600077  bgtz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x23E7C8u;
    {
        const bool branch_taken_0x23e7c8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C8u;
        // 0x23e7cc: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c8) {
            ctx->pc = 0x23E9A8u;
            goto label_23e9a8;
        }
    }
    ctx->pc = 0x23E7D0u;
    // 0x23e7d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7d4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23e7d8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x23e7dc: 0x2442e558  addiu       $v0, $v0, -0x1AA8
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
    // 0x23e7e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e7e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e7e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e7ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e7f8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e7f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e7fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e800: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E800u;
    {
        const bool branch_taken_0x23e800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E800u;
        // 0x23e804: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e800) {
            ctx->pc = 0x23E824u;
            goto label_23e824;
        }
    }
    ctx->pc = 0x23E808u;
    // 0x23e808: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e80c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E80Cu;
    SET_GPR_U32(ctx, 31, 0x23E814u);
    ctx->pc = 0x23E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E80Cu;
    // 0x23e810: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E80Cu, 0x23E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E814u;
label_23e814:
    // 0x23e814: 0x144001ef  bnez        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x23E814u;
    {
        const bool branch_taken_0x23e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E814u;
        // 0x23e818: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e814) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E81Cu;
    // 0x23e81c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e820: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e824:
    // 0x23e824: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23e828: 0x10400198  beqz        $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x23E828u;
    {
        const bool branch_taken_0x23e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E828u;
        // 0x23e82c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e828) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23E830u;
    // 0x23e830: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x23e834: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e838: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x23e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x23e83c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e844: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x23e844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x23e848: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e84c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e850: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e850u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e854: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e858: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E858u;
    {
        const bool branch_taken_0x23e858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E858u;
        // 0x23e85c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e858) {
            ctx->pc = 0x23E87Cu;
            goto label_23e87c;
        }
    }
    ctx->pc = 0x23E860u;
    // 0x23e860: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e864: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E864u;
    SET_GPR_U32(ctx, 31, 0x23E86Cu);
    ctx->pc = 0x23E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E864u;
    // 0x23e868: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E864u, 0x23E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E86Cu;
label_23e86c:
    // 0x23e86c: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x23E86Cu;
    {
        const bool branch_taken_0x23e86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E86Cu;
        // 0x23e870: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e86c) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E874u;
    // 0x23e874: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e878: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e87c:
    // 0x23e87c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23e880: 0x28023  negu        $s0, $v0
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23e884: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23E884u;
    {
        const bool branch_taken_0x23e884 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E884u;
        // 0x23e888: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e884) {
            ctx->pc = 0x23E958u;
            goto label_23e958;
        }
    }
    ctx->pc = 0x23E88Cu;
    // 0x23e88c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e890: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23E890u;
    {
        const bool branch_taken_0x23e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E890u;
        // 0x23e894: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e890) {
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E898u;
    // 0x23e898: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23e898u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e89c: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23e89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e8a0: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x23e8a4: 0x0  nop
    ctx->pc = 0x23e8a4u;
    // NOP
label_23e8a8:
    // 0x23e8a8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x23e8ac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e8b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e8b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e8bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23e8c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e8c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e8c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e8c8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E8C8u;
    {
        const bool branch_taken_0x23e8c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C8u;
        // 0x23e8cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8c8) {
            ctx->pc = 0x23E8F0u;
            goto label_23e8f0;
        }
    }
    ctx->pc = 0x23E8D0u;
    // 0x23e8d0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e8d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e8d8: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E8D8u;
    SET_GPR_U32(ctx, 31, 0x23E8E0u);
    ctx->pc = 0x23E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8D8u;
    // 0x23e8dc: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E8D8u, 0x23E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8E0u;
label_23e8e0:
    // 0x23e8e0: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x23E8E0u;
    {
        const bool branch_taken_0x23e8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8E0u;
        // 0x23e8e4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8e0) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23E8E8u;
    // 0x23e8e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e8ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e8f0:
    // 0x23e8f0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23e8f4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23e8f8: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23E8F8u;
    {
        const bool branch_taken_0x23e8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8f8) {
            ctx->pc = 0x23E8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E8F8u;
            // 0x23e8fc: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e8a8;
        }
    }
    ctx->pc = 0x23E900u;
    // 0x23e900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E900u;
    {
        const bool branch_taken_0x23e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E900u;
        // 0x23e904: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e900) {
            ctx->pc = 0x23E90Cu;
            goto label_23e90c;
        }
    }
    ctx->pc = 0x23E908u;
label_23e908:
    // 0x23e908: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e90c:
    // 0x23e90c: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23e910: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23e914: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e918: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e91c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e928: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e928u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e92c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23e930: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E930u;
    {
        const bool branch_taken_0x23e930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E930u;
        // 0x23e934: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e930) {
            ctx->pc = 0x23E954u;
            goto label_23e954;
        }
    }
    ctx->pc = 0x23E938u;
    // 0x23e938: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e93c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E93Cu;
    SET_GPR_U32(ctx, 31, 0x23E944u);
    ctx->pc = 0x23E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E93Cu;
    // 0x23e940: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E93Cu, 0x23E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E944u;
label_23e944:
    // 0x23e944: 0x144001a3  bnez        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x23E944u;
    {
        const bool branch_taken_0x23e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e944) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E94Cu;
    // 0x23e94c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e950: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e954:
    // 0x23e954: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e958:
    // 0x23e958: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23e95c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x23e960: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e964: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e968: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e96c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23e970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e974: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x23e974u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e978: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23e97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e980: 0x14a00141  bnez        $a1, . + 4 + (0x141 << 2)
    ctx->pc = 0x23E980u;
    {
        const bool branch_taken_0x23e980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E980u;
        // 0x23e984: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e980) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23E988u;
    // 0x23e988: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e98c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E98Cu;
    SET_GPR_U32(ctx, 31, 0x23E994u);
    ctx->pc = 0x23E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E98Cu;
    // 0x23e990: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E98Cu, 0x23E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E994u;
label_23e994:
    // 0x23e994: 0x1440018f  bnez        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x23E994u;
    {
        const bool branch_taken_0x23e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E994u;
        // 0x23e998: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e994) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E99Cu;
    // 0x23e99c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e9a0: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x23E9A0u;
    {
        const bool branch_taken_0x23e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9A0u;
        // 0x23e9a4: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9a0) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23E9A8u;
label_23e9a8:
    // 0x23e9a8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x23e9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23e9ac: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x23E9ACu;
    {
        const bool branch_taken_0x23e9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9ac) {
            ctx->pc = 0x23E9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9ACu;
            // 0x23e9b0: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB20u;
            goto label_23eb20;
        }
    }
    ctx->pc = 0x23E9B4u;
    // 0x23e9b4: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x23e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x23e9b8: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23e9bc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23e9c0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e9c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e9c8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23e9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e9d0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e9d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23e9d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23e9d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23e9dc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E9DCu;
    {
        const bool branch_taken_0x23e9dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9DCu;
        // 0x23e9e0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9dc) {
            ctx->pc = 0x23EA04u;
            goto label_23ea04;
        }
    }
    ctx->pc = 0x23E9E4u;
    // 0x23e9e4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23e9e8: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23E9E8u;
    SET_GPR_U32(ctx, 31, 0x23E9F0u);
    ctx->pc = 0x23E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9E8u;
    // 0x23e9ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23E9E8u, 0x23E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9F0u;
label_23e9f0:
    // 0x23e9f0: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x23E9F0u;
    {
        const bool branch_taken_0x23e9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F0u;
        // 0x23e9f4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9f0) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23E9F8u;
    // 0x23e9f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e9fc: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23ea00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23ea00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ea04:
    // 0x23ea04: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23ea08: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x23ea08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ea0c: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23EA0Cu;
    {
        const bool branch_taken_0x23ea0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA0Cu;
        // 0x23ea10: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea0c) {
            ctx->pc = 0x23EAE0u;
            goto label_23eae0;
        }
    }
    ctx->pc = 0x23EA14u;
    // 0x23ea14: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23ea18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23EA18u;
    {
        const bool branch_taken_0x23ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA18u;
        // 0x23ea1c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea18) {
            ctx->pc = 0x23EA90u;
            goto label_23ea90;
        }
    }
    ctx->pc = 0x23EA20u;
    // 0x23ea20: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ea24: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23ea28: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x23ea2c: 0x0  nop
    ctx->pc = 0x23ea2cu;
    // NOP
label_23ea30:
    // 0x23ea30: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x23ea34: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23ea38: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ea3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ea40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ea44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23ea48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ea48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ea4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23ea50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA78u;
            goto label_23ea78;
        }
    }
    ctx->pc = 0x23EA58u;
    // 0x23ea58: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ea5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ea60: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EA60u;
    SET_GPR_U32(ctx, 31, 0x23EA68u);
    ctx->pc = 0x23EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA60u;
    // 0x23ea64: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EA60u, 0x23EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA68u;
label_23ea68:
    // 0x23ea68: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x23EA68u;
    {
        const bool branch_taken_0x23ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA68u;
        // 0x23ea6c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea68) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23EA70u;
    // 0x23ea70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ea74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ea74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ea78:
    // 0x23ea78: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23ea7c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ea7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23ea80: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23EA80u;
    {
        const bool branch_taken_0x23ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea80) {
            ctx->pc = 0x23EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA80u;
            // 0x23ea84: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ea30;
        }
    }
    ctx->pc = 0x23EA88u;
    // 0x23ea88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA88u;
        // 0x23ea8c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EA94u;
            goto label_23ea94;
        }
    }
    ctx->pc = 0x23EA90u;
label_23ea90:
    // 0x23ea90: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23ea94:
    // 0x23ea94: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23ea98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23ea9c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ea9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eaa0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23eaa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eaa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23eaac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23eab0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23eab4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23eab8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EAB8u;
    {
        const bool branch_taken_0x23eab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB8u;
        // 0x23eabc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab8) {
            ctx->pc = 0x23EADCu;
            goto label_23eadc;
        }
    }
    ctx->pc = 0x23EAC0u;
    // 0x23eac0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23eac4: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EAC4u;
    SET_GPR_U32(ctx, 31, 0x23EACCu);
    ctx->pc = 0x23EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAC4u;
    // 0x23eac8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EAC4u, 0x23EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EACCu;
label_23eacc:
    // 0x23eacc: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EAD4u;
    // 0x23ead4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ead8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23ead8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23eadc:
    // 0x23eadc: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23eae0:
    // 0x23eae0: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x23EAE0u;
    {
        const bool branch_taken_0x23eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAE0u;
        // 0x23eae4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eae0) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EAE8u;
    // 0x23eae8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23eaec: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x23eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x23eaf0: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
    // 0x23eaf4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23eaf8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eafc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23eb00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eb04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23eb08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23eb0c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eb0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23eb10: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23eb14: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x23EB14u;
    {
        const bool branch_taken_0x23eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB14u;
        // 0x23eb18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb14) {
            ctx->pc = 0x23EE64u;
            goto label_23ee64;
        }
    }
    ctx->pc = 0x23EB1Cu;
    // 0x23eb1c: 0x0  nop
    ctx->pc = 0x23eb1cu;
    // NOP
label_23eb20:
    // 0x23eb20: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23eb24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eb28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23eb2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eb30: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23eb34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23eb38: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23eb38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23eb3c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23eb40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23eb44: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EB44u;
    {
        const bool branch_taken_0x23eb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB44u;
        // 0x23eb48: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb44) {
            ctx->pc = 0x23EB6Cu;
            goto label_23eb6c;
        }
    }
    ctx->pc = 0x23EB4Cu;
    // 0x23eb4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23eb50: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EB50u;
    SET_GPR_U32(ctx, 31, 0x23EB58u);
    ctx->pc = 0x23EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB50u;
    // 0x23eb54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EB50u, 0x23EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB58u;
label_23eb58:
    // 0x23eb58: 0x1440011e  bnez        $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x23EB58u;
    {
        const bool branch_taken_0x23eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB58u;
        // 0x23eb5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb58) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EB60u;
    // 0x23eb60: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23eb64: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23eb68: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23eb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23eb6c:
    // 0x23eb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23eb70: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23eb74: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x23eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x23eb78: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
    // 0x23eb7c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23eb80: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eb84: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23eb88: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x23eb8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eb90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23eb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23eb98: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23eb98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23eb9c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23eba0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EBA0u;
    {
        const bool branch_taken_0x23eba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA0u;
        // 0x23eba4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eba0) {
            ctx->pc = 0x23EBC4u;
            goto label_23ebc4;
        }
    }
    ctx->pc = 0x23EBA8u;
    // 0x23eba8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ebac: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EBACu;
    SET_GPR_U32(ctx, 31, 0x23EBB4u);
    ctx->pc = 0x23EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBACu;
    // 0x23ebb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EBACu, 0x23EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBB4u;
label_23ebb4:
    // 0x23ebb4: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x23EBB4u;
    {
        const bool branch_taken_0x23ebb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBB4u;
        // 0x23ebb8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebb4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EBBCu;
    // 0x23ebbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ebc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23ebc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ebc4:
    // 0x23ebc4: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23ebc8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23ebcc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23ebd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ebd4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x23ebd8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23ebdc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ebe0: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23ebe4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x23ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x23ebe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ebec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ebf0: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x23ebf0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ebf4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23ebf8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23ebfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ec00: 0x14c000a1  bnez        $a2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x23EC00u;
    {
        const bool branch_taken_0x23ec00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC00u;
        // 0x23ec04: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec00) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EC08u;
    // 0x23ec08: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ec0c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EC0Cu;
    SET_GPR_U32(ctx, 31, 0x23EC14u);
    ctx->pc = 0x23EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC0Cu;
    // 0x23ec10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EC0Cu, 0x23EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC14u;
label_23ec14:
    // 0x23ec14: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x23EC14u;
    {
        const bool branch_taken_0x23ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC14u;
        // 0x23ec18: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec14) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EC1Cu;
    // 0x23ec1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ec20: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x23EC20u;
    {
        const bool branch_taken_0x23ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC20u;
        // 0x23ec24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec20) {
            ctx->pc = 0x23EE88u;
            goto label_23ee88;
        }
    }
    ctx->pc = 0x23EC28u;
label_23ec28:
    // 0x23ec28: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23ec28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ec2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EC2Cu;
    {
        const bool branch_taken_0x23ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec2c) {
            ctx->pc = 0x23EC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC2Cu;
            // 0x23ec30: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC44u;
            goto label_23ec44;
        }
    }
    ctx->pc = 0x23EC34u;
    // 0x23ec34: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x23ec38: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x23EC38u;
    {
        const bool branch_taken_0x23ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec38) {
            ctx->pc = 0x23EDF0u;
            goto label_23edf0;
        }
    }
    ctx->pc = 0x23EC40u;
    // 0x23ec40: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x23ec40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_23ec44:
    // 0x23ec44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23ec44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x23ec48: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x23ec4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ec50: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x23ec50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ec54: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x23ec58: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x23ec58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
    // 0x23ec5c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x23ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x23ec60: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23ec64: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23ec68: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ec6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ec70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ec74: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23ec78: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ec7c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23ec80: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EC80u;
    {
        const bool branch_taken_0x23ec80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC80u;
        // 0x23ec84: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec80) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EC88u;
    // 0x23ec88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ec8c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EC8Cu;
    SET_GPR_U32(ctx, 31, 0x23EC94u);
    ctx->pc = 0x23EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC8Cu;
    // 0x23ec90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EC8Cu, 0x23EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC94u;
label_23ec94:
    // 0x23ec94: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x23EC94u;
    {
        const bool branch_taken_0x23ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC94u;
        // 0x23ec98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec94) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EC9Cu;
    // 0x23ec9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23eca0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23eca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23eca4:
    // 0x23eca4: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23eca4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x23eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecac: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x23ECACu;
    SET_GPR_U32(ctx, 31, 0x23ECB4u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x23ECACu, 0x23ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECB4u;
label_23ecb4:
    // 0x23ecb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23ECB4u;
    {
        const bool branch_taken_0x23ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB4u;
        // 0x23ecb8: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecb4) {
            ctx->pc = 0x23ED18u;
            goto label_23ed18;
        }
    }
    ctx->pc = 0x23ECBCu;
    // 0x23ecbc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23ecc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ecc4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x23ecc8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ecc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ecd0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ecd4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x23ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23ecd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ecdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23ece0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x23ece0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ece4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23ece8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23ecec: 0x14a00052  bnez        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x23ECECu;
    {
        const bool branch_taken_0x23ecec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecec) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23ECF4u;
    // 0x23ecf4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ecf8: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23ECF8u;
    SET_GPR_U32(ctx, 31, 0x23ED00u);
    ctx->pc = 0x23ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF8u;
    // 0x23ecfc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23ECF8u, 0x23ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED00u;
label_23ed00:
    // 0x23ed00: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x23ED00u;
    {
        const bool branch_taken_0x23ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED00u;
        // 0x23ed04: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed00) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23ED08u;
    // 0x23ed08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ed0c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x23ED0Cu;
    {
        const bool branch_taken_0x23ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED0Cu;
        // 0x23ed10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed0c) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23ED14u;
    // 0x23ed14: 0x0  nop
    ctx->pc = 0x23ed14u;
    // NOP
label_23ed18:
    // 0x23ed18: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ed1c: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x23ED1Cu;
    {
        const bool branch_taken_0x23ed1c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED1Cu;
        // 0x23ed20: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed1c) {
            ctx->pc = 0x23EE3Cu;
            goto label_23ee3c;
        }
    }
    ctx->pc = 0x23ED24u;
    // 0x23ed24: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ed24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23ed28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23ED28u;
    {
        const bool branch_taken_0x23ed28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED28u;
        // 0x23ed2c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed28) {
            ctx->pc = 0x23EDA0u;
            goto label_23eda0;
        }
    }
    ctx->pc = 0x23ED30u;
    // 0x23ed30: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ed34: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23ed34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23ed38: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x23ed3c: 0x0  nop
    ctx->pc = 0x23ed3cu;
    // NOP
label_23ed40:
    // 0x23ed40: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x23ed44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ed44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23ed48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ed4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ed50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ed54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23ed58: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ed58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ed5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23ed60: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23ED60u;
    {
        const bool branch_taken_0x23ed60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed60) {
            ctx->pc = 0x23ED88u;
            goto label_23ed88;
        }
    }
    ctx->pc = 0x23ED68u;
    // 0x23ed68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ed6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ed70: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23ED70u;
    SET_GPR_U32(ctx, 31, 0x23ED78u);
    ctx->pc = 0x23ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED70u;
    // 0x23ed74: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23ED70u, 0x23ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED78u;
label_23ed78:
    // 0x23ed78: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x23ED78u;
    {
        const bool branch_taken_0x23ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED78u;
        // 0x23ed7c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed78) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23ED80u;
    // 0x23ed80: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ed84: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23ed84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23ed88:
    // 0x23ed88: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23ed8c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ed8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23ed90: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23ED90u;
    {
        const bool branch_taken_0x23ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed90) {
            ctx->pc = 0x23ED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED90u;
            // 0x23ed94: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ed40;
        }
    }
    ctx->pc = 0x23ED98u;
    // 0x23ed98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23ED98u;
    {
        const bool branch_taken_0x23ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED98u;
        // 0x23ed9c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed98) {
            ctx->pc = 0x23EDA4u;
            goto label_23eda4;
        }
    }
    ctx->pc = 0x23EDA0u;
label_23eda0:
    // 0x23eda0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23eda4:
    // 0x23eda4: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
    // 0x23eda8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23edac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23edb0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23edb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23edb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23edbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23edc0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23edc4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23edc8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23EDC8u;
    {
        const bool branch_taken_0x23edc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC8u;
        // 0x23edcc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edc8) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EDD0u;
    // 0x23edd0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23edd4: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EDD4u;
    SET_GPR_U32(ctx, 31, 0x23EDDCu);
    ctx->pc = 0x23EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDD4u;
    // 0x23edd8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EDD4u, 0x23EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDDCu;
label_23eddc:
    // 0x23eddc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x23EDDCu;
    {
        const bool branch_taken_0x23eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDDCu;
        // 0x23ede0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eddc) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EDE4u;
    // 0x23ede4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ede8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23EDE8u;
    {
        const bool branch_taken_0x23ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE8u;
        // 0x23edec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ede8) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EDF0u;
label_23edf0:
    // 0x23edf0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23edf4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x23edf8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23edfc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ee00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ee04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ee08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ee0c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ee0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ee10: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23ee14: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EE14u;
    {
        const bool branch_taken_0x23ee14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE14u;
        // 0x23ee18: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee14) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EE1Cu;
    // 0x23ee1c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ee20: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EE20u;
    SET_GPR_U32(ctx, 31, 0x23EE28u);
    ctx->pc = 0x23EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE20u;
    // 0x23ee24: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EE20u, 0x23EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE28u;
label_23ee28:
    // 0x23ee28: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x23EE28u;
    {
        const bool branch_taken_0x23ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee28) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EE30u;
    // 0x23ee30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ee34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ee34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ee38:
    // 0x23ee38: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x23ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_23ee3c:
    // 0x23ee3c: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x23ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
    // 0x23ee40: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x23ee44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23ee44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23ee48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ee4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ee50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ee54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23ee58:
    // 0x23ee58: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23ee58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ee5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23ee60: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23ee64:
    // 0x23ee64: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EE64u;
    {
        const bool branch_taken_0x23ee64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE64u;
        // 0x23ee68: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee64) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23EE6Cu;
    // 0x23ee6c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ee70: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EE70u;
    SET_GPR_U32(ctx, 31, 0x23EE78u);
    ctx->pc = 0x23EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE70u;
    // 0x23ee74: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EE70u, 0x23EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE78u;
label_23ee78:
    // 0x23ee78: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x23EE78u;
    {
        const bool branch_taken_0x23ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE78u;
        // 0x23ee7c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee78) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EE80u;
    // 0x23ee80: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ee84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ee84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ee88:
    // 0x23ee88: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_23ee8c:
    // 0x23ee8c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23EE8Cu;
    {
        const bool branch_taken_0x23ee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE8Cu;
        // 0x23ee90: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee8c) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EE94u;
    // 0x23ee94: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x23ee98: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x23ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23ee9c: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x23EE9Cu;
    {
        const bool branch_taken_0x23ee9c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE9Cu;
        // 0x23eea0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee9c) {
            ctx->pc = 0x23EF68u;
            goto label_23ef68;
        }
    }
    ctx->pc = 0x23EEA4u;
    // 0x23eea4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23eea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23eea8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA8u;
        // 0x23eeac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23EF20u;
            goto label_23ef20;
        }
    }
    ctx->pc = 0x23EEB0u;
    // 0x23eeb0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23eeb4: 0x24f1e4d0  addiu       $s1, $a3, -0x1B30
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
    // 0x23eeb8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x23eebc: 0x0  nop
    ctx->pc = 0x23eebcu;
    // NOP
label_23eec0:
    // 0x23eec0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x23eec4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23eec8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23eecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23eed4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23eed8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23eed8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23eedc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23eee0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EEE0u;
    {
        const bool branch_taken_0x23eee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE0u;
        // 0x23eee4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eee0) {
            ctx->pc = 0x23EF08u;
            goto label_23ef08;
        }
    }
    ctx->pc = 0x23EEE8u;
    // 0x23eee8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23eeec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23eef0: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EEF0u;
    SET_GPR_U32(ctx, 31, 0x23EEF8u);
    ctx->pc = 0x23EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEF0u;
    // 0x23eef4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EEF0u, 0x23EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEF8u;
label_23eef8:
    // 0x23eef8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23EEF8u;
    {
        const bool branch_taken_0x23eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef8) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23EF00u;
    // 0x23ef00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ef04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ef04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ef08:
    // 0x23ef08: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x23ef0c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23ef0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x23ef10: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF10u;
            // 0x23ef14: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eec0;
        }
    }
    ctx->pc = 0x23EF18u;
    // 0x23ef18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23EF18u;
    {
        const bool branch_taken_0x23ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF18u;
        // 0x23ef1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef18) {
            ctx->pc = 0x23EF24u;
            goto label_23ef24;
        }
    }
    ctx->pc = 0x23EF20u;
label_23ef20:
    // 0x23ef20: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23ef24:
    // 0x23ef24: 0x24e2e4d0  addiu       $v0, $a3, -0x1B30
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
    // 0x23ef28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23ef2c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ef30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ef34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ef38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ef3c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ef3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23ef40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23ef44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EF44u;
    {
        const bool branch_taken_0x23ef44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef44) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EF4Cu;
    // 0x23ef4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ef50: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EF50u;
    SET_GPR_U32(ctx, 31, 0x23EF58u);
    ctx->pc = 0x23EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF50u;
    // 0x23ef54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EF50u, 0x23EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF58u;
label_23ef58:
    // 0x23ef58: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23EF58u;
    {
        const bool branch_taken_0x23ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef58) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x23ef64: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23ef68:
    // 0x23ef68: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x23ef6c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x23ef6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23ef70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ef74: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23ef78: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x23ef78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x23ef7c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23ef80: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EF80u;
    {
        const bool branch_taken_0x23ef80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef80) {
            ctx->pc = 0x23EF9Cu;
            goto label_23ef9c;
        }
    }
    ctx->pc = 0x23EF88u;
    // 0x23ef88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23ef8c: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EF8Cu;
    SET_GPR_U32(ctx, 31, 0x23EF94u);
    ctx->pc = 0x23EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF8Cu;
    // 0x23ef90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EF8Cu, 0x23EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF94u;
label_23ef94:
    // 0x23ef94: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23EF94u;
    {
        const bool branch_taken_0x23ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef94) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF9Cu;
label_23ef9c:
    // 0x23ef9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23efa0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23efa4: 0x1000fab8  b           . + 4 + (-0x548 << 2)
    ctx->pc = 0x23EFA4u;
    {
        const bool branch_taken_0x23efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa4) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da88;
        }
    }
    ctx->pc = 0x23EFACu;
    // 0x23efac: 0x0  nop
    ctx->pc = 0x23efacu;
    // NOP
label_23efb0:
    // 0x23efb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23efb4:
    // 0x23efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFBCu;
    // 0x23efbc: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFBCu;
    // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23EFBCu, 0x23EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23efd0:
    // 0x23efd0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23efd4:
    // 0x23efd4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x23efd8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x23efd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23efdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23efe0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23efe4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x23efe4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_23efe8:
    // 0x23efe8: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x23efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_23efec:
    // 0x23efec: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x23eff0: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x23eff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x23eff4: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x23eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x23eff8: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x23effc: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x23effcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x23f000: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x23f000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x23f004: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x23f004u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x23f008: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x23f00c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x23f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    ctx->pc = 0x23f010u;
}
