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

// Function: FUN_001a76d8
// Address: 0x1a76d8 - 0x1a7810
void FUN_001a76d8_0x1a76d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a76d8_0x1a76d8");
#endif

    switch (ctx->pc) {
        case 0x1a7710u: goto label_1a7710;
        case 0x1a7750u: goto label_1a7750;
        case 0x1a7760u: goto label_1a7760;
        case 0x1a7788u: goto label_1a7788;
        case 0x1a7798u: goto label_1a7798;
        case 0x1a77a0u: goto label_1a77a0;
        case 0x1a77b0u: goto label_1a77b0;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a77f8u: goto label_1a77f8;
        default: break;
    }

    ctx->pc = 0x1a76d8u;

    // 0x1a76d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a76dc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a76dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a76e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a76e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a76e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a76e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a76ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a76f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a76f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a76f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a76f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a76f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a76fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a76fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7700: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a7700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1a7704: 0x248431c0  addiu       $a0, $a0, 0x31C0
    ctx->pc = 0x1a7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    // 0x1a7708: 0xc069c8c  jal         func_1A7230
    ctx->pc = 0x1A7708u;
    SET_GPR_U32(ctx, 31, 0x1A7710u);
    ctx->pc = 0x1A770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7708u;
    // 0x1a770c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7230u, 0x1A7708u, 0x1A7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7710u;
label_1a7710:
    // 0x1a7710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7714: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A7714u;
    {
        const bool branch_taken_0x1a7714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7714u;
        // 0x1a7718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7714) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A771Cu;
    // 0x1a771c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a7720: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1a7724: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a7724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1a7728: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a7728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a772c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1a772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x1a7730: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a7730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1a7734: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A7734u;
    {
        const bool branch_taken_0x1a7734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7734u;
        // 0x1a7738: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7734) {
            ctx->pc = 0x1A77C0u;
            goto label_1a77c0;
        }
    }
    ctx->pc = 0x1A773Cu;
    // 0x1a773c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7740: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a7740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a7744: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a7744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a7748: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A7748u;
    SET_GPR_U32(ctx, 31, 0x1A7750u);
    ctx->pc = 0x1A774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7748u;
    // 0x1a774c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A7748u, 0x1A7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7750u;
label_1a7750:
    // 0x1a7750: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7750u;
    {
        const bool branch_taken_0x1a7750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7750u;
        // 0x1a7754: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7750) {
            ctx->pc = 0x1A7768u;
            goto label_1a7768;
        }
    }
    ctx->pc = 0x1A7758u;
    // 0x1a7758: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7758u;
    SET_GPR_U32(ctx, 31, 0x1A7760u);
    ctx->pc = 0x1A775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7758u;
    // 0x1a775c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7758u, 0x1A7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7760u;
label_1a7760:
    // 0x1a7760: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A7760u;
    {
        const bool branch_taken_0x1a7760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7760u;
        // 0x1a7764: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7760) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A7768u;
label_1a7768:
    // 0x1a7768: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a776c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a776cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7770: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a7770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1a7774: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a777c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a777cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7780: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7780u;
    SET_GPR_U32(ctx, 31, 0x1A7788u);
    ctx->pc = 0x1A7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7780u;
    // 0x1a7784: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7780u, 0x1A7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7788u;
label_1a7788:
    // 0x1a7788: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7788u;
    {
        const bool branch_taken_0x1a7788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7788) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7790u;
    // 0x1a7790: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7790u;
    SET_GPR_U32(ctx, 31, 0x1A7798u);
    ctx->pc = 0x1A7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7790u;
    // 0x1a7794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7790u, 0x1A7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7798u;
label_1a7798:
    // 0x1a7798: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7798u;
    SET_GPR_U32(ctx, 31, 0x1A77A0u);
    ctx->pc = 0x1A779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7798u;
    // 0x1a779c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7798u, 0x1A77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77A0u;
label_1a77a0:
    // 0x1a77a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A77A0u;
    {
        const bool branch_taken_0x1a77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A0u;
        // 0x1a77a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77a0) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77A8u;
label_1a77a8:
    // 0x1a77a8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A77A8u;
    SET_GPR_U32(ctx, 31, 0x1A77B0u);
    ctx->pc = 0x1A77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77A8u;
    // 0x1a77ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A77A8u, 0x1A77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B0u;
label_1a77b0:
    // 0x1a77b0: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A77B0u;
    SET_GPR_U32(ctx, 31, 0x1A77B8u);
    ctx->pc = 0x1A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77B0u;
    // 0x1a77b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A77B0u, 0x1A77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B8u;
label_1a77b8:
    // 0x1a77b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A77B8u;
    {
        const bool branch_taken_0x1a77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77B8u;
        // 0x1a77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77b8) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77C0u;
label_1a77c0:
    // 0x1a77c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a77c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a77c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a77cc: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a77ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1a77d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a77d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77e0: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A77E0u;
    SET_GPR_U32(ctx, 31, 0x1A77E8u);
    ctx->pc = 0x1A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77E0u;
    // 0x1a77e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A77E0u, 0x1A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77E8u;
label_1a77e8:
    // 0x1a77e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77F0u;
    // 0x1a77f0: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A77F0u;
    SET_GPR_U32(ctx, 31, 0x1A77F8u);
    ctx->pc = 0x1A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77F0u;
    // 0x1a77f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A77F0u, 0x1A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77F8u;
label_1a77f8:
    // 0x1a77f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a77fc:
    // 0x1a77fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7800: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7804: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7808: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a780c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a780cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a7810u;
}
