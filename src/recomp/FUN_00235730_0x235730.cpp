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

// Function: FUN_00235730
// Address: 0x235730 - 0x235868
void FUN_00235730_0x235730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235730_0x235730");
#endif

    switch (ctx->pc) {
        case 0x235778u: goto label_235778;
        case 0x235788u: goto label_235788;
        case 0x2357b8u: goto label_2357b8;
        case 0x235810u: goto label_235810;
        case 0x235834u: goto label_235834;
        case 0x235840u: goto label_235840;
        default: break;
    }

    ctx->pc = 0x235730u;

    // 0x235730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x235734: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x235738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23573c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x235740: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x235744: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x235748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23574c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235754: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x235754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235758: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x235758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x23575c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23575cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23576c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x235770: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235770u;
    SET_GPR_U32(ctx, 31, 0x235778u);
    ctx->pc = 0x235774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235770u;
    // 0x235774: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235770u, 0x235778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235778u;
label_235778:
    // 0x235778: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x235778u;
    {
        const bool branch_taken_0x235778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235778u;
        // 0x23577c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235778) {
            ctx->pc = 0x235848u;
            goto label_235848;
        }
    }
    ctx->pc = 0x235780u;
    // 0x235780: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235780u;
    SET_GPR_U32(ctx, 31, 0x235788u);
    ctx->pc = 0x235784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235780u;
    // 0x235784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235780u, 0x235788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235788u;
label_235788:
    // 0x235788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23578c: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23578Cu;
    {
        const bool branch_taken_0x23578c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23578Cu;
        // 0x235790: 0x2e620040  sltiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23578c) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x235794u;
    // 0x235794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235794u;
    {
        const bool branch_taken_0x235794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235794) {
            ctx->pc = 0x2357A8u;
            goto label_2357a8;
        }
    }
    ctx->pc = 0x23579Cu;
    // 0x23579c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x23579Cu;
    {
        const bool branch_taken_0x23579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23579Cu;
        // 0x2357a0: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23579c) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357A4u;
    // 0x2357a4: 0x0  nop
    ctx->pc = 0x2357a4u;
    // NOP
label_2357a8:
    // 0x2357a8: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357B0u;
    // 0x2357b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2357b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2357b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2357b8:
    // 0x2357b8: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x2357bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2357bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2357c0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2357c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2357c4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2357c8: 0x28a40018  slti        $a0, $a1, 0x18
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2357cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2357CCu;
    {
        const bool branch_taken_0x2357cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357CCu;
        // 0x2357d0: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357cc) {
            ctx->pc = 0x2357B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2357b8;
        }
    }
    ctx->pc = 0x2357D4u;
    // 0x2357d4: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x2357d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2357d8: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2357dc: 0x2e4201fc  sltiu       $v0, $s2, 0x1FC
    ctx->pc = 0x2357dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)508) ? 1 : 0);
    // 0x2357e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2357E0u;
    {
        const bool branch_taken_0x2357e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E0u;
        // 0x2357e4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357e0) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357E8u;
    // 0x2357e8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2357ec: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2357f0: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2357f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
    // 0x2357f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2357f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357f8: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x2357f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x2357fc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x235800: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x235800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x235804: 0x26100204  addiu       $s0, $s0, 0x204
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    // 0x235808: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x235808u;
    SET_GPR_U32(ctx, 31, 0x235810u);
    ctx->pc = 0x23580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235808u;
    // 0x23580c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x235808u, 0x235810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235810u;
label_235810:
    // 0x235810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x235814: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x235814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
    // 0x235818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23581c: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x23581cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x29051Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29051Cu, _value); } while (0);
    // 0x235820: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x235820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x235824: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x235824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x290518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290518u, _value); } while (0);
    // 0x235828: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23582c: 0xc08d192  jal         func_234648
    ctx->pc = 0x23582Cu;
    SET_GPR_U32(ctx, 31, 0x235834u);
    ctx->pc = 0x235830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23582Cu;
    // 0x235830: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x23582Cu, 0x235834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235834u;
label_235834:
    // 0x235834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235838:
    // 0x235838: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235838u;
    SET_GPR_U32(ctx, 31, 0x235840u);
    ctx->pc = 0x23583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235838u;
    // 0x23583c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235838u, 0x235840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235840u;
label_235840:
    // 0x235840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235848:
    // 0x235848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23584c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23584cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235850: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235854: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235858: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23585c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23585cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235860: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x235860u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x235864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x235868u;
}
