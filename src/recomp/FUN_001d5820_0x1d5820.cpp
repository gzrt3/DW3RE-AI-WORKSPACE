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

// Function: FUN_001d5820
// Address: 0x1d5820 - 0x1d58c4
void FUN_001d5820_0x1d5820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5820_0x1d5820");
#endif

    switch (ctx->pc) {
        case 0x1d583cu: goto label_1d583c;
        case 0x1d58a0u: goto label_1d58a0;
        case 0x1d58acu: goto label_1d58ac;
        default: break;
    }

    ctx->pc = 0x1d5820u;

    // 0x1d5820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d582c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5834: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x1d5838: 0x261003a0  addiu       $s0, $s0, 0x3A0
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_1d583c:
    // 0x1d583c: 0x0  nop
    ctx->pc = 0x1d583cu;
    // NOP
    // 0x1d5840: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d5844: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D58ACu;
            goto label_1d58ac;
        }
    }
    ctx->pc = 0x1D584Cu;
    // 0x1d584c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d5850: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d5854: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1d5858: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5858u;
    {
        const bool branch_taken_0x1d5858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5858) {
            ctx->pc = 0x1D5874u;
            goto label_1d5874;
        }
    }
    ctx->pc = 0x1D5860u;
    // 0x1d5860: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5860u;
    {
        const bool branch_taken_0x1d5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5860) {
            ctx->pc = 0x1D5874u;
            goto label_1d5874;
        }
    }
    ctx->pc = 0x1D5868u;
    // 0x1d5868: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d586c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D586Cu;
    {
        const bool branch_taken_0x1d586c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d586c) {
            ctx->pc = 0x1D58A0u;
            goto label_1d58a0;
        }
    }
    ctx->pc = 0x1D5874u;
label_1d5874:
    // 0x1d5874: 0x0  nop
    ctx->pc = 0x1d5874u;
    // NOP
    // 0x1d5878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5880: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5884: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5888: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d588c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d5890: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d5894: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1d5894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d5898: 0xc05b390  jal         func_16CE40
    ctx->pc = 0x1D5898u;
    SET_GPR_U32(ctx, 31, 0x1D58A0u);
    ctx->pc = 0x1D589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5898u;
    // 0x1d589c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE40u, 0x1D5898u, 0x1D58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58A0u;
label_1d58a0:
    // 0x1d58a0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d58a4: 0xc045460  jal         func_115180
    ctx->pc = 0x1D58A4u;
    SET_GPR_U32(ctx, 31, 0x1D58ACu);
    ctx->pc = 0x1D58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58A4u;
    // 0x1d58a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x1D58A4u, 0x1D58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0x0  nop
    ctx->pc = 0x1d58acu;
    // NOP
    // 0x1d58b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d58b4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d58b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d58b8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D58B8u;
    {
        const bool branch_taken_0x1d58b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B8u;
        // 0x1d58bc: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b8) {
            ctx->pc = 0x1D583Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d583c;
        }
    }
    ctx->pc = 0x1D58C0u;
    // 0x1d58c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d58c4u;
}
