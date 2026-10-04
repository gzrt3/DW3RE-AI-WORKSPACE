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

// Function: FUN_001ec2f0
// Address: 0x1ec2f0 - 0x1ec428
void FUN_001ec2f0_0x1ec2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec2f0_0x1ec2f0");
#endif

    switch (ctx->pc) {
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec424u: goto label_1ec424;
        default: break;
    }

    ctx->pc = 0x1ec2f0u;

    // 0x1ec2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec2f8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1ec2fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ec2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ec300: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1EC300u;
    {
        const bool branch_taken_0x1ec300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC300u;
        // 0x1ec304: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec300) {
            ctx->pc = 0x1EC424u;
            goto label_1ec424;
        }
    }
    ctx->pc = 0x1EC308u;
    // 0x1ec308: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ec308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ec30c: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1ec310: 0x24030650  addiu       $v1, $zero, 0x650
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1616));
    // 0x1ec314: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1ec314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x1ec318: 0x8f828f1c  lw          $v0, -0x70E4($gp)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938396)));
    // 0x1ec31c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1ec31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1ec320: 0x24a5fc80  addiu       $a1, $a1, -0x380
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966400));
    // 0x1ec324: 0xe33018  mult        $a2, $a3, $v1
    ctx->pc = 0x1ec324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1ec328: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1ec32c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec330: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ec330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ec334: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec338: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC338u;
    {
        const bool branch_taken_0x1ec338 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC338u;
        // 0x1ec33c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec338) {
            ctx->pc = 0x1EC34Cu;
            goto label_1ec34c;
        }
    }
    ctx->pc = 0x1EC340u;
    // 0x1ec340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC340u;
    {
        const bool branch_taken_0x1ec340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec340) {
            ctx->pc = 0x1EC34Cu;
            goto label_1ec34c;
        }
    }
    ctx->pc = 0x1EC348u;
    // 0x1ec348: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x1ec348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_1ec34c:
    // 0x1ec34c: 0xaf828f1c  sw          $v0, -0x70E4($gp)
    ctx->pc = 0x1ec34cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938396), GPR_U32(ctx, 2));
    // 0x1ec350: 0x8f838f1c  lw          $v1, -0x70E4($gp)
    ctx->pc = 0x1ec350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938396)));
    // 0x1ec354: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1ec354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1ec358: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC358u;
    {
        const bool branch_taken_0x1ec358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec358) {
            ctx->pc = 0x1EC384u;
            goto label_1ec384;
        }
    }
    ctx->pc = 0x1EC360u;
    // 0x1ec360: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ec360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ec364: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec368: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1ec36c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC36Cu;
    {
        const bool branch_taken_0x1ec36c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC36Cu;
        // 0x1ec370: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec36c) {
            ctx->pc = 0x1EC37Cu;
            goto label_1ec37c;
        }
    }
    ctx->pc = 0x1EC374u;
    // 0x1ec374: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ec378: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1ec37c:
    // 0x1ec37c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC37Cu;
    {
        const bool branch_taken_0x1ec37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC37Cu;
        // 0x1ec380: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec37c) {
            ctx->pc = 0x1EC39Cu;
            goto label_1ec39c;
        }
    }
    ctx->pc = 0x1EC384u;
label_1ec384:
    // 0x1ec384: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1ec388: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC388u;
    {
        const bool branch_taken_0x1ec388 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec388) {
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EC390u;
    // 0x1ec390: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ec390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ec394: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1ec398:
    // 0x1ec398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec39c:
    // 0x1ec39c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec3a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ec3a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a8:
    // 0x1ec3a8: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1ec3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ec3ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ec3b0: 0xa1060083  sb          $a2, 0x83($t0)
    ctx->pc = 0x1ec3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3b4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1ec3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ec3b8: 0xa1060123  sb          $a2, 0x123($t0)
    ctx->pc = 0x1ec3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 291), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3bc: 0x24e70500  addiu       $a3, $a3, 0x500
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1ec3c0: 0xa10601c3  sb          $a2, 0x1C3($t0)
    ctx->pc = 0x1ec3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 451), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3c4: 0xa1060263  sb          $a2, 0x263($t0)
    ctx->pc = 0x1ec3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 611), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3c8: 0xa1060303  sb          $a2, 0x303($t0)
    ctx->pc = 0x1ec3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 771), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3cc: 0xa10603a3  sb          $a2, 0x3A3($t0)
    ctx->pc = 0x1ec3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 931), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3d0: 0xa1060443  sb          $a2, 0x443($t0)
    ctx->pc = 0x1ec3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1091), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EC3D4u;
    {
        const bool branch_taken_0x1ec3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D4u;
        // 0x1ec3d8: 0xa10604e3  sb          $a2, 0x4E3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1251), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3d4) {
            ctx->pc = 0x1EC3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3a8;
        }
    }
    ctx->pc = 0x1EC3DCu;
    // 0x1ec3dc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1ec3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ec3e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC3E0u;
    {
        const bool branch_taken_0x1ec3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E0u;
        // 0x1ec3e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e0) {
            ctx->pc = 0x1EC410u;
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC3E8u;
    // 0x1ec3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec3ec: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x1ec3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ec3f0:
    // 0x1ec3f0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ec3f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec3f8: 0xa0460083  sb          $a2, 0x83($v0)
    ctx->pc = 0x1ec3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec3fc: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x1ec400: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1ec400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ec404: 0x0  nop
    ctx->pc = 0x1ec404u;
    // NOP
    // 0x1ec408: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC408u;
    {
        const bool branch_taken_0x1ec408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec408) {
            ctx->pc = 0x1EC3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC410u;
label_1ec410:
    // 0x1ec410: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1ec414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec41c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EC41Cu;
    SET_GPR_U32(ctx, 31, 0x1EC424u);
    ctx->pc = 0x1EC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC41Cu;
    // 0x1ec420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC41Cu, 0x1EC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC424u;
label_1ec424:
    // 0x1ec424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ec428u;
}
