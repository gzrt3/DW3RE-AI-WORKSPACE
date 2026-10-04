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

// Function: FUN_00134780
// Address: 0x134780 - 0x1348c4
void FUN_00134780_0x134780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134780_0x134780");
#endif

    switch (ctx->pc) {
        case 0x134780u: goto label_134780;
        case 0x134784u: goto label_134784;
        case 0x134788u: goto label_134788;
        case 0x13478cu: goto label_13478c;
        case 0x134790u: goto label_134790;
        case 0x134794u: goto label_134794;
        case 0x134798u: goto label_134798;
        case 0x13479cu: goto label_13479c;
        case 0x1347a0u: goto label_1347a0;
        case 0x1347a4u: goto label_1347a4;
        case 0x1347a8u: goto label_1347a8;
        case 0x1347acu: goto label_1347ac;
        case 0x1347b0u: goto label_1347b0;
        case 0x1347b4u: goto label_1347b4;
        case 0x1347b8u: goto label_1347b8;
        case 0x1347bcu: goto label_1347bc;
        case 0x1347c0u: goto label_1347c0;
        case 0x1347c4u: goto label_1347c4;
        case 0x1347c8u: goto label_1347c8;
        case 0x1347ccu: goto label_1347cc;
        case 0x1347d0u: goto label_1347d0;
        case 0x1347d4u: goto label_1347d4;
        case 0x1347d8u: goto label_1347d8;
        case 0x1347dcu: goto label_1347dc;
        case 0x1347e0u: goto label_1347e0;
        case 0x1347e4u: goto label_1347e4;
        case 0x1347e8u: goto label_1347e8;
        case 0x1347ecu: goto label_1347ec;
        case 0x1347f0u: goto label_1347f0;
        case 0x1347f4u: goto label_1347f4;
        case 0x1347f8u: goto label_1347f8;
        case 0x1347fcu: goto label_1347fc;
        case 0x134800u: goto label_134800;
        case 0x134804u: goto label_134804;
        case 0x134808u: goto label_134808;
        case 0x13480cu: goto label_13480c;
        case 0x134810u: goto label_134810;
        case 0x134814u: goto label_134814;
        case 0x134818u: goto label_134818;
        case 0x13481cu: goto label_13481c;
        case 0x134820u: goto label_134820;
        case 0x134824u: goto label_134824;
        case 0x134828u: goto label_134828;
        case 0x13482cu: goto label_13482c;
        case 0x134830u: goto label_134830;
        case 0x134834u: goto label_134834;
        case 0x134838u: goto label_134838;
        case 0x13483cu: goto label_13483c;
        case 0x134840u: goto label_134840;
        case 0x134844u: goto label_134844;
        case 0x134848u: goto label_134848;
        case 0x13484cu: goto label_13484c;
        case 0x134850u: goto label_134850;
        case 0x134854u: goto label_134854;
        case 0x134858u: goto label_134858;
        case 0x13485cu: goto label_13485c;
        case 0x134860u: goto label_134860;
        case 0x134864u: goto label_134864;
        case 0x134868u: goto label_134868;
        case 0x13486cu: goto label_13486c;
        case 0x134870u: goto label_134870;
        case 0x134874u: goto label_134874;
        case 0x134878u: goto label_134878;
        case 0x13487cu: goto label_13487c;
        case 0x134880u: goto label_134880;
        case 0x134884u: goto label_134884;
        case 0x134888u: goto label_134888;
        case 0x13488cu: goto label_13488c;
        case 0x134890u: goto label_134890;
        case 0x134894u: goto label_134894;
        case 0x134898u: goto label_134898;
        case 0x13489cu: goto label_13489c;
        case 0x1348a0u: goto label_1348a0;
        case 0x1348a4u: goto label_1348a4;
        case 0x1348a8u: goto label_1348a8;
        case 0x1348acu: goto label_1348ac;
        case 0x1348b0u: goto label_1348b0;
        case 0x1348b4u: goto label_1348b4;
        case 0x1348b8u: goto label_1348b8;
        case 0x1348bcu: goto label_1348bc;
        case 0x1348c0u: goto label_1348c0;
        default: break;
    }

    ctx->pc = 0x134780u;

label_134780:
    // 0x134780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_134784:
    // 0x134784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x134784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_134788:
    // 0x134788: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x134788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13478c:
    // 0x13478c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_134790:
    // 0x134790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_134794:
    // 0x134794: 0x27858100  addiu       $a1, $gp, -0x7F00
    ctx->pc = 0x134794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
label_134798:
    // 0x134798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13479c:
    // 0x13479c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13479cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1347a0:
    // 0x1347a0: 0xa422a40c  sh          $v0, -0x5BF4($at)
    ctx->pc = 0x1347a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943756), (uint16_t)GPR_U32(ctx, 2));
label_1347a4:
    // 0x1347a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347a8:
    // 0x1347a8: 0xa422a40e  sh          $v0, -0x5BF2($at)
    ctx->pc = 0x1347a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943758), (uint16_t)GPR_U32(ctx, 2));
label_1347ac:
    // 0x1347ac: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347b0:
    // 0x1347b0: 0x8c24a3cc  lw          $a0, -0x5C34($at)
    ctx->pc = 0x1347b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1347b4:
    // 0x1347b4: 0xc04cfd0  jal         func_133F40
label_1347b8:
    if (ctx->pc == 0x1347B8u) {
        ctx->pc = 0x1347B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B4u;
        // 0x1347b8: 0x27a7003e  addiu       $a3, $sp, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347BCu;
        goto label_1347bc;
    }
    ctx->pc = 0x1347B4u;
    SET_GPR_U32(ctx, 31, 0x1347BCu);
    ctx->pc = 0x1347B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347B4u;
    // 0x1347b8: 0x27a7003e  addiu       $a3, $sp, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F40u, 0x1347B4u, 0x1347BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347BCu;
label_1347bc:
    // 0x1347bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1347c0:
    if (ctx->pc == 0x1347C0u) {
        ctx->pc = 0x1347C4u;
        goto label_1347c4;
    }
    ctx->pc = 0x1347BCu;
    {
        const bool branch_taken_0x1347bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347bc) {
            ctx->pc = 0x1347ECu;
            goto label_1347ec;
        }
    }
    ctx->pc = 0x1347C4u;
label_1347c4:
    // 0x1347c4: 0x87a3003e  lh          $v1, 0x3E($sp)
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
label_1347c8:
    // 0x1347c8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347cc:
    // 0x1347cc: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x1347ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_1347d0:
    // 0x1347d0: 0xa423a40c  sh          $v1, -0x5BF4($at)
    ctx->pc = 0x1347d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943756), (uint16_t)GPR_U32(ctx, 3));
label_1347d4:
    // 0x1347d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347d8:
    // 0x1347d8: 0x8423a40c  lh          $v1, -0x5BF4($at)
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943756)));
label_1347dc:
    // 0x1347dc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1347e0:
    if (ctx->pc == 0x1347E0u) {
        ctx->pc = 0x1347E4u;
        goto label_1347e4;
    }
    ctx->pc = 0x1347DCu;
    {
        const bool branch_taken_0x1347dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1347dc) {
            ctx->pc = 0x1347ECu;
            goto label_1347ec;
        }
    }
    ctx->pc = 0x1347E4u;
label_1347e4:
    // 0x1347e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347e8:
    // 0x1347e8: 0xa420a40c  sh          $zero, -0x5BF4($at)
    ctx->pc = 0x1347e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943756), (uint16_t)GPR_U32(ctx, 0));
label_1347ec:
    // 0x1347ec: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1347f0:
    // 0x1347f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1347f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1347f4:
    // 0x1347f4: 0x8c24a3cc  lw          $a0, -0x5C34($at)
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1347f8:
    // 0x1347f8: 0x0  nop
    ctx->pc = 0x1347f8u;
    // NOP
label_1347fc:
    // 0x1347fc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_134800:
    // 0x134800: 0x1000001c  b           . + 4 + (0x1C << 2)
label_134804:
    if (ctx->pc == 0x134804u) {
        ctx->pc = 0x134804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134800u;
        // 0x134804: 0x9431a3e4  lhu         $s1, -0x5C1C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943716)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134808u;
        goto label_134808;
    }
    ctx->pc = 0x134800u;
    {
        const bool branch_taken_0x134800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134800u;
        // 0x134804: 0x9431a3e4  lhu         $s1, -0x5C1C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134800) {
            ctx->pc = 0x134874u;
            goto label_134874;
        }
    }
    ctx->pc = 0x134808u;
label_134808:
    // 0x134808: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x134808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_13480c:
    // 0x13480c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_134810:
    if (ctx->pc == 0x134810u) {
        ctx->pc = 0x134814u;
        goto label_134814;
    }
    ctx->pc = 0x13480Cu;
    {
        const bool branch_taken_0x13480c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x13480c) {
            ctx->pc = 0x13481Cu;
            goto label_13481c;
        }
    }
    ctx->pc = 0x134814u;
label_134814:
    // 0x134814: 0x1000001d  b           . + 4 + (0x1D << 2)
label_134818:
    if (ctx->pc == 0x134818u) {
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0xa7b1003e  sh          $s1, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13481Cu;
        goto label_13481c;
    }
    ctx->pc = 0x134814u;
    {
        const bool branch_taken_0x134814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0xa7b1003e  sh          $s1, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134814) {
            ctx->pc = 0x13488Cu;
            goto label_13488c;
        }
    }
    ctx->pc = 0x13481Cu;
label_13481c:
    // 0x13481c: 0x0  nop
    ctx->pc = 0x13481cu;
    // NOP
label_134820:
    // 0x134820: 0x28a30044  slti        $v1, $a1, 0x44
    ctx->pc = 0x134820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)68) ? 1 : 0);
label_134824:
    // 0x134824: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_134828:
    if (ctx->pc == 0x134828u) {
        ctx->pc = 0x134828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134824u;
        // 0x134828: 0x28a1004e  slti        $at, $a1, 0x4E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)78) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13482Cu;
        goto label_13482c;
    }
    ctx->pc = 0x134824u;
    {
        const bool branch_taken_0x134824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134824u;
        // 0x134828: 0x28a1004e  slti        $at, $a1, 0x4E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)78) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134824) {
            ctx->pc = 0x134854u;
            goto label_134854;
        }
    }
    ctx->pc = 0x13482Cu;
label_13482c:
    // 0x13482c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_134830:
    if (ctx->pc == 0x134830u) {
        ctx->pc = 0x134834u;
        goto label_134834;
    }
    ctx->pc = 0x13482Cu;
    {
        const bool branch_taken_0x13482c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13482c) {
            ctx->pc = 0x134854u;
            goto label_134854;
        }
    }
    ctx->pc = 0x134834u;
label_134834:
    // 0x134834: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_134838:
    // 0x134838: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13483c:
    // 0x13483c: 0x2442fe90  addiu       $v0, $v0, -0x170
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_134840:
    // 0x134840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_134844:
    // 0x134844: 0x8c42fef0  lw          $v0, -0x110($v0)
    ctx->pc = 0x134844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967024)));
label_134848:
    // 0x134848: 0x40f809  jalr        $v0
label_13484c:
    if (ctx->pc == 0x13484Cu) {
        ctx->pc = 0x134850u;
        goto label_134850;
    }
    ctx->pc = 0x134848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134848u, 0x134850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134850u;
label_134850:
    // 0x134850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134854:
    // 0x134854: 0x0  nop
    ctx->pc = 0x134854u;
    // NOP
label_134858:
    // 0x134858: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x134858u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_13485c:
    // 0x13485c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x13485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_134860:
    // 0x134860: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_134864:
    if (ctx->pc == 0x134864u) {
        ctx->pc = 0x134868u;
        goto label_134868;
    }
    ctx->pc = 0x134860u;
    {
        const bool branch_taken_0x134860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x134860) {
            ctx->pc = 0x134870u;
            goto label_134870;
        }
    }
    ctx->pc = 0x134868u;
label_134868:
    // 0x134868: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x134868u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_13486c:
    // 0x13486c: 0x0  nop
    ctx->pc = 0x13486cu;
    // NOP
label_134870:
    // 0x134870: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x134870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_134874:
    // 0x134874: 0x0  nop
    ctx->pc = 0x134874u;
    // NOP
label_134878:
    // 0x134878: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_13487c:
    // 0x13487c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13487cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_134880:
    // 0x134880: 0x14a3ffe1  bne         $a1, $v1, . + 4 + (-0x1F << 2)
label_134884:
    if (ctx->pc == 0x134884u) {
        ctx->pc = 0x134888u;
        goto label_134888;
    }
    ctx->pc = 0x134880u;
    {
        const bool branch_taken_0x134880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x134880) {
            ctx->pc = 0x134808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134808;
        }
    }
    ctx->pc = 0x134888u;
label_134888:
    // 0x134888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13488c:
    // 0x13488c: 0x0  nop
    ctx->pc = 0x13488cu;
    // NOP
label_134890:
    // 0x134890: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_134894:
    if (ctx->pc == 0x134894u) {
        ctx->pc = 0x134898u;
        goto label_134898;
    }
    ctx->pc = 0x134890u;
    {
        const bool branch_taken_0x134890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134890) {
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x134898u;
label_134898:
    // 0x134898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13489c:
    // 0x13489c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_1348a0:
    if (ctx->pc == 0x1348A0u) {
        ctx->pc = 0x1348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13489Cu;
        // 0x1348a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1348A4u;
        goto label_1348a4;
    }
    ctx->pc = 0x13489Cu;
    {
        const bool branch_taken_0x13489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13489Cu;
        // 0x1348a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13489c) {
            ctx->pc = 0x1347FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1347fc;
        }
    }
    ctx->pc = 0x1348A4u;
label_1348a4:
    // 0x1348a4: 0x0  nop
    ctx->pc = 0x1348a4u;
    // NOP
label_1348a8:
    // 0x1348a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1348ac:
    if (ctx->pc == 0x1348ACu) {
        ctx->pc = 0x1348B0u;
        goto label_1348b0;
    }
    ctx->pc = 0x1348A8u;
    {
        const bool branch_taken_0x1348a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348a8) {
            ctx->pc = 0x1348C0u;
            goto label_1348c0;
        }
    }
    ctx->pc = 0x1348B0u;
label_1348b0:
    // 0x1348b0: 0x87a3003e  lh          $v1, 0x3E($sp)
    ctx->pc = 0x1348b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
label_1348b4:
    // 0x1348b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1348b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1348b8:
    // 0x1348b8: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x1348b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_1348bc:
    // 0x1348bc: 0xa423a40e  sh          $v1, -0x5BF2($at)
    ctx->pc = 0x1348bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943758), (uint16_t)GPR_U32(ctx, 3));
label_1348c0:
    // 0x1348c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1348c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1348c4u;
}
