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

// Function: FUN_00233800
// Address: 0x233800 - 0x233afc
void FUN_00233800_0x233800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233800_0x233800");
#endif

    switch (ctx->pc) {
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        default: break;
    }

    ctx->pc = 0x233800u;

label_233800:
    // 0x233800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233804:
    // 0x233804: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_233808:
    // 0x233808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23380c:
    // 0x23380c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_233810:
    // 0x233810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_233814:
    // 0x233814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233818:
    // 0x233818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23381c:
    // 0x23381c: 0x245104b0  addiu       $s1, $v0, 0x4B0
    ctx->pc = 0x23381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
label_233820:
    // 0x233820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233824:
    // 0x233824: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233828:
    // 0x233828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23382c:
    // 0x23382c: 0x24740508  addiu       $s4, $v1, 0x508
    ctx->pc = 0x23382cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1288));
label_233830:
    // 0x233830: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_233834:
    // 0x233834: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233838:
    // 0x233838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23383c:
    // 0x23383c: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x23383cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_233840:
    // 0x233840: 0x10000075  b           . + 4 + (0x75 << 2)
label_233844:
    if (ctx->pc == 0x233844u) {
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233848u;
        goto label_233848;
    }
    ctx->pc = 0x233840u;
    {
        const bool branch_taken_0x233840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233840) {
            ctx->pc = 0x233A18u;
            goto label_233a18;
        }
    }
    ctx->pc = 0x233848u;
label_233848:
    // 0x233848: 0xc08c42e  jal         func_2310B8
label_23384c:
    if (ctx->pc == 0x23384Cu) {
        ctx->pc = 0x233850u;
        goto label_233850;
    }
    ctx->pc = 0x233848u;
    SET_GPR_U32(ctx, 31, 0x233850u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x233848u, 0x233850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233850u;
label_233850:
    // 0x233850: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233854:
    // 0x233854: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233858:
    // 0x233858: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x233858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_23385c:
    // 0x23385c: 0xc08cf8e  jal         func_233E38
label_233860:
    if (ctx->pc == 0x233860u) {
        ctx->pc = 0x233860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23385Cu;
        // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233864u;
        goto label_233864;
    }
    ctx->pc = 0x23385Cu;
    SET_GPR_U32(ctx, 31, 0x233864u);
    ctx->pc = 0x233860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23385Cu;
    // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233E38u, 0x23385Cu, 0x233864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233864u;
label_233864:
    // 0x233864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233868:
    // 0x233868: 0x10a0fff7  beqz        $a1, . + 4 + (-0x9 << 2)
label_23386c:
    if (ctx->pc == 0x23386Cu) {
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233870u;
        goto label_233870;
    }
    ctx->pc = 0x233868u;
    {
        const bool branch_taken_0x233868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233868) {
            ctx->pc = 0x233848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233848;
        }
    }
    ctx->pc = 0x233870u;
label_233870:
    // 0x233870: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_233874:
    // 0x233874: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_233878:
    // 0x233878: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x233878u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_23387c:
    // 0x23387c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233880:
    // 0x233880: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x233880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_233884:
    // 0x233884: 0xc068a90  jal         func_1A2A40
label_233888:
    if (ctx->pc == 0x233888u) {
        ctx->pc = 0x233888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233884u;
        // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23388Cu;
        goto label_23388c;
    }
    ctx->pc = 0x233884u;
    SET_GPR_U32(ctx, 31, 0x23388Cu);
    ctx->pc = 0x233888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233884u;
    // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2A40u, 0x233884u, 0x23388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23388Cu;
label_23388c:
    // 0x23388c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_233890:
    if (ctx->pc == 0x233890u) {
        ctx->pc = 0x233890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23388Cu;
        // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233894u;
        goto label_233894;
    }
    ctx->pc = 0x23388Cu;
    {
        const bool branch_taken_0x23388c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23388c) {
            ctx->pc = 0x233890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23388Cu;
            // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338C0u;
            goto label_2338c0;
        }
    }
    ctx->pc = 0x233894u;
label_233894:
    // 0x233894: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233898:
    // 0x233898: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23389c:
    // 0x23389c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_2338a0:
    // 0x2338a0: 0xc08cd30  jal         func_2334C0
label_2338a4:
    if (ctx->pc == 0x2338A4u) {
        ctx->pc = 0x2338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338A0u;
        // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338A8u;
        goto label_2338a8;
    }
    ctx->pc = 0x2338A0u;
    SET_GPR_U32(ctx, 31, 0x2338A8u);
    ctx->pc = 0x2338A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338A0u;
    // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x2338A0u, 0x2338A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338A8u;
label_2338a8:
    // 0x2338a8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338ac:
    // 0x2338ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2338b0:
    // 0x2338b0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338b4:
    // 0x2338b4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_2338b8:
    // 0x2338b8: 0x10000055  b           . + 4 + (0x55 << 2)
label_2338bc:
    if (ctx->pc == 0x2338BCu) {
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C0u;
        goto label_2338c0;
    }
    ctx->pc = 0x2338B8u;
    {
        const bool branch_taken_0x2338b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b8) {
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    {
        const bool branch_taken_0x2338c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338c0) {
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0xc08cdbe  jal         func_2336F8
label_2338cc:
    if (ctx->pc == 0x2338CCu) {
        ctx->pc = 0x2338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C8u;
        // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338D0u;
        goto label_2338d0;
    }
    ctx->pc = 0x2338C8u;
    SET_GPR_U32(ctx, 31, 0x2338D0u);
    ctx->pc = 0x2338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338C8u;
    // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2336F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2336F8u, 0x2338C8u, 0x2338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338D0u;
label_2338d0:
    // 0x2338d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2338d4:
    // 0x2338d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2338d8:
    if (ctx->pc == 0x2338D8u) {
        ctx->pc = 0x2338D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338D4u;
        // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338DCu;
        goto label_2338dc;
    }
    ctx->pc = 0x2338D4u;
    {
        const bool branch_taken_0x2338d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2338d4) {
            ctx->pc = 0x2338D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338D4u;
            // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338DCu;
label_2338dc:
    // 0x2338dc: 0xc08c436  jal         func_2310D8
label_2338e0:
    if (ctx->pc == 0x2338E0u) {
        ctx->pc = 0x2338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338DCu;
        // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338E4u;
        goto label_2338e4;
    }
    ctx->pc = 0x2338DCu;
    SET_GPR_U32(ctx, 31, 0x2338E4u);
    ctx->pc = 0x2338E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338DCu;
    // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D8u, 0x2338DCu, 0x2338E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338E4u;
label_2338e4:
    // 0x2338e4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338e8:
    // 0x2338e8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338ec:
    // 0x2338ec: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2338ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2338f0:
    // 0x2338f0: 0xc08cf72  jal         func_233DC8
label_2338f4:
    if (ctx->pc == 0x2338F4u) {
        ctx->pc = 0x2338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338F0u;
        // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338F8u;
        goto label_2338f8;
    }
    ctx->pc = 0x2338F0u;
    SET_GPR_U32(ctx, 31, 0x2338F8u);
    ctx->pc = 0x2338F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338F0u;
    // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DC8u, 0x2338F0u, 0x2338F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338F8u;
label_2338f8:
    // 0x2338f8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338fc:
    // 0x2338fc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233900:
    // 0x233900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233904:
    // 0x233904: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233908:
    // 0x233908: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233908) {
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233914:
    // 0x233914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233918:
    // 0x233918: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_23391c:
    // 0x23391c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_233920:
    if (ctx->pc == 0x233920u) {
        ctx->pc = 0x233924u;
        goto label_233924;
    }
    ctx->pc = 0x23391Cu;
    {
        const bool branch_taken_0x23391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23391c) {
            ctx->pc = 0x233948u;
            goto label_233948;
        }
    }
    ctx->pc = 0x233924u;
label_233924:
    // 0x233924: 0x0  nop
    ctx->pc = 0x233924u;
    // NOP
label_233928:
    // 0x233928: 0xc08c42e  jal         func_2310B8
label_23392c:
    if (ctx->pc == 0x23392Cu) {
        ctx->pc = 0x233930u;
        goto label_233930;
    }
    ctx->pc = 0x233928u;
    SET_GPR_U32(ctx, 31, 0x233930u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x233928u, 0x233930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233930u;
label_233930:
    // 0x233930: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233934:
    // 0x233934: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233938:
    // 0x233938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23393c:
    // 0x23393c: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233940:
    // 0x233940: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_233944:
    if (ctx->pc == 0x233944u) {
        ctx->pc = 0x233948u;
        goto label_233948;
    }
    ctx->pc = 0x233940u;
    {
        const bool branch_taken_0x233940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233940) {
            ctx->pc = 0x233928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233928;
        }
    }
    ctx->pc = 0x233948u;
label_233948:
    // 0x233948: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23394c:
    // 0x23394c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233950:
    // 0x233950: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233954:
    // 0x233954: 0x0  nop
    ctx->pc = 0x233954u;
    // NOP
label_233958:
    // 0x233958: 0x0  nop
    ctx->pc = 0x233958u;
    // NOP
label_23395c:
    // 0x23395c: 0x0  nop
    ctx->pc = 0x23395cu;
    // NOP
label_233960:
    // 0x233960: 0x0  nop
    ctx->pc = 0x233960u;
    // NOP
label_233964:
    // 0x233964: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233968:
    if (ctx->pc == 0x233968u) {
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23396Cu;
        goto label_23396c;
    }
    ctx->pc = 0x233964u;
    {
        const bool branch_taken_0x233964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233964) {
            ctx->pc = 0x233948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233948;
        }
    }
    ctx->pc = 0x23396Cu;
label_23396c:
    // 0x23396c: 0xc066440  jal         func_199100
label_233970:
    if (ctx->pc == 0x233970u) {
        ctx->pc = 0x233970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23396Cu;
        // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233974u;
        goto label_233974;
    }
    ctx->pc = 0x23396Cu;
    SET_GPR_U32(ctx, 31, 0x233974u);
    ctx->pc = 0x233970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23396Cu;
    // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x23396Cu, 0x233974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233978:
    // 0x233978: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x233978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23397c:
    // 0x23397c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
label_233980:
    // 0x233980: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x233980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_233984:
    // 0x233984: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x233984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_233988:
    // 0x233988: 0x8ce71148  lw          $a3, 0x1148($a3)
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4424)));
label_23398c:
    // 0x23398c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23398cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_233990:
    // 0x233990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233994:
    // 0x233994: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x233994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_233998:
    // 0x233998: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23399c:
    // 0x23399c: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x23399cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2339a0:
    // 0x2339a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2339a4:
    // 0x2339a4: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x2339a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2339a8:
    // 0x2339a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2339ac:
    // 0x2339ac: 0x34a5a030  ori         $a1, $a1, 0xA030
    ctx->pc = 0x2339acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41008);
label_2339b0:
    // 0x2339b0: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x2339b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
label_2339b4:
    // 0x2339b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2339b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2339b8:
    // 0x2339b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2339b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2339bc:
    // 0x2339bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2339bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2339c0:
    // 0x2339c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2339c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2339c4:
    // 0x2339c4: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
label_2339c8:
    if (ctx->pc == 0x2339C8u) {
        ctx->pc = 0x2339C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339C4u;
        // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339CCu;
        goto label_2339cc;
    }
    ctx->pc = 0x2339C4u;
    {
        const bool branch_taken_0x2339c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c4) {
            ctx->pc = 0x2339C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339C4u;
            // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339D8u;
            goto label_2339d8;
        }
    }
    ctx->pc = 0x2339CCu;
label_2339cc:
    // 0x2339cc: 0xe0f809  jalr        $a3
label_2339d0:
    if (ctx->pc == 0x2339D0u) {
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339D4u;
        goto label_2339d4;
    }
    ctx->pc = 0x2339CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2339D4u);
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2339CCu, 0x2339D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2339D4u;
label_2339d4:
    // 0x2339d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2339d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2339d8:
    // 0x2339d8: 0xc066440  jal         func_199100
label_2339dc:
    if (ctx->pc == 0x2339DCu) {
        ctx->pc = 0x2339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339D8u;
        // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339E0u;
        goto label_2339e0;
    }
    ctx->pc = 0x2339D8u;
    SET_GPR_U32(ctx, 31, 0x2339E0u);
    ctx->pc = 0x2339DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339D8u;
    // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x2339D8u, 0x2339E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339E0u;
label_2339e0:
    // 0x2339e0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2339e4:
    // 0x2339e4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2339e8:
    // 0x2339e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2339ec:
    // 0x2339ec: 0x8c421148  lw          $v0, 0x1148($v0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4424)));
label_2339f0:
    // 0x2339f0: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_2339f4:
    // 0x2339f4: 0x34841144  ori         $a0, $a0, 0x1144
    ctx->pc = 0x2339f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4420);
label_2339f8:
    // 0x2339f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2339fc:
    // 0x2339fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233a00:
    // 0x233a00: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_233a04:
    // 0x233a04: 0xac321270  sw          $s2, 0x1270($at)
    ctx->pc = 0x233a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4720), GPR_U32(ctx, 18));
label_233a08:
    // 0x233a08: 0xc08cfbc  jal         func_233EF0
label_233a0c:
    if (ctx->pc == 0x233A0Cu) {
        ctx->pc = 0x233A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A08u;
        // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A10u;
        goto label_233a10;
    }
    ctx->pc = 0x233A08u;
    SET_GPR_U32(ctx, 31, 0x233A10u);
    ctx->pc = 0x233A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A08u;
    // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x233A08u, 0x233A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A10u;
label_233a10:
    // 0x233a10: 0xc08c42e  jal         func_2310B8
label_233a14:
    if (ctx->pc == 0x233A14u) {
        ctx->pc = 0x233A18u;
        goto label_233a18;
    }
    ctx->pc = 0x233A10u;
    SET_GPR_U32(ctx, 31, 0x233A18u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x233A10u, 0x233A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A18u;
label_233a18:
    // 0x233a18: 0xc068ad6  jal         func_1A2B58
label_233a1c:
    if (ctx->pc == 0x233A1Cu) {
        ctx->pc = 0x233A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A18u;
        // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A20u;
        goto label_233a20;
    }
    ctx->pc = 0x233A18u;
    SET_GPR_U32(ctx, 31, 0x233A20u);
    ctx->pc = 0x233A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A18u;
    // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2B58u, 0x233A18u, 0x233A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A20u;
label_233a20:
    // 0x233a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_233a24:
    if (ctx->pc == 0x233A24u) {
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A28u;
        goto label_233a28;
    }
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233A40u;
            goto label_233a40;
        }
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0xc08cd34  jal         func_2334D0
label_233a2c:
    if (ctx->pc == 0x233A2Cu) {
        ctx->pc = 0x233A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A28u;
        // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A30u;
        goto label_233a30;
    }
    ctx->pc = 0x233A28u;
    SET_GPR_U32(ctx, 31, 0x233A30u);
    ctx->pc = 0x233A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A28u;
    // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x233A28u, 0x233A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A30u;
label_233a30:
    // 0x233a30: 0x5452ff88  bnel        $v0, $s2, . + 4 + (-0x78 << 2)
label_233a34:
    if (ctx->pc == 0x233A34u) {
        ctx->pc = 0x233A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A30u;
        // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A38u;
        goto label_233a38;
    }
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A30u;
            // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233854;
        }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233a3c:
    // 0x233a3c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x233a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a40:
    // 0x233a40: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_233a44:
    // 0x233a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a48:
    // 0x233a48: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
label_233a4c:
    // 0x233a4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_233a50:
    if (ctx->pc == 0x233A50u) {
        ctx->pc = 0x233A54u;
        goto label_233a54;
    }
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0xc08cd34  jal         func_2334D0
label_233a58:
    if (ctx->pc == 0x233A58u) {
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A5Cu;
        goto label_233a5c;
    }
    ctx->pc = 0x233A54u;
    SET_GPR_U32(ctx, 31, 0x233A5Cu);
    ctx->pc = 0x233A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A54u;
    // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x233A54u, 0x233A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a60:
    // 0x233a60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_233a64:
    if (ctx->pc == 0x233A64u) {
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A68u;
        goto label_233a68;
    }
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A70u;
            goto label_233a70;
        }
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_233a6c:
    if (ctx->pc == 0x233A6Cu) {
        ctx->pc = 0x233A70u;
        goto label_233a70;
    }
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A70u;
label_233a70:
    // 0x233a70: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a74:
    // 0x233a74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233a78:
    // 0x233a78: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233a7c:
    // 0x233a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233a80:
    // 0x233a80: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233a84:
    // 0x233a84: 0x0  nop
    ctx->pc = 0x233a84u;
    // NOP
label_233a88:
    // 0x233a88: 0x0  nop
    ctx->pc = 0x233a88u;
    // NOP
label_233a8c:
    // 0x233a8c: 0x0  nop
    ctx->pc = 0x233a8cu;
    // NOP
label_233a90:
    // 0x233a90: 0x0  nop
    ctx->pc = 0x233a90u;
    // NOP
label_233a94:
    // 0x233a94: 0x0  nop
    ctx->pc = 0x233a94u;
    // NOP
label_233a98:
    // 0x233a98: 0x0  nop
    ctx->pc = 0x233a98u;
    // NOP
label_233a9c:
    // 0x233a9c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_233aa0:
    if (ctx->pc == 0x233AA0u) {
        ctx->pc = 0x233AA4u;
        goto label_233aa4;
    }
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a78;
        }
    }
    ctx->pc = 0x233AA4u;
label_233aa4:
    // 0x233aa4: 0x0  nop
    ctx->pc = 0x233aa4u;
    // NOP
label_233aa8:
    // 0x233aa8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233aac:
    // 0x233aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233ab0:
    // 0x233ab0: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233ab4:
    // 0x233ab4: 0x0  nop
    ctx->pc = 0x233ab4u;
    // NOP
label_233ab8:
    // 0x233ab8: 0x0  nop
    ctx->pc = 0x233ab8u;
    // NOP
label_233abc:
    // 0x233abc: 0x0  nop
    ctx->pc = 0x233abcu;
    // NOP
label_233ac0:
    // 0x233ac0: 0x0  nop
    ctx->pc = 0x233ac0u;
    // NOP
label_233ac4:
    // 0x233ac4: 0x0  nop
    ctx->pc = 0x233ac4u;
    // NOP
label_233ac8:
    // 0x233ac8: 0x0  nop
    ctx->pc = 0x233ac8u;
    // NOP
label_233acc:
    // 0x233acc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_233ad0:
    if (ctx->pc == 0x233AD0u) {
        ctx->pc = 0x233AD4u;
        goto label_233ad4;
    }
    ctx->pc = 0x233ACCu;
    {
        const bool branch_taken_0x233acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233acc) {
            ctx->pc = 0x233AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233aa8;
        }
    }
    ctx->pc = 0x233AD4u;
label_233ad4:
    // 0x233ad4: 0xc068ade  jal         func_1A2B78
label_233ad8:
    if (ctx->pc == 0x233AD8u) {
        ctx->pc = 0x233AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD4u;
        // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233ADCu;
        goto label_233adc;
    }
    ctx->pc = 0x233AD4u;
    SET_GPR_U32(ctx, 31, 0x233ADCu);
    ctx->pc = 0x233AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AD4u;
    // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2B78u, 0x233AD4u, 0x233ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233ADCu;
label_233adc:
    // 0x233adc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233ae0:
    // 0x233ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ae4:
    // 0x233ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233ae8:
    // 0x233ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233aec:
    // 0x233aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233af0:
    // 0x233af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233af4:
    // 0x233af4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233af8:
    // 0x233af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x233afcu;
}
