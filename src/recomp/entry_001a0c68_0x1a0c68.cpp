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

// Function: entry_001a0c68
// Address: 0x1a0c68 - 0x1a0d60
void entry_001a0c68_0x1a0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0c68_0x1a0c68");
#endif

    switch (ctx->pc) {
        case 0x1a0c88u: goto label_1a0c88;
        case 0x1a0cb0u: goto label_1a0cb0;
        case 0x1a0d18u: goto label_1a0d18;
        case 0x1a0d58u: goto label_1a0d58;
        default: break;
    }

    ctx->pc = 0x1a0c68u;

    // 0x1a0c68: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a0c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a0c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a0c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c78: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1a0c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1a0c7c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a0c80: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1A0C80u;
    SET_GPR_U32(ctx, 31, 0x1A0C88u);
    ctx->pc = 0x1A0C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C80u;
    // 0x1a0c84: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1A0C80u, 0x1A0C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C88u;
label_1a0c88:
    // 0x1a0c88: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a0c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a0c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c94: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a0c98: 0x24e80038  addiu       $t0, $a3, 0x38
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x1a0c9c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x1a0c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x1a0ca0: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1a0ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x1a0ca4: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1a0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x1a0ca8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1A0CA8u;
    SET_GPR_U32(ctx, 31, 0x1A0CB0u);
    ctx->pc = 0x1A0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CA8u;
    // 0x1a0cac: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1A0CA8u, 0x1A0CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CB0u;
label_1a0cb0:
    // 0x1a0cb0: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a0cb4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1a0cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cc0: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a0cc4: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1a0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x1a0cc8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1a0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x1a0ccc: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1a0cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1a0cd0: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1a0cd4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1a0cd8: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x1a0cd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1a0cdc: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x1a0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
    // 0x1a0ce0: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x1a0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x1a0ce4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1a0ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1a0ce8: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1a0cec: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x1a0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x1a0cf0: 0xae2600d0  sw          $a2, 0xD0($s1)
    ctx->pc = 0x1a0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
    // 0x1a0cf4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1a0cf8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1a0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1a0cfc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1a0d00: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1a0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1a0d04: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1a0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1a0d08: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1a0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x1a0d0c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1a0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1a0d10: 0xc06818e  jal         func_1A0638
    ctx->pc = 0x1A0D10u;
    SET_GPR_U32(ctx, 31, 0x1A0D18u);
    ctx->pc = 0x1A0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D10u;
    // 0x1a0d14: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0638u, 0x1A0D10u, 0x1A0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D18u;
label_1a0d18:
    // 0x1a0d18: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0DA0u;
            return;
        }
    }
    ctx->pc = 0x1A0D20u;
    // 0x1a0d20: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1a0d24: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0D24u;
    {
        const bool branch_taken_0x1a0d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D24u;
        // 0x1a0d28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d24) {
            ctx->pc = 0x1A0DA4u;
            return;
        }
    }
    ctx->pc = 0x1A0D2Cu;
    // 0x1a0d2c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1a0d30: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0D30u;
    {
        const bool branch_taken_0x1a0d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D30u;
        // 0x1a0d34: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d30) {
            ctx->pc = 0x1A0DA8u;
            return;
        }
    }
    ctx->pc = 0x1A0D38u;
    // 0x1a0d38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a0d3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a0d40: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a0d44: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1a0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1a0d48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0D48u;
    {
        const bool branch_taken_0x1a0d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D48u;
        // 0x1a0d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d48) {
            ctx->pc = 0x1A0D60u;
            return;
        }
    }
    ctx->pc = 0x1A0D50u;
    // 0x1a0d50: 0xc068536  jal         func_1A14D8
    ctx->pc = 0x1A0D50u;
    SET_GPR_U32(ctx, 31, 0x1A0D58u);
    ctx->pc = 0x1A0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D50u;
    // 0x1a0d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14D8u, 0x1A0D50u, 0x1A0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D58u;
label_1a0d58:
    // 0x1a0d58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0D58u;
    {
        const bool branch_taken_0x1a0d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d58) {
            ctx->pc = 0x1A0D6Cu;
            return;
        }
    }
    ctx->pc = 0x1A0D60u;
}
