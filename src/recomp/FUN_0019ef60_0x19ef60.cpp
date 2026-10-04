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

// Function: FUN_0019ef60
// Address: 0x19ef60 - 0x19f090
void FUN_0019ef60_0x19ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ef60_0x19ef60");
#endif

    switch (ctx->pc) {
        case 0x19efd0u: goto label_19efd0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f038u: goto label_19f038;
        default: break;
    }

    ctx->pc = 0x19ef60u;

    // 0x19ef60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19ef64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ef68: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x19ef6c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x19ef70: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x19ef74: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef78: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19ef7c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19ef80: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x19ef80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef84: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19ef88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19ef88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19ef90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19ef94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ef94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19ef9c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19ef9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efa0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19efa4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x19efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x19efa8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19efac: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x19efacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19efb0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EFB0u;
    {
        const bool branch_taken_0x19efb0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB0u;
        // 0x19efb4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efb0) {
            ctx->pc = 0x19EFE8u;
            goto label_19efe8;
        }
    }
    ctx->pc = 0x19EFB8u;
    // 0x19efb8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x19EFB8u;
    {
        const bool branch_taken_0x19efb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efb8) {
            ctx->pc = 0x19EFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFB8u;
            // 0x19efbc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F094u;
            return;
        }
    }
    ctx->pc = 0x19EFC0u;
    // 0x19efc0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x19EFC0u;
    {
        const bool branch_taken_0x19efc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efc0) {
            ctx->pc = 0x19EFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFC0u;
            // 0x19efc4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F094u;
            return;
        }
    }
    ctx->pc = 0x19EFC8u;
    // 0x19efc8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EFC8u;
    SET_GPR_U32(ctx, 31, 0x19EFD0u);
    ctx->pc = 0x19EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFC8u;
    // 0x19efcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EFC8u, 0x19EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFD0u;
label_19efd0:
    // 0x19efd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19efd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19efd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19efdc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x19efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x19efe0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19EFE0u;
    {
        const bool branch_taken_0x19efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efe0) {
            ctx->pc = 0x19F090u;
            return;
        }
    }
    ctx->pc = 0x19EFE8u;
label_19efe8:
    // 0x19efe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efec: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EFECu;
    SET_GPR_U32(ctx, 31, 0x19EFF4u);
    ctx->pc = 0x19EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFECu;
    // 0x19eff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EFECu, 0x19EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFF4u;
label_19eff4:
    // 0x19eff4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19eff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19effc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19f000: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x19f004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f008: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19f00c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19f014: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f018: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f01c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f020: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f024: 0xc067c40  jal         func_19F100
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F024u;
    // 0x19f028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x19F024u, 0x19F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f030: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F030u;
    SET_GPR_U32(ctx, 31, 0x19F038u);
    ctx->pc = 0x19F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F030u;
    // 0x19f034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F030u, 0x19F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F038u;
label_19f038:
    // 0x19f038: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x19f03c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19f040: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x19f044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f048: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f04c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f050: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f054: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f058: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f05c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f060: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f060u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19f064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f068: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f06c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f070: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f074: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f078: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f07c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f080: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f088: 0x8067c40  j           func_19F100
    ctx->pc = 0x19F088u;
    ctx->pc = 0x19F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F088u;
    // 0x19f08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    FUN_0019f100_0x19f100(rdram, ctx, runtime); return;
    ctx->pc = 0x19F090u;
}
