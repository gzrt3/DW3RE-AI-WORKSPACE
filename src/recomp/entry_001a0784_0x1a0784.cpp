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

// Function: entry_001a0784
// Address: 0x1a0784 - 0x1a0948
void entry_001a0784_0x1a0784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0784_0x1a0784");
#endif

    switch (ctx->pc) {
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a0888u: goto label_1a0888;
        case 0x1a08b0u: goto label_1a08b0;
        default: break;
    }

    ctx->pc = 0x1a0784u;

    // 0x1a0784: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1a0788: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a078c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a0790: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1a0794: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a0798: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x1a0798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x1a079c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x1a079cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1a07a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a07a4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1a07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1a07a8: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x1a07a8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
    // 0x1a07ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1a07acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a07b0: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07B0u;
        // 0x1a07b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A0918u;
            goto label_1a0918;
        }
    }
    ctx->pc = 0x1A07B8u;
    // 0x1a07b8: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1a07bc: 0x0  nop
    ctx->pc = 0x1a07bcu;
    // NOP
label_1a07c0:
    // 0x1a07c0: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x1a07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a07c4: 0x18c00047  blez        $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A07C4u;
    {
        const bool branch_taken_0x1a07c4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C4u;
        // 0x1a07c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c4) {
            ctx->pc = 0x1A08E4u;
            goto label_1a08e4;
        }
    }
    ctx->pc = 0x1A07CCu;
    // 0x1a07cc: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a07d0:
    // 0x1a07d0: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A07D0u;
    SET_GPR_U32(ctx, 31, 0x1A07D8u);
    ctx->pc = 0x1A07D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07D0u;
    // 0x1a07d4: 0x2559821  addu        $s3, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A07D0u, 0x1A07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07D8u;
label_1a07d8:
    // 0x1a07d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a07dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a07e0: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x1a07e4: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x1a07e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54288);
    // 0x1a07e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a07e8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0));
    // 0x1a07ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a07f0: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1a07f0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18));
    // 0x1a07f4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1a07f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1a07f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a07fc: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1a07fcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20));
    // 0x1a0800: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1a0800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1a0804: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a0808: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0808u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2));
    // 0x1a080c: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A080Cu;
    SET_GPR_U32(ctx, 31, 0x1A0814u);
    ctx->pc = 0x1A0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A080Cu;
    // 0x1a0810: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A080Cu, 0x1A0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0814u;
label_1a0814:
    // 0x1a0814: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0818: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1a081c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1a081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_1a0820:
    // 0x1a0820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0824: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a0828: 0x0  nop
    ctx->pc = 0x1a0828u;
    // NOP
    // 0x1a082c: 0x0  nop
    ctx->pc = 0x1a082cu;
    // NOP
    // 0x1a0830: 0x0  nop
    ctx->pc = 0x1a0830u;
    // NOP
    // 0x1a0834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0834u;
    {
        const bool branch_taken_0x1a0834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0834) {
            ctx->pc = 0x1A0820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0820;
        }
    }
    ctx->pc = 0x1A083Cu;
    // 0x1a083c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A083Cu;
    SET_GPR_U32(ctx, 31, 0x1A0844u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A083Cu, 0x1A0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0844u;
label_1a0844:
    // 0x1a0844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0848: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a084c: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x1a084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x1a0850: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x1a0854: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a0854u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0));
    // 0x1a0858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a085c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1a085cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17));
    // 0x1a0860: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1a0860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x1a0864: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0868: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1a0868u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20));
    // 0x1a086c: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x1a086cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x1a0870: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a0874: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A0874u;
    SET_GPR_U32(ctx, 31, 0x1A087Cu);
    ctx->pc = 0x1A0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0874u;
    // 0x1a0878: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A0874u, 0x1A087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A087Cu;
label_1a087c:
    // 0x1a087c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0880: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1a0884: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x1a0884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_1a0888:
    // 0x1a0888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a088c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a0890: 0x0  nop
    ctx->pc = 0x1a0890u;
    // NOP
    // 0x1a0894: 0x0  nop
    ctx->pc = 0x1a0894u;
    // NOP
    // 0x1a0898: 0x0  nop
    ctx->pc = 0x1a0898u;
    // NOP
    // 0x1a089c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A089Cu;
    {
        const bool branch_taken_0x1a089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a089c) {
            ctx->pc = 0x1A0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0888;
        }
    }
    ctx->pc = 0x1A08A4u;
    // 0x1a08a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a08a8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1a08a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x1a08ac: 0x0  nop
    ctx->pc = 0x1a08acu;
    // NOP
label_1a08b0:
    // 0x1a08b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a08b4: 0x0  nop
    ctx->pc = 0x1a08b4u;
    // NOP
    // 0x1a08b8: 0x0  nop
    ctx->pc = 0x1a08b8u;
    // NOP
    // 0x1a08bc: 0x0  nop
    ctx->pc = 0x1a08bcu;
    // NOP
    // 0x1a08c0: 0x0  nop
    ctx->pc = 0x1a08c0u;
    // NOP
    // 0x1a08c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A08C4u;
    {
        const bool branch_taken_0x1a08c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a08c4) {
            ctx->pc = 0x1A08B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A08CCu;
    // 0x1a08cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1a08ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08d0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1a08d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a08d4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1A08D4u;
    {
        const bool branch_taken_0x1a08d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08D4u;
        // 0x1a08d8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08d4) {
            ctx->pc = 0x1A07D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a07d0;
        }
    }
    ctx->pc = 0x1A08DCu;
    // 0x1a08dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A08DCu;
    {
        const bool branch_taken_0x1a08dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08DCu;
        // 0x1a08e0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08dc) {
            ctx->pc = 0x1A08ECu;
            goto label_1a08ec;
        }
    }
    ctx->pc = 0x1A08E4u;
label_1a08e4:
    // 0x1a08e4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1a08e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a08e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a08ec:
    // 0x1a08ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a08ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08f0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a08f4: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x1a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x1a08f8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a08fc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x1a08fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1a0900: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1a0900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0904: 0xe00013  mtlo        $a3
    ctx->pc = 0x1a0904u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x1a0908: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x1a0908u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1a090c: 0x3812  mflo        $a3
    ctx->pc = 0x1a090cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1a0910: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1A0910u;
    {
        const bool branch_taken_0x1a0910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0910u;
        // 0x1a0914: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0910) {
            ctx->pc = 0x1A07C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A0918u;
label_1a0918:
    // 0x1a0918: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a0918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a091c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1a091cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a0920: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1a0920u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a0924: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1a0924u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0928: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1a0928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a092c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0930: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0934: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0938: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a0938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a093c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0940u;
        // 0x1a0944: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0948u;
}
