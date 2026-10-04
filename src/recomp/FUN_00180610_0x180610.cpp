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

// Function: FUN_00180610
// Address: 0x180610 - 0x180938
void FUN_00180610_0x180610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180610_0x180610");
#endif

    switch (ctx->pc) {
        case 0x180610u: goto label_180610;
        case 0x180614u: goto label_180614;
        case 0x180618u: goto label_180618;
        case 0x18061cu: goto label_18061c;
        case 0x180620u: goto label_180620;
        case 0x180624u: goto label_180624;
        case 0x180628u: goto label_180628;
        case 0x18062cu: goto label_18062c;
        case 0x180630u: goto label_180630;
        case 0x180634u: goto label_180634;
        case 0x180638u: goto label_180638;
        case 0x18063cu: goto label_18063c;
        case 0x180640u: goto label_180640;
        case 0x180644u: goto label_180644;
        case 0x180648u: goto label_180648;
        case 0x18064cu: goto label_18064c;
        case 0x180650u: goto label_180650;
        case 0x180654u: goto label_180654;
        case 0x180658u: goto label_180658;
        case 0x18065cu: goto label_18065c;
        case 0x180660u: goto label_180660;
        case 0x180664u: goto label_180664;
        case 0x180668u: goto label_180668;
        case 0x18066cu: goto label_18066c;
        case 0x180670u: goto label_180670;
        case 0x180674u: goto label_180674;
        case 0x180678u: goto label_180678;
        case 0x18067cu: goto label_18067c;
        case 0x180680u: goto label_180680;
        case 0x180684u: goto label_180684;
        case 0x180688u: goto label_180688;
        case 0x18068cu: goto label_18068c;
        case 0x180690u: goto label_180690;
        case 0x180694u: goto label_180694;
        case 0x180698u: goto label_180698;
        case 0x18069cu: goto label_18069c;
        case 0x1806a0u: goto label_1806a0;
        case 0x1806a4u: goto label_1806a4;
        case 0x1806a8u: goto label_1806a8;
        case 0x1806acu: goto label_1806ac;
        case 0x1806b0u: goto label_1806b0;
        case 0x1806b4u: goto label_1806b4;
        case 0x1806b8u: goto label_1806b8;
        case 0x1806bcu: goto label_1806bc;
        case 0x1806c0u: goto label_1806c0;
        case 0x1806c4u: goto label_1806c4;
        case 0x1806c8u: goto label_1806c8;
        case 0x1806ccu: goto label_1806cc;
        case 0x1806d0u: goto label_1806d0;
        case 0x1806d4u: goto label_1806d4;
        case 0x1806d8u: goto label_1806d8;
        case 0x1806dcu: goto label_1806dc;
        case 0x1806e0u: goto label_1806e0;
        case 0x1806e4u: goto label_1806e4;
        case 0x1806e8u: goto label_1806e8;
        case 0x1806ecu: goto label_1806ec;
        case 0x1806f0u: goto label_1806f0;
        case 0x1806f4u: goto label_1806f4;
        case 0x1806f8u: goto label_1806f8;
        case 0x1806fcu: goto label_1806fc;
        case 0x180700u: goto label_180700;
        case 0x180704u: goto label_180704;
        case 0x180708u: goto label_180708;
        case 0x18070cu: goto label_18070c;
        case 0x180710u: goto label_180710;
        case 0x180714u: goto label_180714;
        case 0x180718u: goto label_180718;
        case 0x18071cu: goto label_18071c;
        case 0x180720u: goto label_180720;
        case 0x180724u: goto label_180724;
        case 0x180728u: goto label_180728;
        case 0x18072cu: goto label_18072c;
        case 0x180730u: goto label_180730;
        case 0x180734u: goto label_180734;
        case 0x180738u: goto label_180738;
        case 0x18073cu: goto label_18073c;
        case 0x180740u: goto label_180740;
        case 0x180744u: goto label_180744;
        case 0x180748u: goto label_180748;
        case 0x18074cu: goto label_18074c;
        case 0x180750u: goto label_180750;
        case 0x180754u: goto label_180754;
        case 0x180758u: goto label_180758;
        case 0x18075cu: goto label_18075c;
        case 0x180760u: goto label_180760;
        case 0x180764u: goto label_180764;
        case 0x180768u: goto label_180768;
        case 0x18076cu: goto label_18076c;
        case 0x180770u: goto label_180770;
        case 0x180774u: goto label_180774;
        case 0x180778u: goto label_180778;
        case 0x18077cu: goto label_18077c;
        case 0x180780u: goto label_180780;
        case 0x180784u: goto label_180784;
        case 0x180788u: goto label_180788;
        case 0x18078cu: goto label_18078c;
        case 0x180790u: goto label_180790;
        case 0x180794u: goto label_180794;
        case 0x180798u: goto label_180798;
        case 0x18079cu: goto label_18079c;
        case 0x1807a0u: goto label_1807a0;
        case 0x1807a4u: goto label_1807a4;
        case 0x1807a8u: goto label_1807a8;
        case 0x1807acu: goto label_1807ac;
        case 0x1807b0u: goto label_1807b0;
        case 0x1807b4u: goto label_1807b4;
        case 0x1807b8u: goto label_1807b8;
        case 0x1807bcu: goto label_1807bc;
        case 0x1807c0u: goto label_1807c0;
        case 0x1807c4u: goto label_1807c4;
        case 0x1807c8u: goto label_1807c8;
        case 0x1807ccu: goto label_1807cc;
        case 0x1807d0u: goto label_1807d0;
        case 0x1807d4u: goto label_1807d4;
        case 0x1807d8u: goto label_1807d8;
        case 0x1807dcu: goto label_1807dc;
        case 0x1807e0u: goto label_1807e0;
        case 0x1807e4u: goto label_1807e4;
        case 0x1807e8u: goto label_1807e8;
        case 0x1807ecu: goto label_1807ec;
        case 0x1807f0u: goto label_1807f0;
        case 0x1807f4u: goto label_1807f4;
        case 0x1807f8u: goto label_1807f8;
        case 0x1807fcu: goto label_1807fc;
        case 0x180800u: goto label_180800;
        case 0x180804u: goto label_180804;
        case 0x180808u: goto label_180808;
        case 0x18080cu: goto label_18080c;
        case 0x180810u: goto label_180810;
        case 0x180814u: goto label_180814;
        case 0x180818u: goto label_180818;
        case 0x18081cu: goto label_18081c;
        case 0x180820u: goto label_180820;
        case 0x180824u: goto label_180824;
        case 0x180828u: goto label_180828;
        case 0x18082cu: goto label_18082c;
        case 0x180830u: goto label_180830;
        case 0x180834u: goto label_180834;
        case 0x180838u: goto label_180838;
        case 0x18083cu: goto label_18083c;
        case 0x180840u: goto label_180840;
        case 0x180844u: goto label_180844;
        case 0x180848u: goto label_180848;
        case 0x18084cu: goto label_18084c;
        case 0x180850u: goto label_180850;
        case 0x180854u: goto label_180854;
        case 0x180858u: goto label_180858;
        case 0x18085cu: goto label_18085c;
        case 0x180860u: goto label_180860;
        case 0x180864u: goto label_180864;
        case 0x180868u: goto label_180868;
        case 0x18086cu: goto label_18086c;
        case 0x180870u: goto label_180870;
        case 0x180874u: goto label_180874;
        case 0x180878u: goto label_180878;
        case 0x18087cu: goto label_18087c;
        case 0x180880u: goto label_180880;
        case 0x180884u: goto label_180884;
        case 0x180888u: goto label_180888;
        case 0x18088cu: goto label_18088c;
        case 0x180890u: goto label_180890;
        case 0x180894u: goto label_180894;
        case 0x180898u: goto label_180898;
        case 0x18089cu: goto label_18089c;
        case 0x1808a0u: goto label_1808a0;
        case 0x1808a4u: goto label_1808a4;
        case 0x1808a8u: goto label_1808a8;
        case 0x1808acu: goto label_1808ac;
        case 0x1808b0u: goto label_1808b0;
        case 0x1808b4u: goto label_1808b4;
        case 0x1808b8u: goto label_1808b8;
        case 0x1808bcu: goto label_1808bc;
        case 0x1808c0u: goto label_1808c0;
        case 0x1808c4u: goto label_1808c4;
        case 0x1808c8u: goto label_1808c8;
        case 0x1808ccu: goto label_1808cc;
        case 0x1808d0u: goto label_1808d0;
        case 0x1808d4u: goto label_1808d4;
        case 0x1808d8u: goto label_1808d8;
        case 0x1808dcu: goto label_1808dc;
        case 0x1808e0u: goto label_1808e0;
        case 0x1808e4u: goto label_1808e4;
        case 0x1808e8u: goto label_1808e8;
        case 0x1808ecu: goto label_1808ec;
        case 0x1808f0u: goto label_1808f0;
        case 0x1808f4u: goto label_1808f4;
        case 0x1808f8u: goto label_1808f8;
        case 0x1808fcu: goto label_1808fc;
        case 0x180900u: goto label_180900;
        case 0x180904u: goto label_180904;
        case 0x180908u: goto label_180908;
        case 0x18090cu: goto label_18090c;
        case 0x180910u: goto label_180910;
        case 0x180914u: goto label_180914;
        case 0x180918u: goto label_180918;
        case 0x18091cu: goto label_18091c;
        case 0x180920u: goto label_180920;
        case 0x180924u: goto label_180924;
        case 0x180928u: goto label_180928;
        case 0x18092cu: goto label_18092c;
        case 0x180930u: goto label_180930;
        case 0x180934u: goto label_180934;
        default: break;
    }

    ctx->pc = 0x180610u;

label_180610:
    // 0x180610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_180614:
    // 0x180614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180618:
    // 0x180618: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_18061c:
    if (ctx->pc == 0x18061Cu) {
        ctx->pc = 0x18061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180618u;
        // 0x18061c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180620u;
        goto label_180620;
    }
    ctx->pc = 0x180618u;
    {
        const bool branch_taken_0x180618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180618u;
        // 0x18061c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180618) {
            ctx->pc = 0x180630u;
            goto label_180630;
        }
    }
    ctx->pc = 0x180620u;
label_180620:
    // 0x180620: 0xf  sync
    ctx->pc = 0x180620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_180624:
    // 0x180624: 0x42000038  ei
    ctx->pc = 0x180624u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_180628:
    // 0x180628: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_18062c:
    if (ctx->pc == 0x18062Cu) {
        ctx->pc = 0x18062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180628u;
        // 0x18062c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180630u;
        goto label_180630;
    }
    ctx->pc = 0x180628u;
    {
        const bool branch_taken_0x180628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180628u;
        // 0x18062c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180628) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180630u;
label_180630:
    // 0x180630: 0x8f828804  lw          $v0, -0x77FC($gp)
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
label_180634:
    // 0x180634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180638:
    // 0x180638: 0xaf828804  sw          $v0, -0x77FC($gp)
    ctx->pc = 0x180638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
label_18063c:
    // 0x18063c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
label_180640:
    // 0x180640: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
label_180644:
    // 0x180644: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x180644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
label_180648:
    // 0x180648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18064c:
    // 0x18064c: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x18064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
label_180650:
    // 0x180650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_180654:
    // 0x180654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_180658:
    // 0x180658: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x180658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18065c:
    // 0x18065c: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
label_180660:
    if (ctx->pc == 0x180660u) {
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180664u;
        goto label_180664;
    }
    ctx->pc = 0x18065Cu;
    {
        const bool branch_taken_0x18065c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18065c) {
            ctx->pc = 0x18063Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18063c;
        }
    }
    ctx->pc = 0x180664u;
label_180664:
    // 0x180664: 0x8f8287e4  lw          $v0, -0x781C($gp)
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_180668:
    // 0x180668: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_18066c:
    if (ctx->pc == 0x18066Cu) {
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180670u;
        goto label_180670;
    }
    ctx->pc = 0x180668u;
    {
        const bool branch_taken_0x180668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180668) {
            ctx->pc = 0x180680u;
            goto label_180680;
        }
    }
    ctx->pc = 0x180670u;
label_180670:
    // 0x180670: 0xf  sync
    ctx->pc = 0x180670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_180674:
    // 0x180674: 0x42000038  ei
    ctx->pc = 0x180674u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_180678:
    // 0x180678: 0x100000ae  b           . + 4 + (0xAE << 2)
label_18067c:
    if (ctx->pc == 0x18067Cu) {
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180678u;
        // 0x18067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180680u;
        goto label_180680;
    }
    ctx->pc = 0x180678u;
    {
        const bool branch_taken_0x180678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180678u;
        // 0x18067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180678) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180680u;
label_180680:
    // 0x180680: 0xc066440  jal         func_199100
label_180684:
    if (ctx->pc == 0x180684u) {
        ctx->pc = 0x180684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180680u;
        // 0x180684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180688u;
        goto label_180688;
    }
    ctx->pc = 0x180680u;
    SET_GPR_U32(ctx, 31, 0x180688u);
    ctx->pc = 0x180684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180680u;
    // 0x180684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x180680u, 0x180688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180688u;
label_180688:
    // 0x180688: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_18068c:
    if (ctx->pc == 0x18068Cu) {
        ctx->pc = 0x180690u;
        goto label_180690;
    }
    ctx->pc = 0x180688u;
    {
        const bool branch_taken_0x180688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180688) {
            ctx->pc = 0x18073Cu;
            goto label_18073c;
        }
    }
    ctx->pc = 0x180690u;
label_180690:
    // 0x180690: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x180690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_180694:
    // 0x180694: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180698:
    // 0x180698: 0xac22f590  sw          $v0, -0xA70($at)
    ctx->pc = 0x180698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 2));
label_18069c:
    // 0x18069c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_1806a0:
    // 0x1806a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806a4:
    // 0x1806a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1806a8:
    // 0x1806a8: 0x8c228000  lw          $v0, -0x8000($at)
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934528)));
label_1806ac:
    // 0x1806ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1806b0:
    // 0x1806b0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806b4:
    // 0x1806b4: 0xac228000  sw          $v0, -0x8000($at)
    ctx->pc = 0x1806b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 2));
label_1806b8:
    // 0x1806b8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1806bc:
    // 0x1806bc: 0xac243810  sw          $a0, 0x3810($at)
    ctx->pc = 0x1806bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14352), GPR_U32(ctx, 4));
label_1806c0:
    // 0x1806c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806c4:
    // 0x1806c4: 0x8c229000  lw          $v0, -0x7000($at)
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938624)));
label_1806c8:
    // 0x1806c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1806cc:
    // 0x1806cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806d0:
    // 0x1806d0: 0xac229000  sw          $v0, -0x7000($at)
    ctx->pc = 0x1806d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
label_1806d4:
    // 0x1806d4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1806d8:
    // 0x1806d8: 0xac243c10  sw          $a0, 0x3C10($at)
    ctx->pc = 0x1806d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15376), GPR_U32(ctx, 4));
label_1806dc:
    // 0x1806dc: 0x4849e000  cfc2.ni     $t1, $vi28
    ctx->pc = 0x1806dcu;
    SET_GPR_U32(ctx, 9, ctx->vu0_fbrst);
label_1806e0:
    // 0x1806e0: 0x35290200  ori         $t1, $t1, 0x200
    ctx->pc = 0x1806e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)512);
label_1806e4:
    // 0x1806e4: 0x48c9e000  ctc2.ni     $t1, $vi28
    ctx->pc = 0x1806e4u;
    ctx->vu0_fbrst = GPR_U32(ctx, 9) & 0x00000C0Cu;
label_1806e8:
    // 0x1806e8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806ec:
    // 0x1806ec: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1806f0:
    // 0x1806f0: 0x8c23a000  lw          $v1, -0x6000($at)
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942720)));
label_1806f4:
    // 0x1806f4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1806f8:
    // 0x1806f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806fc:
    // 0x1806fc: 0xac23a000  sw          $v1, -0x6000($at)
    ctx->pc = 0x1806fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942720), GPR_U32(ctx, 3));
label_180700:
    // 0x180700: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_180704:
    // 0x180704: 0xac243000  sw          $a0, 0x3000($at)
    ctx->pc = 0x180704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12288), GPR_U32(ctx, 4));
label_180708:
    // 0x180708: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_18070c:
    // 0x18070c: 0xac20f590  sw          $zero, -0xA70($at)
    ctx->pc = 0x18070cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 0));
label_180710:
    // 0x180710: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180714:
    // 0x180714: 0x8c239000  lw          $v1, -0x7000($at)
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938624)));
label_180718:
    // 0x180718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18071c:
    // 0x18071c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180720:
    // 0x180720: 0xc06614e  jal         func_198538
label_180724:
    if (ctx->pc == 0x180724u) {
        ctx->pc = 0x180724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180720u;
        // 0x180724: 0xac229000  sw          $v0, -0x7000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180728u;
        goto label_180728;
    }
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x180724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180720u;
    // 0x180724: 0xac229000  sw          $v0, -0x7000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x180720u, 0x180728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x878787f4  lh          $a3, -0x780C($gp)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_18072c:
    // 0x18072c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180730:
    // 0x180730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180734:
    // 0x180734: 0xc0660e6  jal         func_198398
label_180738:
    if (ctx->pc == 0x180738u) {
        ctx->pc = 0x180738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180734u;
        // 0x180738: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18073Cu;
        goto label_18073c;
    }
    ctx->pc = 0x180734u;
    SET_GPR_U32(ctx, 31, 0x18073Cu);
    ctx->pc = 0x180738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180734u;
    // 0x180738: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198398u, 0x180734u, 0x18073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18073Cu;
label_18073c:
    // 0x18073c: 0x878387f4  lh          $v1, -0x780C($gp)
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_180740:
    // 0x180740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180744:
    // 0x180744: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_180748:
    if (ctx->pc == 0x180748u) {
        ctx->pc = 0x18074Cu;
        goto label_18074c;
    }
    ctx->pc = 0x180744u;
    {
        const bool branch_taken_0x180744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180744) {
            ctx->pc = 0x1807ACu;
            goto label_1807ac;
        }
    }
    ctx->pc = 0x18074Cu;
label_18074c:
    // 0x18074c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180750:
    // 0x180750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180754:
    if (ctx->pc == 0x180754u) {
        ctx->pc = 0x180758u;
        goto label_180758;
    }
    ctx->pc = 0x180750u;
    {
        const bool branch_taken_0x180750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180750) {
            ctx->pc = 0x180764u;
            goto label_180764;
        }
    }
    ctx->pc = 0x180758u;
label_180758:
    // 0x180758: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_18075c:
    // 0x18075c: 0x10000003  b           . + 4 + (0x3 << 2)
label_180760:
    if (ctx->pc == 0x180760u) {
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18075Cu;
        // 0x180760: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180764u;
        goto label_180764;
    }
    ctx->pc = 0x18075Cu;
    {
        const bool branch_taken_0x18075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18075Cu;
        // 0x180760: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18075c) {
            ctx->pc = 0x18076Cu;
            goto label_18076c;
        }
    }
    ctx->pc = 0x180764u;
label_180764:
    // 0x180764: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_180768:
    // 0x180768: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18076c:
    // 0x18076c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180770:
    // 0x180770: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_180774:
    // 0x180774: 0xc0667fc  jal         func_199FF0
label_180778:
    if (ctx->pc == 0x180778u) {
        ctx->pc = 0x180778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180774u;
        // 0x180778: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18077Cu;
        goto label_18077c;
    }
    ctx->pc = 0x180774u;
    SET_GPR_U32(ctx, 31, 0x18077Cu);
    ctx->pc = 0x180778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180774u;
    // 0x180778: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199FF0u, 0x180774u, 0x18077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18077Cu;
label_18077c:
    // 0x18077c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180780:
    // 0x180780: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180784:
    if (ctx->pc == 0x180784u) {
        ctx->pc = 0x180788u;
        goto label_180788;
    }
    ctx->pc = 0x180780u;
    {
        const bool branch_taken_0x180780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180780) {
            ctx->pc = 0x180794u;
            goto label_180794;
        }
    }
    ctx->pc = 0x180788u;
label_180788:
    // 0x180788: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_18078c:
    // 0x18078c: 0x10000003  b           . + 4 + (0x3 << 2)
label_180790:
    if (ctx->pc == 0x180790u) {
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180794u;
        goto label_180794;
    }
    ctx->pc = 0x18078Cu;
    {
        const bool branch_taken_0x18078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18078c) {
            ctx->pc = 0x18079Cu;
            goto label_18079c;
        }
    }
    ctx->pc = 0x180794u;
label_180794:
    // 0x180794: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_180798:
    // 0x180798: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_18079c:
    // 0x18079c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_1807a0:
    // 0x1807a0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1807a4:
    // 0x1807a4: 0xc066896  jal         func_19A258
label_1807a8:
    if (ctx->pc == 0x1807A8u) {
        ctx->pc = 0x1807A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807A4u;
        // 0x1807a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1807ACu;
        goto label_1807ac;
    }
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x1807A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807A4u;
    // 0x1807a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A258u, 0x1807A4u, 0x1807ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807ACu;
label_1807ac:
    // 0x1807ac: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
label_1807b0:
    // 0x1807b0: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807b4:
    // 0x1807b4: 0xfc430180  sd          $v1, 0x180($v0)
    ctx->pc = 0x1807b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 384), GPR_U64(ctx, 3));
label_1807b8:
    // 0x1807b8: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
label_1807bc:
    // 0x1807bc: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807c0:
    // 0x1807c0: 0xfc4302f0  sd          $v1, 0x2F0($v0)
    ctx->pc = 0x1807c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 752), GPR_U64(ctx, 3));
label_1807c4:
    // 0x1807c4: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
label_1807c8:
    // 0x1807c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1807cc:
    // 0x1807cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1807d0:
    if (ctx->pc == 0x1807D0u) {
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807CCu;
        // 0x1807d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1807D4u;
        goto label_1807d4;
    }
    ctx->pc = 0x1807CCu;
    {
        const bool branch_taken_0x1807cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807CCu;
        // 0x1807d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807cc) {
            ctx->pc = 0x1807D8u;
            goto label_1807d8;
        }
    }
    ctx->pc = 0x1807D4u;
label_1807d4:
    // 0x1807d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1807d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1807d8:
    // 0x1807d8: 0x8f8687dc  lw          $a2, -0x7824($gp)
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_1807dc:
    // 0x1807dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1807e0:
    // 0x1807e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1807e4:
    // 0x1807e4: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807e8:
    // 0x1807e8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1807ec:
    // 0x1807ec: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1807f0:
    // 0x1807f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1807f4:
    // 0x1807f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1807f8:
    // 0x1807f8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1807fc:
    // 0x1807fc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1807fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_180800:
    // 0x180800: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_180804:
    // 0x180804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180808:
    // 0x180808: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x180808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_18080c:
    // 0x18080c: 0x8f8587dc  lw          $a1, -0x7824($gp)
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180810:
    // 0x180810: 0xc066972  jal         func_19A5C8
label_180814:
    if (ctx->pc == 0x180814u) {
        ctx->pc = 0x180814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180810u;
        // 0x180814: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180818u;
        goto label_180818;
    }
    ctx->pc = 0x180810u;
    SET_GPR_U32(ctx, 31, 0x180818u);
    ctx->pc = 0x180814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180810u;
    // 0x180814: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5C8u, 0x180810u, 0x180818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180818u;
label_180818:
    // 0x180818: 0x8f828808  lw          $v0, -0x77F8($gp)
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936584)));
label_18081c:
    // 0x18081c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_180820:
    if (ctx->pc == 0x180820u) {
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18081Cu;
        // 0x180820: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180824u;
        goto label_180824;
    }
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18081Cu;
        // 0x180820: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18081c) {
            ctx->pc = 0x18083Cu;
            goto label_18083c;
        }
    }
    ctx->pc = 0x180824u;
label_180824:
    // 0x180824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180828:
    // 0x180828: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_18082c:
    // 0x18082c: 0xc06e09c  jal         func_1B8270
label_180830:
    if (ctx->pc == 0x180830u) {
        ctx->pc = 0x180830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18082Cu;
        // 0x180830: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x180834u;
        goto label_180834;
    }
    ctx->pc = 0x18082Cu;
    SET_GPR_U32(ctx, 31, 0x180834u);
    ctx->pc = 0x180830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18082Cu;
    // 0x180830: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8270u, 0x18082Cu, 0x180834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180834u;
label_180834:
    // 0x180834: 0x1000002e  b           . + 4 + (0x2E << 2)
label_180838:
    if (ctx->pc == 0x180838u) {
        ctx->pc = 0x180838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180834u;
        // 0x180838: 0x8f8287d8  lw          $v0, -0x7828($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18083Cu;
        goto label_18083c;
    }
    ctx->pc = 0x180834u;
    {
        const bool branch_taken_0x180834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180834u;
        // 0x180838: 0x8f8287d8  lw          $v0, -0x7828($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180834) {
            ctx->pc = 0x1808F0u;
            goto label_1808f0;
        }
    }
    ctx->pc = 0x18083Cu;
label_18083c:
    // 0x18083c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_180840:
    // 0x180840: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x180840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_180844:
    // 0x180844: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180848:
    // 0x180848: 0xac223ffc  sw          $v0, 0x3FFC($at)
    ctx->pc = 0x180848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16380), GPR_U32(ctx, 2));
label_18084c:
    // 0x18084c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180850:
    // 0x180850: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_180854:
    // 0x180854: 0xc06e09c  jal         func_1B8270
label_180858:
    if (ctx->pc == 0x180858u) {
        ctx->pc = 0x180858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180854u;
        // 0x180858: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18085Cu;
        goto label_18085c;
    }
    ctx->pc = 0x180854u;
    SET_GPR_U32(ctx, 31, 0x18085Cu);
    ctx->pc = 0x180858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180854u;
    // 0x180858: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8270u, 0x180854u, 0x18085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18085Cu;
label_18085c:
    // 0x18085c: 0xc06e090  jal         func_1B8240
label_180860:
    if (ctx->pc == 0x180860u) {
        ctx->pc = 0x180864u;
        goto label_180864;
    }
    ctx->pc = 0x18085Cu;
    SET_GPR_U32(ctx, 31, 0x180864u);
    ctx->pc = 0x1B8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8240u, 0x18085Cu, 0x180864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180864u;
label_180864:
    // 0x180864: 0xc05c1c0  jal         func_170700
label_180868:
    if (ctx->pc == 0x180868u) {
        ctx->pc = 0x18086Cu;
        goto label_18086c;
    }
    ctx->pc = 0x180864u;
    SET_GPR_U32(ctx, 31, 0x18086Cu);
    ctx->pc = 0x170700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170700u, 0x180864u, 0x18086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18086Cu;
label_18086c:
    // 0x18086c: 0xc05bfe4  jal         func_16FF90
label_180870:
    if (ctx->pc == 0x180870u) {
        ctx->pc = 0x180874u;
        goto label_180874;
    }
    ctx->pc = 0x18086Cu;
    SET_GPR_U32(ctx, 31, 0x180874u);
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x18086Cu, 0x180874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180874u;
label_180874:
    // 0x180874: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180878:
    // 0x180878: 0x94274530  lhu         $a3, 0x4530($at)
    ctx->pc = 0x180878u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17712)));
label_18087c:
    // 0x18087c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180880:
    // 0x180880: 0x94264552  lhu         $a2, 0x4552($at)
    ctx->pc = 0x180880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17746)));
label_180884:
    // 0x180884: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180888:
    // 0x180888: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_18088c:
    // 0x18088c: 0x94254532  lhu         $a1, 0x4532($at)
    ctx->pc = 0x18088cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17714)));
label_180890:
    // 0x180890: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x180890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_180894:
    // 0x180894: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x180894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_180898:
    // 0x180898: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_18089c:
    // 0x18089c: 0xff8687d0  sd          $a2, -0x7830($gp)
    ctx->pc = 0x18089cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 6));
label_1808a0:
    // 0x1808a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808a4:
    // 0x1808a4: 0x94244554  lhu         $a0, 0x4554($at)
    ctx->pc = 0x1808a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17748)));
label_1808a8:
    // 0x1808a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808ac:
    // 0x1808ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1808b0:
    // 0x1808b0: 0x94234534  lhu         $v1, 0x4534($at)
    ctx->pc = 0x1808b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17716)));
label_1808b4:
    // 0x1808b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1808b8:
    // 0x1808b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1808bc:
    // 0x1808bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1808c0:
    // 0x1808c0: 0xff8487c8  sd          $a0, -0x7838($gp)
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 4));
label_1808c4:
    // 0x1808c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808c8:
    // 0x1808c8: 0x94224556  lhu         $v0, 0x4556($at)
    ctx->pc = 0x1808c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17750)));
label_1808cc:
    // 0x1808cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1808d0:
    // 0x1808d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1808d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1808d4:
    // 0x1808d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1808d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1808d8:
    // 0x1808d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1808d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1808dc:
    // 0x1808dc: 0xff8287c0  sd          $v0, -0x7840($gp)
    ctx->pc = 0x1808dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 2));
label_1808e0:
    // 0x1808e0: 0x8f828800  lw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
label_1808e4:
    // 0x1808e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1808e8:
    // 0x1808e8: 0xaf828800  sw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 2));
label_1808ec:
    // 0x1808ec: 0x8f8287d8  lw          $v0, -0x7828($gp)
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
label_1808f0:
    // 0x1808f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1808f4:
    if (ctx->pc == 0x1808F4u) {
        ctx->pc = 0x1808F8u;
        goto label_1808f8;
    }
    ctx->pc = 0x1808F0u;
    {
        const bool branch_taken_0x1808f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808f0) {
            ctx->pc = 0x180908u;
            goto label_180908;
        }
    }
    ctx->pc = 0x1808F8u;
label_1808f8:
    // 0x1808f8: 0x40f809  jalr        $v0
label_1808fc:
    if (ctx->pc == 0x1808FCu) {
        ctx->pc = 0x180900u;
        goto label_180900;
    }
    ctx->pc = 0x1808F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808F8u, 0x180900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180900u;
label_180900:
    // 0x180900: 0x10000004  b           . + 4 + (0x4 << 2)
label_180904:
    if (ctx->pc == 0x180904u) {
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180908u;
        goto label_180908;
    }
    ctx->pc = 0x180900u;
    {
        const bool branch_taken_0x180900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180900) {
            ctx->pc = 0x180914u;
            goto label_180914;
        }
    }
    ctx->pc = 0x180908u;
label_180908:
    // 0x180908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18090c:
    // 0x18090c: 0xaf828808  sw          $v0, -0x77F8($gp)
    ctx->pc = 0x18090cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 2));
label_180910:
    // 0x180910: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
label_180914:
    // 0x180914: 0xc069228  jal         func_1A48A0
label_180918:
    if (ctx->pc == 0x180918u) {
        ctx->pc = 0x180918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180914u;
        // 0x180918: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18091Cu;
        goto label_18091c;
    }
    ctx->pc = 0x180914u;
    SET_GPR_U32(ctx, 31, 0x18091Cu);
    ctx->pc = 0x180918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180914u;
    // 0x180918: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48A0u, 0x180914u, 0x18091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18091Cu;
label_18091c:
    // 0x18091c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_180920:
    // 0x180920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180924:
    if (ctx->pc == 0x180924u) {
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180920u;
        // 0x180924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180928u;
        goto label_180928;
    }
    ctx->pc = 0x180920u;
    {
        const bool branch_taken_0x180920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180920u;
        // 0x180924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180920) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180928u;
label_180928:
    // 0x180928: 0xc069214  jal         func_1A4850
label_18092c:
    if (ctx->pc == 0x18092Cu) {
        ctx->pc = 0x18092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180928u;
        // 0x18092c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180930u;
        goto label_180930;
    }
    ctx->pc = 0x180928u;
    SET_GPR_U32(ctx, 31, 0x180930u);
    ctx->pc = 0x18092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180928u;
    // 0x18092c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x180928u, 0x180930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180930u;
label_180930:
    // 0x180930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180934:
    // 0x180934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x180938u;
}
