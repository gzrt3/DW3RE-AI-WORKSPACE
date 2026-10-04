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

// Function: entry_0019efe8
// Address: 0x19efe8 - 0x19f100
void entry_0019efe8_0x19efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019efe8_0x19efe8");
#endif

    switch (ctx->pc) {
        case 0x19eff4u: goto label_19eff4;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f038u: goto label_19f038;
        case 0x19f0bcu: goto label_19f0bc;
        default: break;
    }

    ctx->pc = 0x19efe8u;

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
    // 0x19f090: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f098: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x19f09c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0a4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f0a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0ac: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0b4: 0xc067c40  jal         func_19F100
    ctx->pc = 0x19F0B4u;
    SET_GPR_U32(ctx, 31, 0x19F0BCu);
    ctx->pc = 0x19F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B4u;
    // 0x19f0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x19F0B4u, 0x19F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0BCu;
label_19f0bc:
    // 0x19f0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f0c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x19f0c8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x19f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x19f0cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f0d0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f0d4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f0d8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f0dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f0e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f0e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f0e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f0ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f0f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F4u;
        // 0x19f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0FCu;
    // 0x19f0fc: 0x0  nop
    ctx->pc = 0x19f0fcu;
    // NOP
    ctx->pc = 0x19f100u;
}
