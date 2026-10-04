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

// Function: FUN_001ac840
// Address: 0x1ac840 - 0x1ac914
void FUN_001ac840_0x1ac840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac840_0x1ac840");
#endif

    switch (ctx->pc) {
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac8ecu: goto label_1ac8ec;
        default: break;
    }

    ctx->pc = 0x1ac840u;

    // 0x1ac840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ac844: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ac848: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ac84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ac84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac850: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ac854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ac85c: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC85Cu;
    SET_GPR_U32(ctx, 31, 0x1AC864u);
    ctx->pc = 0x1AC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC85Cu;
    // 0x1ac860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC85Cu, 0x1AC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC864u;
    {
        const bool branch_taken_0x1ac864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac864) {
            ctx->pc = 0x1AC874u;
            goto label_1ac874;
        }
    }
    ctx->pc = 0x1AC86Cu;
    // 0x1ac86c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x24e34780  addiu       $v1, $a3, 0x4780
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
    // 0x1ac878: 0xacf24780  sw          $s2, 0x4780($a3)
    ctx->pc = 0x1ac878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18304), GPR_U32(ctx, 18));
    // 0x1ac87c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC87Cu;
    {
        const bool branch_taken_0x1ac87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac87c) {
            ctx->pc = 0x1AC890u;
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC884u;
    // 0x1ac884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ac884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac888: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac894: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC89Cu;
    // 0x1ac89c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac8a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC8A8u;
    {
        const bool branch_taken_0x1ac8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac8a8) {
            ctx->pc = 0x1AC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8A8u;
            // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8BCu;
            goto label_1ac8bc;
        }
    }
    ctx->pc = 0x1AC8B0u;
    // 0x1ac8b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac8b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC8B4u;
    {
        const bool branch_taken_0x1ac8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b4) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC8BCu;
label_1ac8bc:
    // 0x1ac8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ac8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ac8c0:
    // 0x1ac8c0: 0x24e74780  addiu       $a3, $a3, 0x4780
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
    // 0x1ac8c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac8c8: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8d8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac8dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8e0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac8e4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC8E4u;
    SET_GPR_U32(ctx, 31, 0x1AC8ECu);
    ctx->pc = 0x1AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E4u;
    // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC8E4u, 0x1AC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac8f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ac8f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ac8fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac900: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ac900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ac904:
    // 0x1ac904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac90c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac914u;
}
