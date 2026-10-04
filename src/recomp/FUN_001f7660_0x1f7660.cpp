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

// Function: FUN_001f7660
// Address: 0x1f7660 - 0x1f7774
void FUN_001f7660_0x1f7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7660_0x1f7660");
#endif

    switch (ctx->pc) {
        case 0x1f7678u: goto label_1f7678;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7768u: goto label_1f7768;
        default: break;
    }

    ctx->pc = 0x1f7660u;

    // 0x1f7660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f766c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7674: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7678:
    // 0x1f7678: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7678u;
    {
        const bool branch_taken_0x1f7678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7678u;
        // 0x1f767c: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7678) {
            ctx->pc = 0x1F768Cu;
            goto label_1f768c;
        }
    }
    ctx->pc = 0x1F7680u;
    // 0x1f7680: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7680u;
    {
        const bool branch_taken_0x1f7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7680) {
            ctx->pc = 0x1F768Cu;
            goto label_1f768c;
        }
    }
    ctx->pc = 0x1F7688u;
    // 0x1f7688: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1f768c:
    // 0x1f768c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7694u;
    {
        const bool branch_taken_0x1f7694 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7694u;
        // 0x1f7698: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7694) {
            ctx->pc = 0x1F76A4u;
            goto label_1f76a4;
        }
    }
    ctx->pc = 0x1F769Cu;
    // 0x1f769c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1f76a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f76a4:
    // 0x1f76a4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1f76a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f76a8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F76A8u;
    {
        const bool branch_taken_0x1f76a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a8) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F76B0u;
    // 0x1f76b0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F76B0u;
    {
        const bool branch_taken_0x1f76b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B0u;
        // 0x1f76b4: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b0) {
            ctx->pc = 0x1F76D4u;
            goto label_1f76d4;
        }
    }
    ctx->pc = 0x1F76B8u;
    // 0x1f76b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76bc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1f76c0: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
    // 0x1f76c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f76c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1f76cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F76CCu;
    {
        const bool branch_taken_0x1f76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76cc) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F76D4u;
label_1f76d4:
    // 0x1f76d4: 0x0  nop
    ctx->pc = 0x1f76d4u;
    // NOP
    // 0x1f76d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f76dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1f76e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f76e4: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
    // 0x1f76e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f76ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1f76f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f76f4:
    // 0x1f76f4: 0x0  nop
    ctx->pc = 0x1f76f4u;
    // NOP
    // 0x1f76f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7704: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x1f7708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f770c: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
label_1f7710:
    // 0x1f7710: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7710u;
    {
        const bool branch_taken_0x1f7710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7710u;
        // 0x1f7714: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7710) {
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F7718u;
    // 0x1f7718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f771c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F7748u;
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F7724u;
    // 0x1f7724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7724u;
    {
        const bool branch_taken_0x1f7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7724u;
        // 0x1f7728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7724) {
            ctx->pc = 0x1F7758u;
            goto label_1f7758;
        }
    }
    ctx->pc = 0x1F772Cu;
label_1f772c:
    // 0x1f772c: 0x0  nop
    ctx->pc = 0x1f772cu;
    // NOP
    // 0x1f7730: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1f7734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7738: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7748u;
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F7740u;
    // 0x1f7740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7740u;
    {
        const bool branch_taken_0x1f7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7740) {
            ctx->pc = 0x1F7758u;
            goto label_1f7758;
        }
    }
    ctx->pc = 0x1F7748u;
label_1f7748:
    // 0x1f7748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f774c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1f774cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7750: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F7750u;
    {
        const bool branch_taken_0x1f7750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7750u;
        // 0x1f7754: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7750) {
            ctx->pc = 0x1F7710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7710;
        }
    }
    ctx->pc = 0x1F7758u;
label_1f7758:
    // 0x1f7758: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7758u;
    {
        const bool branch_taken_0x1f7758 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7758) {
            ctx->pc = 0x1F7770u;
            goto label_1f7770;
        }
    }
    ctx->pc = 0x1F7760u;
    // 0x1f7760: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F7760u;
    SET_GPR_U32(ctx, 31, 0x1F7768u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F7760u, 0x1F7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7768u;
label_1f7768:
    // 0x1f7768: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7678;
        }
    }
    ctx->pc = 0x1F7770u;
label_1f7770:
    // 0x1f7770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1f7774u;
}
