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

// Function: FUN_00178990
// Address: 0x178990 - 0x178a2c
void FUN_00178990_0x178990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178990_0x178990");
#endif

    switch (ctx->pc) {
        case 0x1789d8u: goto label_1789d8;
        case 0x1789e0u: goto label_1789e0;
        case 0x1789f0u: goto label_1789f0;
        case 0x1789f8u: goto label_1789f8;
        case 0x178a08u: goto label_178a08;
        case 0x178a14u: goto label_178a14;
        case 0x178a20u: goto label_178a20;
        case 0x178a28u: goto label_178a28;
        default: break;
    }

    ctx->pc = 0x178990u;

    // 0x178990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178994: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x178994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x178998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17899c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1789a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1789a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1789a4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1789a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1789a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789ac: 0x8f838750  lw          $v1, -0x78B0($gp)
    ctx->pc = 0x1789acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936400)));
    // 0x1789b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1789b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1789b4: 0x8f828414  lw          $v0, -0x7BEC($gp)
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
    // 0x1789b8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1789bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1789bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1789c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1789c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1789C4u;
    {
        const bool branch_taken_0x1789c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789C4u;
        // 0x1789c8: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789c4) {
            ctx->pc = 0x1789D8u;
            goto label_1789d8;
        }
    }
    ctx->pc = 0x1789CCu;
    // 0x1789cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1789ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789d0: 0xc05e290  jal         func_178A40
    ctx->pc = 0x1789D0u;
    SET_GPR_U32(ctx, 31, 0x1789D8u);
    ctx->pc = 0x1789D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789D0u;
    // 0x1789d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178A40u, 0x1789D0u, 0x1789D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789D8u;
label_1789d8:
    // 0x1789d8: 0xc05f538  jal         func_17D4E0
    ctx->pc = 0x1789D8u;
    SET_GPR_U32(ctx, 31, 0x1789E0u);
    ctx->pc = 0x1789DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789D8u;
    // 0x1789dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4E0u, 0x1789D8u, 0x1789E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789E0u;
label_1789e0:
    // 0x1789e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1789E0u;
    {
        const bool branch_taken_0x1789e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E0u;
        // 0x1789e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789e0) {
            ctx->pc = 0x178A28u;
            goto label_178a28;
        }
    }
    ctx->pc = 0x1789E8u;
    // 0x1789e8: 0xc040058  jal         func_100160
    ctx->pc = 0x1789E8u;
    SET_GPR_U32(ctx, 31, 0x1789F0u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x1789E8u, 0x1789F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F0u;
label_1789f0:
    // 0x1789f0: 0xc05eac8  jal         func_17AB20
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789F0u;
    // 0x1789f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB20u, 0x1789F0u, 0x1789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a00: 0xc05eaf0  jal         func_17ABC0
    ctx->pc = 0x178A00u;
    SET_GPR_U32(ctx, 31, 0x178A08u);
    ctx->pc = 0x178A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A00u;
    // 0x178a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABC0u, 0x178A00u, 0x178A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A08u;
label_178a08:
    // 0x178a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a0c: 0xc05ea7c  jal         func_17A9F0
    ctx->pc = 0x178A0Cu;
    SET_GPR_U32(ctx, 31, 0x178A14u);
    ctx->pc = 0x178A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A0Cu;
    // 0x178a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A9F0u, 0x178A0Cu, 0x178A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A14u;
label_178a14:
    // 0x178a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a18: 0xc05ee2c  jal         func_17B8B0
    ctx->pc = 0x178A18u;
    SET_GPR_U32(ctx, 31, 0x178A20u);
    ctx->pc = 0x178A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A18u;
    // 0x178a1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8B0u, 0x178A18u, 0x178A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A20u;
label_178a20:
    // 0x178a20: 0xc05f504  jal         func_17D410
    ctx->pc = 0x178A20u;
    SET_GPR_U32(ctx, 31, 0x178A28u);
    ctx->pc = 0x178A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A20u;
    // 0x178a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x178A20u, 0x178A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A28u;
label_178a28:
    // 0x178a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x178a2cu;
}
