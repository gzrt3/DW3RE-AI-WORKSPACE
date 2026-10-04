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

// Function: FUN_002395a0
// Address: 0x2395a0 - 0x2396ec
void FUN_002395a0_0x2395a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002395a0_0x2395a0");
#endif

    switch (ctx->pc) {
        case 0x2395f8u: goto label_2395f8;
        case 0x239668u: goto label_239668;
        case 0x2396c8u: goto label_2396c8;
        default: break;
    }

    ctx->pc = 0x2395a0u;

    // 0x2395a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2395a4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2395a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2395a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2395a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395ac: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2395acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2395b0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2395b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2395b4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2395b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2395b8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2395b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2395bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2395bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2395c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2395C0u;
    {
        const bool branch_taken_0x2395c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395C0u;
        // 0x2395c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395c0) {
            ctx->pc = 0x2395E0u;
            goto label_2395e0;
        }
    }
    ctx->pc = 0x2395C8u;
    // 0x2395c8: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x2395c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x2395cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2395d0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2395d4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2395D4u;
    {
        const bool branch_taken_0x2395d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D4u;
        // 0x2395d8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395d4) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x2395DCu;
    // 0x2395dc: 0x0  nop
    ctx->pc = 0x2395dcu;
    // NOP
label_2395e0:
    // 0x2395e0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2395e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2395e4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2395E4u;
    {
        const bool branch_taken_0x2395e4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2395E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395E4u;
        // 0x2395e8: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395e4) {
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395ECu;
    // 0x2395ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2395f0: 0xc08e3da  jal         func_238F68
    ctx->pc = 0x2395F0u;
    SET_GPR_U32(ctx, 31, 0x2395F8u);
    ctx->pc = 0x2395F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395F0u;
    // 0x2395f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238F68u, 0x2395F0u, 0x2395F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395F8u;
label_2395f8:
    // 0x2395f8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2395F8u;
    {
        const bool branch_taken_0x2395f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2395FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F8u;
        // 0x2395fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395f8) {
            ctx->pc = 0x239618u;
            goto label_239618;
        }
    }
    ctx->pc = 0x239600u;
    // 0x239600: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x239600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x239604: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_239608:
    // 0x239608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23960c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23960cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x239610: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x239610u;
    {
        const bool branch_taken_0x239610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239610u;
        // 0x239614: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239610) {
            ctx->pc = 0x23965Cu;
            goto label_23965c;
        }
    }
    ctx->pc = 0x239618u;
label_239618:
    // 0x239618: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x239618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23961c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x239620: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x239620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x239624: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x239624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x239628: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239628u;
    {
        const bool branch_taken_0x239628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239628u;
        // 0x23962c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239628) {
            ctx->pc = 0x239650u;
            goto label_239650;
        }
    }
    ctx->pc = 0x239630u;
    // 0x239630: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x239634: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x239638: 0x2442c9b0  addiu       $v0, $v0, -0x3650
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953392));
    // 0x23963c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23963Cu;
    {
        const bool branch_taken_0x23963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23963c) {
            ctx->pc = 0x239654u;
            goto label_239654;
        }
    }
    ctx->pc = 0x239644u;
    // 0x239644: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x239644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x239648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239648u;
    {
        const bool branch_taken_0x239648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239648u;
        // 0x23964c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239648) {
            ctx->pc = 0x239658u;
            goto label_239658;
        }
    }
    ctx->pc = 0x239650u;
label_239650:
    // 0x239650: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x239650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_239654:
    // 0x239654: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x239654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_239658:
    // 0x239658: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x239658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23965c:
    // 0x23965c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x239660: 0xc08e708  jal         func_239C20
    ctx->pc = 0x239660u;
    SET_GPR_U32(ctx, 31, 0x239668u);
    ctx->pc = 0x239664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239660u;
    // 0x239664: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x239660u, 0x239668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239668u;
label_239668:
    // 0x239668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23966c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23966Cu;
    {
        const bool branch_taken_0x23966c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23966Cu;
        // 0x239670: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23966c) {
            ctx->pc = 0x239698u;
            goto label_239698;
        }
    }
    ctx->pc = 0x239674u;
    // 0x239674: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x239678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23967c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x23967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x239680: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x239684: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x239684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x239688: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x239688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23968c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23968Cu;
    {
        const bool branch_taken_0x23968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23968c) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x239694u;
    // 0x239694: 0x0  nop
    ctx->pc = 0x239694u;
    // NOP
label_239698:
    // 0x239698: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x23969c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2396a0: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x2396a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2396a8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2396a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2396ac: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2396acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2396b0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2396b4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2396b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x2396b8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2396B8u;
    {
        const bool branch_taken_0x2396b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B8u;
        // 0x2396bc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396b8) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x2396C0u;
    // 0x2396c0: 0xc0693f4  jal         func_1A4FD0
    ctx->pc = 0x2396C0u;
    SET_GPR_U32(ctx, 31, 0x2396C8u);
    ctx->pc = 0x2396C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396C0u;
    // 0x2396c4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FD0u, 0x2396C0u, 0x2396C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396C8u;
label_2396c8:
    // 0x2396c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396C8u;
            // 0x2396cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2396E0u;
            goto label_2396e0;
        }
    }
    ctx->pc = 0x2396D0u;
    // 0x2396d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2396d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2396d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2396d8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2396dc:
    // 0x2396dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2396e0:
    // 0x2396e0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2396e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2396e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2396e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2396e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->pc = 0x2396ecu;
}
