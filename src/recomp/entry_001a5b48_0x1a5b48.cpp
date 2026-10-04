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

// Function: entry_001a5b48
// Address: 0x1a5b48 - 0x1a5c14
void entry_001a5b48_0x1a5b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5b48_0x1a5b48");
#endif

    switch (ctx->pc) {
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bf8u: goto label_1a5bf8;
        default: break;
    }

    ctx->pc = 0x1a5b48u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1A5C14u;
}
