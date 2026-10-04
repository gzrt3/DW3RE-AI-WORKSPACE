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

// Function: entry_0021a644
// Address: 0x21a644 - 0x21a778
void entry_0021a644_0x21a644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a644_0x21a644");
#endif

    switch (ctx->pc) {
        case 0x21a660u: goto label_21a660;
        case 0x21a668u: goto label_21a668;
        case 0x21a708u: goto label_21a708;
        case 0x21a744u: goto label_21a744;
        case 0x21a74cu: goto label_21a74c;
        case 0x21a754u: goto label_21a754;
        case 0x21a75cu: goto label_21a75c;
        case 0x21a764u: goto label_21a764;
        default: break;
    }

    ctx->pc = 0x21a644u;

    // 0x21a644: 0x0  nop
    ctx->pc = 0x21a644u;
    // NOP
    // 0x21a648: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21a648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a64c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21a650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a658: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A658u;
    SET_GPR_U32(ctx, 31, 0x21A660u);
    ctx->pc = 0x21A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A658u;
    // 0x21a65c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A658u, 0x21A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A660u;
label_21a660:
    // 0x21a660: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21A660u;
    SET_GPR_U32(ctx, 31, 0x21A668u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21A660u, 0x21A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A668u;
label_21a668:
    // 0x21a668: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a66c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21A66Cu;
    {
        const bool branch_taken_0x21a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a66c) {
            ctx->pc = 0x21A708u;
            goto label_21a708;
        }
    }
    ctx->pc = 0x21A674u;
    // 0x21a674: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a678: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21a67c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a684: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21a688: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a68c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21a690: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21a698: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a69c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21a69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21a6a0: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a6a4: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21a6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21a6a8: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21a6a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21a6ac: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21a6b0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21a6b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21a6b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a6b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6bc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21a6c0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21a6c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a6c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6c8: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21a6cc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21a6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a6d4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a6d8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21a6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6e0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a6e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a6e8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a6ec: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21a6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a6f0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21a6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a6f4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21a6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a6f8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21a6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21a6fc: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21a6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21a700: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A700u;
    SET_GPR_U32(ctx, 31, 0x21A708u);
    ctx->pc = 0x21A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A700u;
    // 0x21a704: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A700u, 0x21A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A708u;
label_21a708:
    // 0x21a708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a70c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a710: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a714: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a718: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21a71c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21a720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a728: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21a72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a738: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21a738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a73c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A73Cu;
    SET_GPR_U32(ctx, 31, 0x21A744u);
    ctx->pc = 0x21A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A73Cu;
    // 0x21a740: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A73Cu, 0x21A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A744u;
label_21a744:
    // 0x21a744: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21A744u;
    SET_GPR_U32(ctx, 31, 0x21A74Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21A744u, 0x21A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A74Cu;
label_21a74c:
    // 0x21a74c: 0xc04e120  jal         func_138480
    ctx->pc = 0x21A74Cu;
    SET_GPR_U32(ctx, 31, 0x21A754u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21A74Cu, 0x21A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A754u;
label_21a754:
    // 0x21a754: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21A754u;
    SET_GPR_U32(ctx, 31, 0x21A75Cu);
    ctx->pc = 0x21A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A754u;
    // 0x21a758: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21A754u, 0x21A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A75Cu;
label_21a75c:
    // 0x21a75c: 0xc060258  jal         func_180960
    ctx->pc = 0x21A75Cu;
    SET_GPR_U32(ctx, 31, 0x21A764u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21A75Cu, 0x21A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A764u;
label_21a764:
    // 0x21a764: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21a768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A768u;
    {
        const bool branch_taken_0x21a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a768) {
            ctx->pc = 0x21A778u;
            return;
        }
    }
    ctx->pc = 0x21A770u;
    // 0x21a770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a774: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21a774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
    ctx->pc = 0x21a778u;
}
