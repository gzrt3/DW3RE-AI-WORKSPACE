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

// Function: FUN_001ecbb0
// Address: 0x1ecbb0 - 0x1eccd4
void FUN_001ecbb0_0x1ecbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecbb0_0x1ecbb0");
#endif

    switch (ctx->pc) {
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccd0u: goto label_1eccd0;
        default: break;
    }

    ctx->pc = 0x1ecbb0u;

    // 0x1ecbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ecbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecbc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ecbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbc4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1ECBC4u;
    {
        const bool branch_taken_0x1ecbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBC4u;
        // 0x1ecbc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbc4) {
            ctx->pc = 0x1ECCA0u;
            goto label_1ecca0;
        }
    }
    ctx->pc = 0x1ECBCCu;
    // 0x1ecbcc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECBCCu;
    {
        const bool branch_taken_0x1ecbcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBCCu;
        // 0x1ecbd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbcc) {
            ctx->pc = 0x1ECBDCu;
            goto label_1ecbdc;
        }
    }
    ctx->pc = 0x1ECBD4u;
    // 0x1ecbd4: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1ECBD4u;
    {
        const bool branch_taken_0x1ecbd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecbd4) {
            ctx->pc = 0x1ECCA0u;
            goto label_1ecca0;
        }
    }
    ctx->pc = 0x1ECBDCu;
label_1ecbdc:
    // 0x1ecbdc: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1ECBDCu;
    {
        const bool branch_taken_0x1ecbdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbdc) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECBE4u;
    // 0x1ecbe4: 0xc0819f0  jal         func_2067C0
    ctx->pc = 0x1ECBE4u;
    SET_GPR_U32(ctx, 31, 0x1ECBECu);
    ctx->pc = 0x2067C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067C0u, 0x1ECBE4u, 0x1ECBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBECu;
label_1ecbec:
    // 0x1ecbec: 0xc090674  jal         func_2419D0
    ctx->pc = 0x1ECBECu;
    SET_GPR_U32(ctx, 31, 0x1ECBF4u);
    ctx->pc = 0x2419D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2419D0u, 0x1ECBECu, 0x1ECBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBF4u;
label_1ecbf4:
    // 0x1ecbf4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x1ECBF4u;
    SET_GPR_U32(ctx, 31, 0x1ECBFCu);
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x1ECBF4u, 0x1ECBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBFCu;
label_1ecbfc:
    // 0x1ecbfc: 0xc081448  jal         func_205120
    ctx->pc = 0x1ECBFCu;
    SET_GPR_U32(ctx, 31, 0x1ECC04u);
    ctx->pc = 0x205120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205120u, 0x1ECBFCu, 0x1ECC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC04u;
label_1ecc04:
    // 0x1ecc04: 0xc0709a8  jal         func_1C26A0
    ctx->pc = 0x1ECC04u;
    SET_GPR_U32(ctx, 31, 0x1ECC0Cu);
    ctx->pc = 0x1C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C26A0u, 0x1ECC04u, 0x1ECC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC0Cu;
label_1ecc0c:
    // 0x1ecc0c: 0xc070a58  jal         func_1C2960
    ctx->pc = 0x1ECC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC14u);
    ctx->pc = 0x1C2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2960u, 0x1ECC0Cu, 0x1ECC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC14u;
label_1ecc14:
    // 0x1ecc14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc18: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ecc1c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ecc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1ecc20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECC28u;
    // 0x1ecc28: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1ecc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
    // 0x1ecc2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECC2Cu;
    {
        const bool branch_taken_0x1ecc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc2c) {
            ctx->pc = 0x1ECC48u;
            goto label_1ecc48;
        }
    }
    ctx->pc = 0x1ECC34u;
    // 0x1ecc34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc3c: 0x9022498a  lbu         $v0, 0x498A($at)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33498Au));
    // 0x1ecc40: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x1ECC40u;
    SET_GPR_U32(ctx, 31, 0x1ECC48u);
    ctx->pc = 0x1ECC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC40u;
    // 0x1ecc44: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC40u, 0x1ECC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC48u;
label_1ecc48:
    // 0x1ecc48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc4c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x1ecc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC50u;
    {
        const bool branch_taken_0x1ecc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc50) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECC58u;
    // 0x1ecc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc5c: 0x90224a1a  lbu         $v0, 0x4A1A($at)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18970)));
    // 0x1ecc60: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x1ECC60u;
    SET_GPR_U32(ctx, 31, 0x1ECC68u);
    ctx->pc = 0x1ECC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC60u;
    // 0x1ecc64: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC60u, 0x1ECC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC68u;
label_1ecc68:
    // 0x1ecc68: 0xc070c50  jal         func_1C3140
    ctx->pc = 0x1ECC68u;
    SET_GPR_U32(ctx, 31, 0x1ECC70u);
    ctx->pc = 0x1C3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3140u, 0x1ECC68u, 0x1ECC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC70u;
label_1ecc70:
    // 0x1ecc70: 0xc070d64  jal         func_1C3590
    ctx->pc = 0x1ECC70u;
    SET_GPR_U32(ctx, 31, 0x1ECC78u);
    ctx->pc = 0x1C3590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3590u, 0x1ECC70u, 0x1ECC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC78u;
label_1ecc78:
    // 0x1ecc78: 0xc070b08  jal         func_1C2C20
    ctx->pc = 0x1ECC78u;
    SET_GPR_U32(ctx, 31, 0x1ECC80u);
    ctx->pc = 0x1C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C20u, 0x1ECC78u, 0x1ECC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC80u;
label_1ecc80:
    // 0x1ecc80: 0xc070cb4  jal         func_1C32D0
    ctx->pc = 0x1ECC80u;
    SET_GPR_U32(ctx, 31, 0x1ECC88u);
    ctx->pc = 0x1C32D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C32D0u, 0x1ECC80u, 0x1ECC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0xc07d874  jal         func_1F61D0
    ctx->pc = 0x1ECC88u;
    SET_GPR_U32(ctx, 31, 0x1ECC90u);
    ctx->pc = 0x1F61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61D0u, 0x1ECC88u, 0x1ECC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC90u;
label_1ecc90:
    // 0x1ecc90: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1ECC90u;
    SET_GPR_U32(ctx, 31, 0x1ECC98u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1ECC90u, 0x1ECC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC98u;
label_1ecc98:
    // 0x1ecc98: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1ECC98u;
    SET_GPR_U32(ctx, 31, 0x1ECCA0u);
    ctx->pc = 0x1ECC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC98u;
    // 0x1ecc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1ECC98u, 0x1ECCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA0u;
label_1ecca0:
    // 0x1ecca0: 0xc07ab58  jal         func_1EAD60
    ctx->pc = 0x1ECCA0u;
    SET_GPR_U32(ctx, 31, 0x1ECCA8u);
    ctx->pc = 0x1EAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD60u, 0x1ECCA0u, 0x1ECCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA8u;
label_1ecca8:
    // 0x1ecca8: 0xc04e19c  jal         func_138670
    ctx->pc = 0x1ECCA8u;
    SET_GPR_U32(ctx, 31, 0x1ECCB0u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1ECCA8u, 0x1ECCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCB0u;
label_1eccb0:
    // 0x1eccb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECCB0u;
    {
        const bool branch_taken_0x1eccb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB0u;
        // 0x1eccb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccb0) {
            ctx->pc = 0x1ECCC0u;
            goto label_1eccc0;
        }
    }
    ctx->pc = 0x1ECCB8u;
    // 0x1eccb8: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECCB8u;
    {
        const bool branch_taken_0x1eccb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eccb8) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECCC0u;
label_1eccc0:
    // 0x1eccc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECCC0u;
    {
        const bool branch_taken_0x1eccc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccc0) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECCC8u;
    // 0x1eccc8: 0xc041478  jal         func_1051E0
    ctx->pc = 0x1ECCC8u;
    SET_GPR_U32(ctx, 31, 0x1ECCD0u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x1ECCC8u, 0x1ECCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCD0u;
label_1eccd0:
    // 0x1eccd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1eccd4u;
}
