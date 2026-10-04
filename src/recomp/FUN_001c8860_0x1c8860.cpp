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

// Function: FUN_001c8860
// Address: 0x1c8860 - 0x1c8a00
void FUN_001c8860_0x1c8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8860_0x1c8860");
#endif

    switch (ctx->pc) {
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8924u: goto label_1c8924;
        case 0x1c89c4u: goto label_1c89c4;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89f4u: goto label_1c89f4;
        default: break;
    }

    ctx->pc = 0x1c8860u;

    // 0x1c8860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c886c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8870: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1c8874: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C8874u;
    {
        const bool branch_taken_0x1c8874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8874u;
        // 0x1c8878: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8874) {
            ctx->pc = 0x1C892Cu;
            goto label_1c892c;
        }
    }
    ctx->pc = 0x1C887Cu;
    // 0x1c887c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1c8880: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8884: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x1c8884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
    // 0x1c8888: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c888c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8890: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c8894: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8894u;
    {
        const bool branch_taken_0x1c8894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8894u;
        // 0x1c8898: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8894) {
            ctx->pc = 0x1C88A4u;
            goto label_1c88a4;
        }
    }
    ctx->pc = 0x1C889Cu;
    // 0x1c889c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C889Cu;
    {
        const bool branch_taken_0x1c889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C889Cu;
        // 0x1c88a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c889c) {
            ctx->pc = 0x1C88B8u;
            goto label_1c88b8;
        }
    }
    ctx->pc = 0x1C88A4u;
label_1c88a4:
    // 0x1c88a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c88a8: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1c88ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c88b4: 0x0  nop
    ctx->pc = 0x1c88b4u;
    // NOP
label_1c88b8:
    // 0x1c88b8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c88bc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88BCu;
    {
        const bool branch_taken_0x1c88bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88BCu;
        // 0x1c88c0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88bc) {
            ctx->pc = 0x1C88CCu;
            goto label_1c88cc;
        }
    }
    ctx->pc = 0x1C88C4u;
    // 0x1c88c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88C4u;
    {
        const bool branch_taken_0x1c88c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88C4u;
        // 0x1c88c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88c4) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88CCu;
label_1c88cc:
    // 0x1c88cc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c88d0: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x1c88d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c88dc: 0x0  nop
    ctx->pc = 0x1c88dcu;
    // NOP
label_1c88e0:
    // 0x1c88e0: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c88e4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88E4u;
    {
        const bool branch_taken_0x1c88e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E4u;
        // 0x1c88e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e4) {
            ctx->pc = 0x1C88F4u;
            goto label_1c88f4;
        }
    }
    ctx->pc = 0x1C88ECu;
    // 0x1c88ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88ECu;
    {
        const bool branch_taken_0x1c88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88ECu;
        // 0x1c88f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88ec) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C88F4u;
label_1c88f4:
    // 0x1c88f4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c88f8: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x1c88fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8904: 0x0  nop
    ctx->pc = 0x1c8904u;
    // NOP
label_1c8908:
    // 0x1c8908: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c890c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C890Cu, 0x1C8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c891c: 0xc041744  jal         func_105D10
    ctx->pc = 0x1C891Cu;
    SET_GPR_U32(ctx, 31, 0x1C8924u);
    ctx->pc = 0x1C8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C891Cu;
    // 0x1c8920: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C891Cu, 0x1C8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8924u;
label_1c8924:
    // 0x1c8924: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C8924u;
    {
        const bool branch_taken_0x1c8924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8924u;
        // 0x1c8928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8924) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C892Cu;
label_1c892c:
    // 0x1c892c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8930: 0x24428df0  addiu       $v0, $v0, -0x7210
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938096));
    // 0x1c8934: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c893c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c8940: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8950u;
            goto label_1c8950;
        }
    }
    ctx->pc = 0x1C8948u;
    // 0x1c8948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8948u;
    {
        const bool branch_taken_0x1c8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8948u;
        // 0x1c894c: 0x24020c2d  addiu       $v0, $zero, 0xC2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8948) {
            ctx->pc = 0x1C896Cu;
            goto label_1c896c;
        }
    }
    ctx->pc = 0x1C8950u;
label_1c8950:
    // 0x1c8950: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1c8954: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c8958: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1c895c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8960: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8964: 0x0  nop
    ctx->pc = 0x1c8964u;
    // NOP
    // 0x1c8968: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c896c:
    // 0x1c896c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C896Cu;
    {
        const bool branch_taken_0x1c896c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C896Cu;
        // 0x1c8970: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c896c) {
            ctx->pc = 0x1C897Cu;
            goto label_1c897c;
        }
    }
    ctx->pc = 0x1C8974u;
    // 0x1c8974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8974u;
    {
        const bool branch_taken_0x1c8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8974u;
        // 0x1c8978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8974) {
            ctx->pc = 0x1C8990u;
            goto label_1c8990;
        }
    }
    ctx->pc = 0x1C897Cu;
label_1c897c:
    // 0x1c897c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c897cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c8980: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x1c8984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8988: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c898c: 0x0  nop
    ctx->pc = 0x1c898cu;
    // NOP
label_1c8990:
    // 0x1c8990: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c8994: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8994u;
    {
        const bool branch_taken_0x1c8994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8994u;
        // 0x1c8998: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8994) {
            ctx->pc = 0x1C89A4u;
            goto label_1c89a4;
        }
    }
    ctx->pc = 0x1C899Cu;
    // 0x1c899c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C899Cu;
    {
        const bool branch_taken_0x1c899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c899c) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C89A4u;
label_1c89a4:
    // 0x1c89a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c89a8: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x1c89ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c89b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c89b4: 0x0  nop
    ctx->pc = 0x1c89b4u;
    // NOP
label_1c89b8:
    // 0x1c89b8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c89bc: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C89BCu;
    SET_GPR_U32(ctx, 31, 0x1C89C4u);
    ctx->pc = 0x1C89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89BCu;
    // 0x1c89c0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C89BCu, 0x1C89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89C4u;
label_1c89c4:
    // 0x1c89c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c89c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89cc: 0xc041744  jal         func_105D10
    ctx->pc = 0x1C89CCu;
    SET_GPR_U32(ctx, 31, 0x1C89D4u);
    ctx->pc = 0x1C89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89CCu;
    // 0x1c89d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C89CCu, 0x1C89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89D4u;
label_1c89d4:
    // 0x1c89d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c89d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c89d8:
    // 0x1c89d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c89e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c89e8: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x1c89e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1c89ec: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x1C89ECu;
    SET_GPR_U32(ctx, 31, 0x1C89F4u);
    ctx->pc = 0x1C89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89ECu;
    // 0x1c89f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C89ECu, 0x1C89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89F4u;
label_1c89f4:
    // 0x1c89f4: 0xff8289e8  sd          $v0, -0x7618($gp)
    ctx->pc = 0x1c89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U64(ctx, 2));
    // 0x1c89f8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1C89F8u;
    SET_GPR_U32(ctx, 31, 0x1C8A00u);
    ctx->pc = 0x1C89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89F8u;
    // 0x1c89fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1C89F8u, 0x1C8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A00u;
}
