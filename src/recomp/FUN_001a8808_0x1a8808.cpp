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

// Function: FUN_001a8808
// Address: 0x1a8808 - 0x1a888c
void FUN_001a8808_0x1a8808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8808_0x1a8808");
#endif

    switch (ctx->pc) {
        case 0x1a8844u: goto label_1a8844;
        case 0x1a885cu: goto label_1a885c;
        case 0x1a8870u: goto label_1a8870;
        default: break;
    }

    ctx->pc = 0x1a8808u;

    // 0x1a8808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a880c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a8810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a8814: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a881c: 0x24535b4c  addiu       $s3, $v0, 0x5B4C
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23372));
    // 0x1a8820: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a8824: 0x24714528  addiu       $s1, $v1, 0x4528
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17704));
    // 0x1a8828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a882c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a882cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a883c: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1A883Cu;
    SET_GPR_U32(ctx, 31, 0x1A8844u);
    ctx->pc = 0x1A8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A883Cu;
    // 0x1a8840: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1A883Cu, 0x1A8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8844u;
label_1a8844:
    // 0x1a8844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8844u;
    {
        const bool branch_taken_0x1a8844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8844u;
        // 0x1a8848: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8844) {
            ctx->pc = 0x1A8874u;
            goto label_1a8874;
        }
    }
    ctx->pc = 0x1A884Cu;
    // 0x1a884c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8850: 0x8e055c08  lw          $a1, 0x5C08($s0)
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23560)));
    // 0x1a8854: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1A8854u;
    SET_GPR_U32(ctx, 31, 0x1A885Cu);
    ctx->pc = 0x1A8858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8854u;
    // 0x1a8858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1A8854u, 0x1A885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A885Cu;
label_1a885c:
    // 0x1a885c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A885Cu;
    {
        const bool branch_taken_0x1a885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A885Cu;
        // 0x1a8860: 0x8e055c08  lw          $a1, 0x5C08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a885c) {
            ctx->pc = 0x1A8874u;
            goto label_1a8874;
        }
    }
    ctx->pc = 0x1A8864u;
    // 0x1a8864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8868: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1A8868u;
    SET_GPR_U32(ctx, 31, 0x1A8870u);
    ctx->pc = 0x1A886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8868u;
    // 0x1a886c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1A8868u, 0x1A8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8870u;
label_1a8870:
    // 0x1a8870: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1a8870u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8874:
    // 0x1a8874: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a887c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a887cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a888cu;
}
