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

// Function: FUN_001a0b00
// Address: 0x1a0b00 - 0x1a0c08
void FUN_001a0b00_0x1a0b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0b00_0x1a0b00");
#endif

    switch (ctx->pc) {
        case 0x1a0b2cu: goto label_1a0b2c;
        case 0x1a0bacu: goto label_1a0bac;
        case 0x1a0bd4u: goto label_1a0bd4;
        case 0x1a0be4u: goto label_1a0be4;
        default: break;
    }

    ctx->pc = 0x1a0b00u;

    // 0x1a0b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0b04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0b0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b18: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1a0b1c: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1a0b20: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a0b24: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1A0B24u;
    SET_GPR_U32(ctx, 31, 0x1A0B2Cu);
    ctx->pc = 0x1A0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B24u;
    // 0x1a0b28: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1A0B24u, 0x1A0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B2Cu;
label_1a0b2c:
    // 0x1a0b2c: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1a0b30: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a0b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1a0b34: 0x24c65938  addiu       $a2, $a2, 0x5938
    ctx->pc = 0x1a0b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22840));
    // 0x1a0b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b3c: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1a0b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b44: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1a0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a0b48: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x1a0b4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a0b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a0b50: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1a0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1a0b54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a0b58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0b5c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1a0b60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a0b64: 0x9c460000  lwu         $a2, 0x0($v0)
    ctx->pc = 0x1a0b64u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0b68: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1a0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x1a0b6c: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x1a0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
    // 0x1a0b70: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1a0b74: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a0b78: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1a0b7c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1a0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1a0b80: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1a0b84: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1a0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1a0b88: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1a0b8c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1a0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x1a0b90: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1a0b94: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1a0b98: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1a0b9c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1a0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1a0ba0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1a0ba4: 0xc06818e  jal         func_1A0638
    ctx->pc = 0x1A0BA4u;
    SET_GPR_U32(ctx, 31, 0x1A0BACu);
    ctx->pc = 0x1A0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BA4u;
    // 0x1a0ba8: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0638u, 0x1A0BA4u, 0x1A0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BACu;
label_1a0bac:
    // 0x1a0bac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0BACu;
    {
        const bool branch_taken_0x1a0bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BACu;
        // 0x1a0bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bac) {
            ctx->pc = 0x1A0BFCu;
            goto label_1a0bfc;
        }
    }
    ctx->pc = 0x1A0BB4u;
    // 0x1a0bb4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1a0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a0bb8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0BB8u;
    {
        const bool branch_taken_0x1a0bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BB8u;
        // 0x1a0bbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bb8) {
            ctx->pc = 0x1A0C00u;
            goto label_1a0c00;
        }
    }
    ctx->pc = 0x1A0BC0u;
    // 0x1a0bc0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1a0bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0BC4u;
    {
        const bool branch_taken_0x1a0bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BC4u;
        // 0x1a0bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bc4) {
            ctx->pc = 0x1A0BDCu;
            goto label_1a0bdc;
        }
    }
    ctx->pc = 0x1A0BCCu;
    // 0x1a0bcc: 0xc068536  jal         func_1A14D8
    ctx->pc = 0x1A0BCCu;
    SET_GPR_U32(ctx, 31, 0x1A0BD4u);
    ctx->pc = 0x1A0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BCCu;
    // 0x1a0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14D8u, 0x1A0BCCu, 0x1A0BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BD4u;
label_1a0bd4:
    // 0x1a0bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0BD4u;
    {
        const bool branch_taken_0x1a0bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bd4) {
            ctx->pc = 0x1A0BE8u;
            goto label_1a0be8;
        }
    }
    ctx->pc = 0x1A0BDCu;
label_1a0bdc:
    // 0x1a0bdc: 0xc0681b6  jal         func_1A06D8
    ctx->pc = 0x1A0BDCu;
    SET_GPR_U32(ctx, 31, 0x1A0BE4u);
    ctx->pc = 0x1A0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BDCu;
    // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A06D8u, 0x1A0BDCu, 0x1A0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BE4u;
label_1a0be4:
    // 0x1a0be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0be8:
    // 0x1a0be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0bec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0bf4: 0x8068252  j           func_1A0948
    ctx->pc = 0x1A0BF4u;
    ctx->pc = 0x1A0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BF4u;
    // 0x1a0bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0948u;
    entry_001a0948_0x1a0948(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0BFCu;
label_1a0bfc:
    // 0x1a0bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0c00:
    // 0x1a0c00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0c08u;
}
