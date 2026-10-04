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

// Function: FUN_00203a00
// Address: 0x203a00 - 0x203c1c
void FUN_00203a00_0x203a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203a00_0x203a00");
#endif

    switch (ctx->pc) {
        case 0x203a8cu: goto label_203a8c;
        case 0x203a94u: goto label_203a94;
        case 0x203a9cu: goto label_203a9c;
        case 0x203ac8u: goto label_203ac8;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad8u: goto label_203ad8;
        case 0x203b14u: goto label_203b14;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b58u: goto label_203b58;
        case 0x203b60u: goto label_203b60;
        case 0x203b68u: goto label_203b68;
        case 0x203b9cu: goto label_203b9c;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c04u: goto label_203c04;
        case 0x203c0cu: goto label_203c0c;
        default: break;
    }

    ctx->pc = 0x203a00u;

    // 0x203a00: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
    // 0x203a04: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x203a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203a0c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x203a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a1c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x203a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203a20: 0x10e3005b  beq         $a3, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x203A20u;
    {
        const bool branch_taken_0x203a20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a20) {
            ctx->pc = 0x203B90u;
            goto label_203b90;
        }
    }
    ctx->pc = 0x203A28u;
    // 0x203a28: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x203a2c: 0x10e40056  beq         $a3, $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x203A2Cu;
    {
        const bool branch_taken_0x203a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x203a2c) {
            ctx->pc = 0x203B88u;
            goto label_203b88;
        }
    }
    ctx->pc = 0x203A34u;
    // 0x203a34: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x203a38: 0x10e30051  beq         $a3, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x203A38u;
    {
        const bool branch_taken_0x203a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a38) {
            ctx->pc = 0x203B80u;
            goto label_203b80;
        }
    }
    ctx->pc = 0x203A40u;
    // 0x203a40: 0x10e5004d  beq         $a3, $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x203A40u;
    {
        const bool branch_taken_0x203a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x203a40) {
            ctx->pc = 0x203B78u;
            goto label_203b78;
        }
    }
    ctx->pc = 0x203A48u;
    // 0x203a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203a4c: 0x10e30028  beq         $a3, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x203A4Cu;
    {
        const bool branch_taken_0x203a4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x203a4c) {
            ctx->pc = 0x203AF0u;
            goto label_203af0;
        }
    }
    ctx->pc = 0x203A54u;
    // 0x203a54: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x203A54u;
    {
        const bool branch_taken_0x203a54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x203a54) {
            ctx->pc = 0x203A64u;
            goto label_203a64;
        }
    }
    ctx->pc = 0x203A5Cu;
    // 0x203a5c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x203A5Cu;
    {
        const bool branch_taken_0x203a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a5c) {
            ctx->pc = 0x203C1Cu;
            return;
        }
    }
    ctx->pc = 0x203A64u;
label_203a64:
    // 0x203a64: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x203a68: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x203a6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x203a70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203A70u;
    {
        const bool branch_taken_0x203a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a70) {
            ctx->pc = 0x203AACu;
            goto label_203aac;
        }
    }
    ctx->pc = 0x203A78u;
    // 0x203a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a7c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a84: 0xc08104c  jal         func_204130
    ctx->pc = 0x203A84u;
    SET_GPR_U32(ctx, 31, 0x203A8Cu);
    ctx->pc = 0x203A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A84u;
    // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203A84u, 0x203A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A8Cu;
label_203a8c:
    // 0x203a8c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203A8Cu;
    SET_GPR_U32(ctx, 31, 0x203A94u);
    ctx->pc = 0x203A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A8Cu;
    // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203A8Cu, 0x203A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A94u;
label_203a94:
    // 0x203a94: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203A94u;
    SET_GPR_U32(ctx, 31, 0x203A9Cu);
    ctx->pc = 0x203A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A94u;
    // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203A94u, 0x203A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A9Cu;
label_203a9c:
    // 0x203a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203aa0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203aa4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AACu;
label_203aac:
    // 0x203aac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AE8u;
            goto label_203ae8;
        }
    }
    ctx->pc = 0x203AB4u;
    // 0x203ab4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203ab8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ac0: 0xc08104c  jal         func_204130
    ctx->pc = 0x203AC0u;
    SET_GPR_U32(ctx, 31, 0x203AC8u);
    ctx->pc = 0x203AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC0u;
    // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203AC0u, 0x203AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AC8u;
label_203ac8:
    // 0x203ac8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203AC8u;
    SET_GPR_U32(ctx, 31, 0x203AD0u);
    ctx->pc = 0x203ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC8u;
    // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203AC8u, 0x203AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203AD0u;
    SET_GPR_U32(ctx, 31, 0x203AD8u);
    ctx->pc = 0x203AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD0u;
    // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203AD0u, 0x203AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203adc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x203ae0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x203AE8u;
    {
        const bool branch_taken_0x203ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae8) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
    // 0x203af4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x203AF4u;
    {
        const bool branch_taken_0x203af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af4) {
            ctx->pc = 0x203B44u;
            goto label_203b44;
        }
    }
    ctx->pc = 0x203AFCu;
    // 0x203afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203b04: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x203b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b0c: 0xc08104c  jal         func_204130
    ctx->pc = 0x203B0Cu;
    SET_GPR_U32(ctx, 31, 0x203B14u);
    ctx->pc = 0x203B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B0Cu;
    // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203B0Cu, 0x203B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B14u;
label_203b14:
    // 0x203b14: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203B14u, 0x203B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b24: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x203B24u;
    SET_GPR_U32(ctx, 31, 0x203B2Cu);
    ctx->pc = 0x203B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B24u;
    // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x203B24u, 0x203B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B2Cu;
label_203b2c:
    // 0x203b2c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x203b30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x203b34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x203b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x203b38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x203b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x203b3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203B3Cu;
    {
        const bool branch_taken_0x203b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b3c) {
            ctx->pc = 0x203B70u;
            goto label_203b70;
        }
    }
    ctx->pc = 0x203B44u;
label_203b44:
    // 0x203b44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x203b48: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b50: 0xc08104c  jal         func_204130
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203B50u, 0x203B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203B58u;
    SET_GPR_U32(ctx, 31, 0x203B60u);
    ctx->pc = 0x203B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B58u;
    // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203B58u, 0x203B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203B60u;
    SET_GPR_U32(ctx, 31, 0x203B68u);
    ctx->pc = 0x203B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B60u;
    // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203B60u, 0x203B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B68u;
label_203b68:
    // 0x203b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203b6c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203b70:
    // 0x203b70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x203B70u;
    {
        const bool branch_taken_0x203b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b70) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B78u;
label_203b78:
    // 0x203b78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x203B78u;
    {
        const bool branch_taken_0x203b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b78) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B80u;
label_203b80:
    // 0x203b80: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x203B80u;
    {
        const bool branch_taken_0x203b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b80) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B88u;
label_203b88:
    // 0x203b88: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x203B88u;
    {
        const bool branch_taken_0x203b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b88) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B90u;
label_203b90:
    // 0x203b90: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203b94: 0xc083d30  jal         func_20F4C0
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B94u;
    // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F4C0u, 0x203B94u, 0x203B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x203B9Cu;
    {
        const bool branch_taken_0x203b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b9c) {
            ctx->pc = 0x203BE8u;
            goto label_203be8;
        }
    }
    ctx->pc = 0x203BA4u;
    // 0x203ba4: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203ba8: 0xc083cc8  jal         func_20F320
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F320u, 0x203BA8u, 0x203BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203bb8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bc0: 0xc08104c  jal         func_204130
    ctx->pc = 0x203BC0u;
    SET_GPR_U32(ctx, 31, 0x203BC8u);
    ctx->pc = 0x203BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC0u;
    // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203BC0u, 0x203BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BC8u;
label_203bc8:
    // 0x203bc8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203BC8u;
    SET_GPR_U32(ctx, 31, 0x203BD0u);
    ctx->pc = 0x203BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC8u;
    // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203BC8u, 0x203BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BD0u;
label_203bd0:
    // 0x203bd0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x203BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BD0u;
    // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203BD0u, 0x203BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203bdc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x203be0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203C14u;
            goto label_203c14;
        }
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203bec: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bf4: 0xc08104c  jal         func_204130
    ctx->pc = 0x203BF4u;
    SET_GPR_U32(ctx, 31, 0x203BFCu);
    ctx->pc = 0x203BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BF4u;
    // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203BF4u, 0x203BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BFCu;
label_203bfc:
    // 0x203bfc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203BFCu;
    SET_GPR_U32(ctx, 31, 0x203C04u);
    ctx->pc = 0x203C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BFCu;
    // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203BFCu, 0x203C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203C04u;
    SET_GPR_U32(ctx, 31, 0x203C0Cu);
    ctx->pc = 0x203C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C04u;
    // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203C04u, 0x203C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C0Cu;
label_203c0c:
    // 0x203c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203c14:
    // 0x203c14: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203c18:
    // 0x203c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x203c1cu;
}
