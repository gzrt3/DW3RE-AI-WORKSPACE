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

// Function: FUN_001a3ba0
// Address: 0x1a3ba0 - 0x1a3cc8
void FUN_001a3ba0_0x1a3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3ba0_0x1a3ba0");
#endif

    switch (ctx->pc) {
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c64u: goto label_1a3c64;
        default: break;
    }

    ctx->pc = 0x1a3ba0u;

    // 0x1a3ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a3ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bb0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a3bb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3bb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a3bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a3bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3bc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a3bcc: 0xc06781e  jal         func_19E078
    ctx->pc = 0x1A3BCCu;
    SET_GPR_U32(ctx, 31, 0x1A3BD4u);
    ctx->pc = 0x1A3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BCCu;
    // 0x1a3bd0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E078u, 0x1A3BCCu, 0x1A3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BD4u;
label_1a3bd4:
    // 0x1a3bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bd8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3BD8u;
    SET_GPR_U32(ctx, 31, 0x1A3BE0u);
    ctx->pc = 0x1A3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD8u;
    // 0x1a3bdc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3BD8u, 0x1A3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BE0u;
label_1a3be0:
    // 0x1a3be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3be4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1a3be8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1a3bec: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x1a3becu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1a3bf0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a3bf4: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x1a3bf8: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x1a3bfc: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x1a3bfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1a3c00: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x1a3c00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1a3c04: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3C04u;
    {
        const bool branch_taken_0x1a3c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C04u;
        // 0x1a3c08: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c04) {
            ctx->pc = 0x1A3C1Cu;
            goto label_1a3c1c;
        }
    }
    ctx->pc = 0x1A3C0Cu;
    // 0x1a3c0c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c14: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A3C14u;
    SET_GPR_U32(ctx, 31, 0x1A3C1Cu);
    ctx->pc = 0x1A3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C14u;
    // 0x1a3c18: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A3C14u, 0x1A3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C1Cu;
label_1a3c1c:
    // 0x1a3c1c: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x1a3c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3c28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a3c2c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x1a3c30: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C30u;
    // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3C30u, 0x1A3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C38u;
label_1a3c38:
    // 0x1a3c38: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a3c3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1a3c40: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C40u;
    {
        const bool branch_taken_0x1a3c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c40) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C48u;
    // 0x1a3c48: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C50u;
    // 0x1a3c50: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3C50u;
    {
        const bool branch_taken_0x1a3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c50) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C58u;
    // 0x1a3c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c5c: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C64u);
    ctx->pc = 0x1A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C5Cu;
    // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A3C5Cu, 0x1A3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C64u;
label_1a3c64:
    // 0x1a3c64: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1a3c68: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x1a3c6c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x1a3c70: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1a3c74: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x1a3c78: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x1a3c7c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1a3c80: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x1a3c84: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1a3c88: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1a3c8c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a3c90: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a3c94: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1a3c98: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a3c9c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x1a3ca0: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1a3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x1a3ca4: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x1a3ca8: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1a3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x1a3cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a3cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3cb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3cb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3cb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a3cc8u;
}
