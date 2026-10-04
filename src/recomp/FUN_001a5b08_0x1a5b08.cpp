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

// Function: FUN_001a5b08
// Address: 0x1a5b08 - 0x1a5c94
void FUN_001a5b08_0x1a5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5b08_0x1a5b08");
#endif

    switch (ctx->pc) {
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c80u: goto label_1a5c80;
        default: break;
    }

    ctx->pc = 0x1a5b08u;

    // 0x1a5b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5b0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5b18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a5b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b24: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A5B24u;
    {
        const bool branch_taken_0x1a5b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B24u;
        // 0x1a5b28: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b24) {
            ctx->pc = 0x1A5C14u;
            goto label_1a5c14;
        }
    }
    ctx->pc = 0x1A5B2Cu;
    // 0x1a5b2c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1a5b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a5b30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B30u;
    {
        const bool branch_taken_0x1a5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B30u;
        // 0x1a5b34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b30) {
            ctx->pc = 0x1A5B48u;
            goto label_1a5b48;
        }
    }
    ctx->pc = 0x1A5B38u;
    // 0x1a5b38: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5C64u;
            goto label_1a5c64;
        }
    }
    ctx->pc = 0x1A5B40u;
    // 0x1a5b40: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1A5B40u;
    {
        const bool branch_taken_0x1a5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b40) {
            ctx->pc = 0x1A5C8Cu;
            goto label_1a5c8c;
        }
    }
    ctx->pc = 0x1A5B48u;
label_1a5b48:
    // 0x1a5b48: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1A5B48u;
    {
        const bool branch_taken_0x1a5b48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B48u;
        // 0x1a5b4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b48) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5B50u;
    // 0x1a5b50: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A5B50u;
    {
        const bool branch_taken_0x1a5b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b50) {
            ctx->pc = 0x1A5B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5B50u;
            // 0x1a5b54: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BB8u;
            goto label_1a5bb8;
        }
    }
    ctx->pc = 0x1A5B58u;
    // 0x1a5b58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5b5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a5b60: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1a5b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B74u;
            goto label_1a5b74;
        }
    }
    ctx->pc = 0x1A5B6Cu;
    // 0x1a5b6c: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B74u);
    ctx->pc = 0x1A5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B6Cu;
    // 0x1a5b70: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5B6Cu, 0x1A5B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B74u;
label_1a5b74:
    // 0x1a5b74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5b78: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1a5b7c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a5b80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5b84: 0xc069652  jal         func_1A5948
    ctx->pc = 0x1A5B84u;
    SET_GPR_U32(ctx, 31, 0x1A5B8Cu);
    ctx->pc = 0x1A5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B84u;
    // 0x1a5b88: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5948u, 0x1A5B84u, 0x1A5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B8Cu;
label_1a5b8c:
    // 0x1a5b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b90: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5B90u;
    {
        const bool branch_taken_0x1a5b90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a5b90) {
            ctx->pc = 0x1A5BA4u;
            goto label_1a5ba4;
        }
    }
    ctx->pc = 0x1A5B98u;
    // 0x1a5b98: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a5b9c: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A5BA4u);
    ctx->pc = 0x1A5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B9Cu;
    // 0x1a5ba0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5B9Cu, 0x1A5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BA4u;
label_1a5ba4:
    // 0x1a5ba4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5ba8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a5bac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a5bb0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A5BB0u;
    {
        const bool branch_taken_0x1a5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BB0u;
        // 0x1a5bb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bb0) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5BB8u;
label_1a5bb8:
    // 0x1a5bb8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a5bbc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5bc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5bc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5BC4u;
    {
        const bool branch_taken_0x1a5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bc4) {
            ctx->pc = 0x1A5C08u;
            goto label_1a5c08;
        }
    }
    ctx->pc = 0x1A5BCCu;
    // 0x1a5bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BCCu;
        // 0x1a5bd0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5BDCu;
            goto label_1a5bdc;
        }
    }
    ctx->pc = 0x1A5BD4u;
    // 0x1a5bd4: 0x0  nop
    ctx->pc = 0x1a5bd4u;
    // NOP
label_1a5bd8:
    // 0x1a5bd8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a5bdc:
    // 0x1a5bdc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a5be0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a5be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a5be8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a5bec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a5becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5bf0: 0xc0696a2  jal         func_1A5A88
    ctx->pc = 0x1A5BF0u;
    SET_GPR_U32(ctx, 31, 0x1A5BF8u);
    ctx->pc = 0x1A5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BF0u;
    // 0x1a5bf4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A88u, 0x1A5BF0u, 0x1A5BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BF8u;
label_1a5bf8:
    // 0x1a5bf8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5bfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5c00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A5C00u;
    {
        const bool branch_taken_0x1a5c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c00) {
            ctx->pc = 0x1A5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C00u;
            // 0x1a5c04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5bd8;
        }
    }
    ctx->pc = 0x1A5C08u;
label_1a5c08:
    // 0x1a5c08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a5c0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C14u;
label_1a5c14:
    // 0x1a5c14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5c1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a5c20: 0xc069660  jal         func_1A5980
    ctx->pc = 0x1A5C20u;
    SET_GPR_U32(ctx, 31, 0x1A5C28u);
    ctx->pc = 0x1A5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C20u;
    // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5980u, 0x1A5C20u, 0x1A5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C28u;
label_1a5c28:
    // 0x1a5c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5C2Cu;
    {
        const bool branch_taken_0x1a5c2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a5c2c) {
            ctx->pc = 0x1A5C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C2Cu;
            // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C48u;
            goto label_1a5c48;
        }
    }
    ctx->pc = 0x1A5C34u;
    // 0x1a5c34: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a5c38: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5C38u;
    SET_GPR_U32(ctx, 31, 0x1A5C40u);
    ctx->pc = 0x1A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C38u;
    // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5C38u, 0x1A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C80u;
            goto label_1a5c80;
        }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5c50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5c54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1a5c58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a5c5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C64u;
label_1a5c64:
    // 0x1a5c64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C68u;
    {
        const bool branch_taken_0x1a5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c68) {
            ctx->pc = 0x1A5C80u;
            goto label_1a5c80;
        }
    }
    ctx->pc = 0x1A5C70u;
    // 0x1a5c70: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a5c74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c78: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5C78u;
    SET_GPR_U32(ctx, 31, 0x1A5C80u);
    ctx->pc = 0x1A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C78u;
    // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5C78u, 0x1A5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C80u;
label_1a5c80:
    // 0x1a5c80: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1a5c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5c88:
    // 0x1a5c88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5c8c:
    // 0x1a5c8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5c94u;
}
