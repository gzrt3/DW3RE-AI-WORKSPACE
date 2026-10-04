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

// Function: FUN_002318b8
// Address: 0x2318b8 - 0x231a3c
void FUN_002318b8_0x2318b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002318b8_0x2318b8");
#endif

    switch (ctx->pc) {
        case 0x2318b8u: goto label_2318b8;
        case 0x2318bcu: goto label_2318bc;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318c8u: goto label_2318c8;
        case 0x2318ccu: goto label_2318cc;
        case 0x2318d0u: goto label_2318d0;
        case 0x2318d4u: goto label_2318d4;
        case 0x2318d8u: goto label_2318d8;
        case 0x2318dcu: goto label_2318dc;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318e4u: goto label_2318e4;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318ecu: goto label_2318ec;
        case 0x2318f0u: goto label_2318f0;
        case 0x2318f4u: goto label_2318f4;
        case 0x2318f8u: goto label_2318f8;
        case 0x2318fcu: goto label_2318fc;
        case 0x231900u: goto label_231900;
        case 0x231904u: goto label_231904;
        case 0x231908u: goto label_231908;
        case 0x23190cu: goto label_23190c;
        case 0x231910u: goto label_231910;
        case 0x231914u: goto label_231914;
        case 0x231918u: goto label_231918;
        case 0x23191cu: goto label_23191c;
        case 0x231920u: goto label_231920;
        case 0x231924u: goto label_231924;
        case 0x231928u: goto label_231928;
        case 0x23192cu: goto label_23192c;
        case 0x231930u: goto label_231930;
        case 0x231934u: goto label_231934;
        case 0x231938u: goto label_231938;
        case 0x23193cu: goto label_23193c;
        case 0x231940u: goto label_231940;
        case 0x231944u: goto label_231944;
        case 0x231948u: goto label_231948;
        case 0x23194cu: goto label_23194c;
        case 0x231950u: goto label_231950;
        case 0x231954u: goto label_231954;
        case 0x231958u: goto label_231958;
        case 0x23195cu: goto label_23195c;
        case 0x231960u: goto label_231960;
        case 0x231964u: goto label_231964;
        case 0x231968u: goto label_231968;
        case 0x23196cu: goto label_23196c;
        case 0x231970u: goto label_231970;
        case 0x231974u: goto label_231974;
        case 0x231978u: goto label_231978;
        case 0x23197cu: goto label_23197c;
        case 0x231980u: goto label_231980;
        case 0x231984u: goto label_231984;
        case 0x231988u: goto label_231988;
        case 0x23198cu: goto label_23198c;
        case 0x231990u: goto label_231990;
        case 0x231994u: goto label_231994;
        case 0x231998u: goto label_231998;
        case 0x23199cu: goto label_23199c;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319a4u: goto label_2319a4;
        case 0x2319a8u: goto label_2319a8;
        case 0x2319acu: goto label_2319ac;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319b4u: goto label_2319b4;
        case 0x2319b8u: goto label_2319b8;
        case 0x2319bcu: goto label_2319bc;
        case 0x2319c0u: goto label_2319c0;
        case 0x2319c4u: goto label_2319c4;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319ccu: goto label_2319cc;
        case 0x2319d0u: goto label_2319d0;
        case 0x2319d4u: goto label_2319d4;
        case 0x2319d8u: goto label_2319d8;
        case 0x2319dcu: goto label_2319dc;
        case 0x2319e0u: goto label_2319e0;
        case 0x2319e4u: goto label_2319e4;
        case 0x2319e8u: goto label_2319e8;
        case 0x2319ecu: goto label_2319ec;
        case 0x2319f0u: goto label_2319f0;
        case 0x2319f4u: goto label_2319f4;
        case 0x2319f8u: goto label_2319f8;
        case 0x2319fcu: goto label_2319fc;
        case 0x231a00u: goto label_231a00;
        case 0x231a04u: goto label_231a04;
        case 0x231a08u: goto label_231a08;
        case 0x231a0cu: goto label_231a0c;
        case 0x231a10u: goto label_231a10;
        case 0x231a14u: goto label_231a14;
        case 0x231a18u: goto label_231a18;
        case 0x231a1cu: goto label_231a1c;
        case 0x231a20u: goto label_231a20;
        case 0x231a24u: goto label_231a24;
        case 0x231a28u: goto label_231a28;
        case 0x231a2cu: goto label_231a2c;
        case 0x231a30u: goto label_231a30;
        case 0x231a34u: goto label_231a34;
        case 0x231a38u: goto label_231a38;
        default: break;
    }

    ctx->pc = 0x2318b8u;

label_2318b8:
    // 0x2318b8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2318b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2318bc:
    // 0x2318bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2318bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2318c0:
    // 0x2318c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2318c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2318c4:
    // 0x2318c4: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_2318c8:
    if (ctx->pc == 0x2318C8u) {
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C4u;
        // 0x2318c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2318CCu;
        goto label_2318cc;
    }
    ctx->pc = 0x2318C4u;
    {
        const bool branch_taken_0x2318c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C4u;
        // 0x2318c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c4) {
            ctx->pc = 0x231A1Cu;
            goto label_231a1c;
        }
    }
    ctx->pc = 0x2318CCu;
label_2318cc:
    // 0x2318cc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2318ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2318d0:
    // 0x2318d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2318d4:
    // 0x2318d4: 0x8c421288  lw          $v0, 0x1288($v0)
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4744)));
label_2318d8:
    // 0x2318d8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2318dc:
    if (ctx->pc == 0x2318DCu) {
        ctx->pc = 0x2318DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D8u;
        // 0x2318dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2318E0u;
        goto label_2318e0;
    }
    ctx->pc = 0x2318D8u;
    {
        const bool branch_taken_0x2318d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D8u;
        // 0x2318dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318d8) {
            ctx->pc = 0x23198Cu;
            goto label_23198c;
        }
    }
    ctx->pc = 0x2318E0u;
label_2318e0:
    // 0x2318e0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2318e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2318e4:
    // 0x2318e4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2318e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_2318e8:
    // 0x2318e8: 0x8c241278  lw          $a0, 0x1278($at)
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4728)));
label_2318ec:
    // 0x2318ec: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
label_2318f0:
    if (ctx->pc == 0x2318F0u) {
        ctx->pc = 0x2318F4u;
        goto label_2318f4;
    }
    ctx->pc = 0x2318ECu;
    {
        const bool branch_taken_0x2318ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2318ec) {
            ctx->pc = 0x231910u;
            goto label_231910;
        }
    }
    ctx->pc = 0x2318F4u;
label_2318f4:
    // 0x2318f4: 0xc06919c  jal         func_1A4670
label_2318f8:
    if (ctx->pc == 0x2318F8u) {
        ctx->pc = 0x2318FCu;
        goto label_2318fc;
    }
    ctx->pc = 0x2318F4u;
    SET_GPR_U32(ctx, 31, 0x2318FCu);
    ctx->pc = 0x1A4670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4670u, 0x2318F4u, 0x2318FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318FCu;
label_2318fc:
    // 0x2318fc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231900:
    // 0x231900: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x231900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_231904:
    // 0x231904: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x231904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231908:
    // 0x231908: 0xc06918c  jal         func_1A4630
label_23190c:
    if (ctx->pc == 0x23190Cu) {
        ctx->pc = 0x23190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231908u;
        // 0x23190c: 0x8c841278  lw          $a0, 0x1278($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231910u;
        goto label_231910;
    }
    ctx->pc = 0x231908u;
    SET_GPR_U32(ctx, 31, 0x231910u);
    ctx->pc = 0x23190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231908u;
    // 0x23190c: 0x8c841278  lw          $a0, 0x1278($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4630u, 0x231908u, 0x231910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231910u;
label_231910:
    // 0x231910: 0xc0694c0  jal         func_1A5300
label_231914:
    if (ctx->pc == 0x231914u) {
        ctx->pc = 0x231914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231910u;
        // 0x231914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231918u;
        goto label_231918;
    }
    ctx->pc = 0x231910u;
    SET_GPR_U32(ctx, 31, 0x231918u);
    ctx->pc = 0x231914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231910u;
    // 0x231914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x231910u, 0x231918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231918u;
label_231918:
    // 0x231918: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23191c:
    // 0x23191c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_231920:
    // 0x231920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231924:
    // 0x231924: 0x8c421208  lw          $v0, 0x1208($v0)
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4616)));
label_231928:
    // 0x231928: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_23192c:
    if (ctx->pc == 0x23192Cu) {
        ctx->pc = 0x231930u;
        goto label_231930;
    }
    ctx->pc = 0x231928u;
    {
        const bool branch_taken_0x231928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x231928) {
            ctx->pc = 0x23193Cu;
            goto label_23193c;
        }
    }
    ctx->pc = 0x231930u;
label_231930:
    // 0x231930: 0xc08d14c  jal         func_234530
label_231934:
    if (ctx->pc == 0x231934u) {
        ctx->pc = 0x231934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231930u;
        // 0x231934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231938u;
        goto label_231938;
    }
    ctx->pc = 0x231930u;
    SET_GPR_U32(ctx, 31, 0x231938u);
    ctx->pc = 0x231934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231930u;
    // 0x231934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234530u, 0x231930u, 0x231938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23193c:
    // 0x23193c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_231940:
    // 0x231940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231944:
    // 0x231944: 0x8c42127c  lw          $v0, 0x127C($v0)
    ctx->pc = 0x231944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4732)));
label_231948:
    // 0x231948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23194c:
    if (ctx->pc == 0x23194Cu) {
        ctx->pc = 0x231950u;
        goto label_231950;
    }
    ctx->pc = 0x231948u;
    {
        const bool branch_taken_0x231948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231948) {
            ctx->pc = 0x23195Cu;
            goto label_23195c;
        }
    }
    ctx->pc = 0x231950u;
label_231950:
    // 0x231950: 0xc0694da  jal         func_1A5368
label_231954:
    if (ctx->pc == 0x231954u) {
        ctx->pc = 0x231954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231950u;
        // 0x231954: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231958u;
        goto label_231958;
    }
    ctx->pc = 0x231950u;
    SET_GPR_U32(ctx, 31, 0x231958u);
    ctx->pc = 0x231954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231950u;
    // 0x231954: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x231950u, 0x231958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231958u;
label_231958:
    // 0x231958: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23195c:
    // 0x23195c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231960:
    // 0x231960: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231964:
    // 0x231964: 0xc08cd22  jal         func_233488
label_231968:
    if (ctx->pc == 0x231968u) {
        ctx->pc = 0x231968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231964u;
        // 0x231968: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23196Cu;
        goto label_23196c;
    }
    ctx->pc = 0x231964u;
    SET_GPR_U32(ctx, 31, 0x23196Cu);
    ctx->pc = 0x231968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231964u;
    // 0x231968: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233488u, 0x231964u, 0x23196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23196Cu;
label_23196c:
    // 0x23196c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231970:
    // 0x231970: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_231974:
    // 0x231974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_231978:
    if (ctx->pc == 0x231978u) {
        ctx->pc = 0x231978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231974u;
        // 0x231978: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23197Cu;
        goto label_23197c;
    }
    ctx->pc = 0x231974u;
    {
        const bool branch_taken_0x231974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231974u;
        // 0x231978: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231974) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x23197Cu;
label_23197c:
    // 0x23197c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231980:
    // 0x231980: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_231984:
    // 0x231984: 0xc08c7c4  jal         func_231F10
label_231988:
    if (ctx->pc == 0x231988u) {
        ctx->pc = 0x231988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231984u;
        // 0x231988: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23198Cu;
        goto label_23198c;
    }
    ctx->pc = 0x231984u;
    SET_GPR_U32(ctx, 31, 0x23198Cu);
    ctx->pc = 0x231988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231984u;
    // 0x231988: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F10u, 0x231984u, 0x23198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23198Cu;
label_23198c:
    // 0x23198c: 0x8f8382d8  lw          $v1, -0x7D28($gp)
    ctx->pc = 0x23198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_231990:
    // 0x231990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231994:
    // 0x231994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_231998:
    if (ctx->pc == 0x231998u) {
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23199Cu;
        goto label_23199c;
    }
    ctx->pc = 0x231994u;
    {
        const bool branch_taken_0x231994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231994) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2319a0:
    if (ctx->pc == 0x2319A0u) {
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319A4u;
        goto label_2319a4;
    }
    ctx->pc = 0x23199Cu;
    {
        const bool branch_taken_0x23199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23199c) {
            ctx->pc = 0x2319C0u;
            goto label_2319c0;
        }
    }
    ctx->pc = 0x2319A4u;
label_2319a4:
    // 0x2319a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2319a8:
    if (ctx->pc == 0x2319A8u) {
        ctx->pc = 0x2319ACu;
        goto label_2319ac;
    }
    ctx->pc = 0x2319A4u;
    {
        const bool branch_taken_0x2319a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319a4) {
            ctx->pc = 0x2319CCu;
            goto label_2319cc;
        }
    }
    ctx->pc = 0x2319ACu;
label_2319ac:
    // 0x2319ac: 0x0  nop
    ctx->pc = 0x2319acu;
    // NOP
label_2319b0:
    // 0x2319b0: 0xc08da88  jal         func_236A20
label_2319b4:
    if (ctx->pc == 0x2319B4u) {
        ctx->pc = 0x2319B8u;
        goto label_2319b8;
    }
    ctx->pc = 0x2319B0u;
    SET_GPR_U32(ctx, 31, 0x2319B8u);
    ctx->pc = 0x236A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A20u, 0x2319B0u, 0x2319B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B8u;
label_2319b8:
    // 0x2319b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2319bc:
    if (ctx->pc == 0x2319BCu) {
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319C0u;
        goto label_2319c0;
    }
    ctx->pc = 0x2319B8u;
    {
        const bool branch_taken_0x2319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319b8) {
            ctx->pc = 0x2319CCu;
            goto label_2319cc;
        }
    }
    ctx->pc = 0x2319C0u;
label_2319c0:
    // 0x2319c0: 0xc06c2e2  jal         func_1B0B88
label_2319c4:
    if (ctx->pc == 0x2319C4u) {
        ctx->pc = 0x2319C8u;
        goto label_2319c8;
    }
    ctx->pc = 0x2319C0u;
    SET_GPR_U32(ctx, 31, 0x2319C8u);
    ctx->pc = 0x1B0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B88u, 0x2319C0u, 0x2319C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319C8u;
label_2319c8:
    // 0x2319c8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2319cc:
    // 0x2319cc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2319ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2319d0:
    // 0x2319d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2319d4:
    // 0x2319d4: 0x8c421280  lw          $v0, 0x1280($v0)
    ctx->pc = 0x2319d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
label_2319d8:
    // 0x2319d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2319dc:
    if (ctx->pc == 0x2319DCu) {
        ctx->pc = 0x2319DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319D8u;
        // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E0u;
        goto label_2319e0;
    }
    ctx->pc = 0x2319D8u;
    {
        const bool branch_taken_0x2319d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319d8) {
            ctx->pc = 0x2319DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2319D8u;
            // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2319F0u;
            goto label_2319f0;
        }
    }
    ctx->pc = 0x2319E0u;
label_2319e0:
    // 0x2319e0: 0xc06ae18  jal         func_1AB860
label_2319e4:
    if (ctx->pc == 0x2319E4u) {
        ctx->pc = 0x2319E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319E0u;
        // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E8u;
        goto label_2319e8;
    }
    ctx->pc = 0x2319E0u;
    SET_GPR_U32(ctx, 31, 0x2319E8u);
    ctx->pc = 0x2319E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319E0u;
    // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB860u, 0x2319E0u, 0x2319E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319E8u;
label_2319e8:
    // 0x2319e8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2319ec:
    // 0x2319ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2319f0:
    // 0x2319f0: 0x8c4204f0  lw          $v0, 0x4F0($v0)
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1264)));
label_2319f4:
    // 0x2319f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2319f8:
    if (ctx->pc == 0x2319F8u) {
        ctx->pc = 0x2319FCu;
        goto label_2319fc;
    }
    ctx->pc = 0x2319F4u;
    {
        const bool branch_taken_0x2319f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319f4) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2319FCu;
label_2319fc:
    // 0x2319fc: 0x40f809  jalr        $v0
label_231a00:
    if (ctx->pc == 0x231A00u) {
        ctx->pc = 0x231A04u;
        goto label_231a04;
    }
    ctx->pc = 0x2319FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319FCu, 0x231A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231A04u;
label_231a04:
    // 0x231a04: 0x10000005  b           . + 4 + (0x5 << 2)
label_231a08:
    if (ctx->pc == 0x231A08u) {
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A0Cu;
        goto label_231a0c;
    }
    ctx->pc = 0x231A04u;
    {
        const bool branch_taken_0x231a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a04) {
            ctx->pc = 0x231A1Cu;
            goto label_231a1c;
        }
    }
    ctx->pc = 0x231A0Cu;
label_231a0c:
    // 0x231a0c: 0x0  nop
    ctx->pc = 0x231a0cu;
    // NOP
label_231a10:
    // 0x231a10: 0xc08e660  jal         func_239980
label_231a14:
    if (ctx->pc == 0x231A14u) {
        ctx->pc = 0x231A18u;
        goto label_231a18;
    }
    ctx->pc = 0x231A10u;
    SET_GPR_U32(ctx, 31, 0x231A18u);
    ctx->pc = 0x239980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239980u, 0x231A10u, 0x231A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0xaf8082d0  sw          $zero, -0x7D30($gp)
    ctx->pc = 0x231a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
label_231a1c:
    // 0x231a1c: 0x8f8282d4  lw          $v0, -0x7D2C($gp)
    ctx->pc = 0x231a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_231a20:
    // 0x231a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_231a24:
    // 0x231a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_231a28:
    if (ctx->pc == 0x231A28u) {
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A2Cu;
        goto label_231a2c;
    }
    ctx->pc = 0x231A24u;
    {
        const bool branch_taken_0x231a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a24) {
            ctx->pc = 0x231A38u;
            goto label_231a38;
        }
    }
    ctx->pc = 0x231A2Cu;
label_231a2c:
    // 0x231a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231a30:
    // 0x231a30: 0x808db86  j           func_236E18
label_231a34:
    if (ctx->pc == 0x231A34u) {
        ctx->pc = 0x231A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A30u;
        // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A38u;
        goto label_231a38;
    }
    ctx->pc = 0x231A30u;
    ctx->pc = 0x231A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A30u;
    // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E18u;
    FUN_00236e18_0x236e18(rdram, ctx, runtime); return;
    ctx->pc = 0x231A38u;
label_231a38:
    // 0x231a38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x231a3cu;
}
