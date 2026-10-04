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

// Function: entry_001b7744
// Address: 0x1b7744 - 0x1b790c
void entry_001b7744_0x1b7744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7744_0x1b7744");
#endif

    switch (ctx->pc) {
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77d0u: goto label_1b77d0;
        case 0x1b77e4u: goto label_1b77e4;
        case 0x1b7858u: goto label_1b7858;
        case 0x1b78b0u: goto label_1b78b0;
        default: break;
    }

    ctx->pc = 0x1b7744u;

    // 0x1b7744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7748: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b774c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b7750: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7754: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B7754u;
    {
        const bool branch_taken_0x1b7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7754u;
        // 0x1b7758: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7754) {
            ctx->pc = 0x1B790Cu;
            return;
        }
    }
    ctx->pc = 0x1B775Cu;
    // 0x1b775c: 0x0  nop
    ctx->pc = 0x1b775cu;
    // NOP
    // 0x1b7760: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7760u;
    {
        const bool branch_taken_0x1b7760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7760u;
        // 0x1b7764: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7760) {
            ctx->pc = 0x1B7788u;
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B7768u;
    // 0x1b7768: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b776c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7770: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7774: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b7778: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b777c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1B777Cu;
    {
        const bool branch_taken_0x1b777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B777Cu;
        // 0x1b7780: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b777c) {
            ctx->pc = 0x1B790Cu;
            return;
        }
    }
    ctx->pc = 0x1B7784u;
    // 0x1b7784: 0x0  nop
    ctx->pc = 0x1b7784u;
    // NOP
label_1b7788:
    // 0x1b7788: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1b778c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1b778cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x1b7790: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b7790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7794: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x1b7794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1b7798: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x1b7798u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x1b779c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x1b779cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x1b77a0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1b77a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1b77a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b77a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77a8: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1B77A8u;
    SET_GPR_U32(ctx, 31, 0x1B77B0u);
    ctx->pc = 0x1B77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77A8u;
    // 0x1b77ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1B77A8u, 0x1B77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77B0u;
label_1b77b0:
    // 0x1b77b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b77b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77b8: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1B77B8u;
    SET_GPR_U32(ctx, 31, 0x1B77C0u);
    ctx->pc = 0x1B77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B8u;
    // 0x1b77bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1B77B8u, 0x1B77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77C0u;
label_1b77c0:
    // 0x1b77c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b77c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b77c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77c8: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1B77C8u;
    SET_GPR_U32(ctx, 31, 0x1B77D0u);
    ctx->pc = 0x1B77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77C8u;
    // 0x1b77cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1B77C8u, 0x1B77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77D0u;
label_1b77d0:
    // 0x1b77d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b77d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b77d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b77d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77dc: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1B77DCu;
    SET_GPR_U32(ctx, 31, 0x1B77E4u);
    ctx->pc = 0x1B77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77DCu;
    // 0x1b77e0: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1B77DCu, 0x1B77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77E4u;
label_1b77e4:
    // 0x1b77e4: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x1b77e4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b77e8: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1b77e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b77ec: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b77ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1b77f0: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1b77f4: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x1b77f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
    // 0x1b77f8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1b77f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b77fc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1b77fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1b7800: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7804: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1b7808: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1b7808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b780c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7810: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x1b7810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x1b7814: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1b7814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b7818: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1b7818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1b781c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b7820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7824: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1b7824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x1b7828: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b782c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b7830: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7834: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1b7834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7838: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1b7838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1b783c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B783Cu;
    {
        const bool branch_taken_0x1b783c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B783Cu;
        // 0x1b7840: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b783c) {
            ctx->pc = 0x1B7884u;
            goto label_1b7884;
        }
    }
    ctx->pc = 0x1B7844u;
    // 0x1b7844: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b7848: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1b7848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1b784c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7850: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x1b7850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x1b7854: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b7854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b7858:
    // 0x1b7858: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1b785c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7864: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1b7864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7868u;
    {
        const bool branch_taken_0x1b7868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7868u;
        // 0x1b786c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7868) {
            ctx->pc = 0x1B7878u;
            goto label_1b7878;
        }
    }
    ctx->pc = 0x1B7870u;
    // 0x1b7870: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1b7870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x1b7874: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b7874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1b7878:
    // 0x1b7878: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B7878u;
    {
        const bool branch_taken_0x1b7878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7878u;
        // 0x1b787c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7878) {
            ctx->pc = 0x1B7858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7858;
        }
    }
    ctx->pc = 0x1B7880u;
    // 0x1b7880: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1b7880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1b7884:
    // 0x1b7884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7888: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b7888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1b788c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1b788cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7890: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7890u;
    {
        const bool branch_taken_0x1b7890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7890u;
        // 0x1b7894: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7890) {
            ctx->pc = 0x1B78D8u;
            goto label_1b78d8;
        }
    }
    ctx->pc = 0x1B7898u;
    // 0x1b7898: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b789c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1b789cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b78a0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1b78a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1b78a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b78a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b78ac: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1b78acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_1b78b0:
    // 0x1b78b0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x1b78b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x1b78b4: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x1b78b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x1b78b8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x1b78b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x1b78bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b78c0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1b78c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1b78c4: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x1b78c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b78c8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B78C8u;
    {
        const bool branch_taken_0x1b78c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C8u;
        // 0x1b78cc: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78c8) {
            ctx->pc = 0x1B78B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b78b0;
        }
    }
    ctx->pc = 0x1B78D0u;
    // 0x1b78d0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1b78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1b78d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1b78d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1b78d8:
    // 0x1b78d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b78dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B78DCu;
    {
        const bool branch_taken_0x1b78dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78DCu;
        // 0x1b78e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78dc) {
            ctx->pc = 0x1B7900u;
            goto label_1b7900;
        }
    }
    ctx->pc = 0x1B78E4u;
    // 0x1b78e4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x1b78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x1b78e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B78E8u;
    {
        const bool branch_taken_0x1b78e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78E8u;
        // 0x1b78ec: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78e8) {
            ctx->pc = 0x1B78F8u;
            goto label_1b78f8;
        }
    }
    ctx->pc = 0x1B78F0u;
    // 0x1b78f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B78F0u;
    {
        const bool branch_taken_0x1b78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78F0u;
        // 0x1b78f4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78f0) {
            ctx->pc = 0x1B78FCu;
            goto label_1b78fc;
        }
    }
    ctx->pc = 0x1B78F8u;
label_1b78f8:
    // 0x1b78f8: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x1b78f8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1b78fc:
    // 0x1b78fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7900:
    // 0x1b7900: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b7904: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1b7904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1b7908: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1b790cu;
}
