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

// Function: FUN_0023aed8
// Address: 0x23aed8 - 0x23afcc
void FUN_0023aed8_0x23aed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023aed8_0x23aed8");
#endif

    switch (ctx->pc) {
        case 0x23af1cu: goto label_23af1c;
        case 0x23af44u: goto label_23af44;
        case 0x23af58u: goto label_23af58;
        case 0x23af70u: goto label_23af70;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afacu: goto label_23afac;
        default: break;
    }

    ctx->pc = 0x23aed8u;

    // 0x23aed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23aedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23aee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23aee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aee4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x23aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x23aee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23aeec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23aef0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23aef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23aef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23aef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aefc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23AEFCu;
    {
        const bool branch_taken_0x23aefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEFCu;
        // 0x23af00: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aefc) {
            ctx->pc = 0x23AF20u;
            goto label_23af20;
        }
    }
    ctx->pc = 0x23AF04u;
    // 0x23af04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23af08: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x23af0c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23af10: 0x8cc6e3a4  lw          $a2, -0x1C5C($a2)
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960036)));
    // 0x23af14: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x23AF14u;
    SET_GPR_U32(ctx, 31, 0x23AF1Cu);
    ctx->pc = 0x23AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF14u;
    // 0x23af18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x23AF14u, 0x23AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF1Cu;
label_23af1c:
    // 0x23af1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23af1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23af20:
    // 0x23af20: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x23af24: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x23AF24u;
    {
        const bool branch_taken_0x23af24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF24u;
        // 0x23af28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af24) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AF2Cu;
    // 0x23af2c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x23af2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x23af30: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23AF30u;
    {
        const bool branch_taken_0x23af30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF30u;
        // 0x23af34: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af30) {
            ctx->pc = 0x23AF84u;
            goto label_23af84;
        }
    }
    ctx->pc = 0x23AF38u;
    // 0x23af38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af3c: 0xc08eb24  jal         func_23AC90
    ctx->pc = 0x23AF3Cu;
    SET_GPR_U32(ctx, 31, 0x23AF44u);
    ctx->pc = 0x23AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF3Cu;
    // 0x23af40: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC90u, 0x23AF3Cu, 0x23AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23af44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af48: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x23af48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x23af4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23AF4Cu;
    {
        const bool branch_taken_0x23af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af4c) {
            ctx->pc = 0x23AF80u;
            goto label_23af80;
        }
    }
    ctx->pc = 0x23AF54u;
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
label_23af58:
    // 0x23af58: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF58u;
            // 0x23af5c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF80u;
            goto label_23af80;
        }
    }
    ctx->pc = 0x23AF60u;
    // 0x23af60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af68: 0xc08eb32  jal         func_23ACC8
    ctx->pc = 0x23AF68u;
    SET_GPR_U32(ctx, 31, 0x23AF70u);
    ctx->pc = 0x23AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF68u;
    // 0x23af6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACC8u, 0x23AF68u, 0x23AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF70u;
label_23af70:
    // 0x23af70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23af70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23af78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23af78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23af7c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23af80:
    // 0x23af80: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_23af84:
    // 0x23af84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23AF84u;
    {
        const bool branch_taken_0x23af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF84u;
        // 0x23af88: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af84) {
            ctx->pc = 0x23AFACu;
            goto label_23afac;
        }
    }
    ctx->pc = 0x23AF8Cu;
    // 0x23af8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23af8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af94: 0xc08eb32  jal         func_23ACC8
    ctx->pc = 0x23AF94u;
    SET_GPR_U32(ctx, 31, 0x23AF9Cu);
    ctx->pc = 0x23AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF94u;
    // 0x23af98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACC8u, 0x23AF94u, 0x23AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF9Cu;
label_23af9c:
    // 0x23af9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa4: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23AFA4u;
    SET_GPR_U32(ctx, 31, 0x23AFACu);
    ctx->pc = 0x23AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA4u;
    // 0x23afa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23AFA4u, 0x23AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFACu;
label_23afac:
    // 0x23afac: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23af58;
        }
    }
    ctx->pc = 0x23AFB4u;
    // 0x23afb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23afb8:
    // 0x23afb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23afc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23afc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23afc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23afc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23afc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23afccu;
}
