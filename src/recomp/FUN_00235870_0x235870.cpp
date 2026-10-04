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

// Function: FUN_00235870
// Address: 0x235870 - 0x235928
void FUN_00235870_0x235870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235870_0x235870");
#endif

    switch (ctx->pc) {
        case 0x2358a0u: goto label_2358a0;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358f4u: goto label_2358f4;
        case 0x235904u: goto label_235904;
        case 0x235910u: goto label_235910;
        default: break;
    }

    ctx->pc = 0x235870u;

    // 0x235870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235874: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235878: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23587c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x235880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23588c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x235898: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235898u;
    SET_GPR_U32(ctx, 31, 0x2358A0u);
    ctx->pc = 0x23589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235898u;
    // 0x23589c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235898u, 0x2358A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358A0u;
label_2358a0:
    // 0x2358a0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2358A0u;
    {
        const bool branch_taken_0x2358a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A0u;
        // 0x2358a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358a0) {
            ctx->pc = 0x235914u;
            goto label_235914;
        }
    }
    ctx->pc = 0x2358A8u;
    // 0x2358a8: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x2358A8u;
    SET_GPR_U32(ctx, 31, 0x2358B0u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x2358A8u, 0x2358B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358B0u;
label_2358b0:
    // 0x2358b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2358b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358b4: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2358B4u;
    {
        const bool branch_taken_0x2358b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358B4u;
        // 0x2358b8: 0x2e220080  sltiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358b4) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358BCu;
    // 0x2358bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2358BCu;
    {
        const bool branch_taken_0x2358bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2358bc) {
            ctx->pc = 0x2358D0u;
            goto label_2358d0;
        }
    }
    ctx->pc = 0x2358C4u;
    // 0x2358c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2358C4u;
    {
        const bool branch_taken_0x2358c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358C4u;
        // 0x2358c8: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358c4) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358CCu;
    // 0x2358cc: 0x0  nop
    ctx->pc = 0x2358ccu;
    // NOP
label_2358d0:
    // 0x2358d0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2358D0u;
    {
        const bool branch_taken_0x2358d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d0) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358D8u;
    // 0x2358d8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2358dc: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x2358e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2358e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2358e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2358e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2358e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358ec: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2358ECu;
    SET_GPR_U32(ctx, 31, 0x2358F4u);
    ctx->pc = 0x2358F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358ECu;
    // 0x2358f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2358ECu, 0x2358F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358F4u;
label_2358f4:
    // 0x2358f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2358f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358f8: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2358fc: 0xc08d192  jal         func_234648
    ctx->pc = 0x2358FCu;
    SET_GPR_U32(ctx, 31, 0x235904u);
    ctx->pc = 0x235900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358FCu;
    // 0x235900: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2358FCu, 0x235904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235904u;
label_235904:
    // 0x235904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235908:
    // 0x235908: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235908u;
    SET_GPR_U32(ctx, 31, 0x235910u);
    ctx->pc = 0x23590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235908u;
    // 0x23590c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235908u, 0x235910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235910u;
label_235910:
    // 0x235910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235914:
    // 0x235914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23591c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23591cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x235928u;
}
