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

// Function: FUN_00232538
// Address: 0x232538 - 0x232658
void FUN_00232538_0x232538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232538_0x232538");
#endif

    switch (ctx->pc) {
        case 0x232580u: goto label_232580;
        case 0x2325c0u: goto label_2325c0;
        case 0x2325e8u: goto label_2325e8;
        case 0x23261cu: goto label_23261c;
        default: break;
    }

    ctx->pc = 0x232538u;

    // 0x232538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23253c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23254c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23254cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232558: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x232558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x23255c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x232560: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x232560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x232564: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x232564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x232568: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x232568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x23256c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x23256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x232570: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x232570u;
    {
        const bool branch_taken_0x232570 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x232574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232570u;
        // 0x232574: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232570) {
            ctx->pc = 0x2325A4u;
            goto label_2325a4;
        }
    }
    ctx->pc = 0x232578u;
    // 0x232578: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x23257c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232580:
    // 0x232580: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x232580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x232584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x232588: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x23258c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x23258cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x232590: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x232594: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x232594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x232598: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23259c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23259Cu;
    {
        const bool branch_taken_0x23259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23259c) {
            ctx->pc = 0x232580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232580;
        }
    }
    ctx->pc = 0x2325A4u;
label_2325a4:
    // 0x2325a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2325a8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2325A8u;
    {
        const bool branch_taken_0x2325a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a8) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2325B0u;
    // 0x2325b0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x2325b4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2325b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2325b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2325bc: 0x0  nop
    ctx->pc = 0x2325bcu;
    // NOP
label_2325c0:
    // 0x2325c0: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x2325c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2325c8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2325cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2325ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2325d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2325d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2325d8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x2325dc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2325e0: 0xc08c926  jal         func_232498
    ctx->pc = 0x2325E0u;
    SET_GPR_U32(ctx, 31, 0x2325E8u);
    ctx->pc = 0x2325E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325E0u;
    // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232498u, 0x2325E0u, 0x2325E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325E8u;
label_2325e8:
    // 0x2325e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2325ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2325f0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2325F0u;
    {
        const bool branch_taken_0x2325f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325f0) {
            ctx->pc = 0x2325F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2325F0u;
            // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2325C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2325c0;
        }
    }
    ctx->pc = 0x2325F8u;
label_2325f8:
    // 0x2325f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2325fc: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x232600: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x232604: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x232608: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23260c: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x23260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x232610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232614: 0xc08c926  jal         func_232498
    ctx->pc = 0x232614u;
    SET_GPR_U32(ctx, 31, 0x23261Cu);
    ctx->pc = 0x232618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232614u;
    // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232498u, 0x232614u, 0x23261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23261Cu;
label_23261c:
    // 0x23261c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x232620: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x232624: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x232628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23262c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x232630: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x232630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x232634: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x232638: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x23263c: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x232640: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x232640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x232644: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x232644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x232648: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23264c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x232650: 0xc08c90c  jal         func_232430
    ctx->pc = 0x232650u;
    SET_GPR_U32(ctx, 31, 0x232658u);
    ctx->pc = 0x232654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232650u;
    // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232430u, 0x232650u, 0x232658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232658u;
}
