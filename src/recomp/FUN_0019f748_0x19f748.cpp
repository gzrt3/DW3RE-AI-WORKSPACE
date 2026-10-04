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

// Function: FUN_0019f748
// Address: 0x19f748 - 0x19f86c
void FUN_0019f748_0x19f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f748_0x19f748");
#endif

    switch (ctx->pc) {
        case 0x19f798u: goto label_19f798;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f818u: goto label_19f818;
        default: break;
    }

    ctx->pc = 0x19f748u;

    // 0x19f748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f74c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f754: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f758: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f75c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x19f760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f764: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x19f764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x19f768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f76c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f77c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f780: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f784: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19f784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x19f788: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F788u;
    {
        const bool branch_taken_0x19f788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F788u;
        // 0x19f78c: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f788) {
            ctx->pc = 0x19F7DCu;
            goto label_19f7dc;
        }
    }
    ctx->pc = 0x19F790u;
    // 0x19f790: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f794: 0x0  nop
    ctx->pc = 0x19f794u;
    // NOP
label_19f798:
    // 0x19f798: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F7B0u;
            goto label_19f7b0;
        }
    }
    ctx->pc = 0x19F7A4u;
    // 0x19f7a4: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F7A4u;
    SET_GPR_U32(ctx, 31, 0x19F7ACu);
    ctx->pc = 0x19F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7A4u;
    // 0x19f7a8: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F7A4u, 0x19F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7ACu;
label_19f7ac:
    // 0x19f7ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f7b0:
    // 0x19f7b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f7b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f7b8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f7bc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f7c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f7c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f7c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f7cc: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x19F7CCu;
    {
        const bool branch_taken_0x19f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7CCu;
        // 0x19f7d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7cc) {
            ctx->pc = 0x19F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f798;
        }
    }
    ctx->pc = 0x19F7D4u;
    // 0x19f7d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F7D4u;
    {
        const bool branch_taken_0x19f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7D4u;
        // 0x19f7d8: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7d4) {
            ctx->pc = 0x19F7E0u;
            goto label_19f7e0;
        }
    }
    ctx->pc = 0x19F7DCu;
label_19f7dc:
    // 0x19f7dc: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_19f7e0:
    // 0x19f7e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7E0u;
    {
        const bool branch_taken_0x19f7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E0u;
        // 0x19f7e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7e0) {
            ctx->pc = 0x19F7F8u;
            goto label_19f7f8;
        }
    }
    ctx->pc = 0x19F7E8u;
    // 0x19f7e8: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x19f7ec: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19f7f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F824u;
            goto label_19f824;
        }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19f7fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f800: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19f808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f80c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f810: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F810u;
    SET_GPR_U32(ctx, 31, 0x19F818u);
    ctx->pc = 0x19F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F810u;
    // 0x19f814: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F810u, 0x19F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F818u;
label_19f818:
    // 0x19f818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f81c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f820: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x19f820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_19f824:
    // 0x19f824: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f828: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x19f82c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f830: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x19f830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x19f834: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x19f834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x19f838: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f83c: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x19f83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x19f840: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x19f844: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19f844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x19f848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f84c: 0x26625910  addiu       $v0, $s3, 0x5910
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f850: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x19f854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f858: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x19f85c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f864: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F864u;
    SET_GPR_U32(ctx, 31, 0x19F86Cu);
    ctx->pc = 0x19F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F864u;
    // 0x19f868: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F864u, 0x19F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F86Cu;
}
