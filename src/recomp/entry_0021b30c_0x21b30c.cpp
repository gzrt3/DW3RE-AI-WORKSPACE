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

// Function: entry_0021b30c
// Address: 0x21b30c - 0x21b440
void entry_0021b30c_0x21b30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b30c_0x21b30c");
#endif

    switch (ctx->pc) {
        case 0x21b328u: goto label_21b328;
        case 0x21b330u: goto label_21b330;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b414u: goto label_21b414;
        case 0x21b41cu: goto label_21b41c;
        case 0x21b424u: goto label_21b424;
        case 0x21b42cu: goto label_21b42c;
        default: break;
    }

    ctx->pc = 0x21b30cu;

    // 0x21b30c: 0x0  nop
    ctx->pc = 0x21b30cu;
    // NOP
    // 0x21b310: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b314: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21b318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b31c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b320: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B320u;
    SET_GPR_U32(ctx, 31, 0x21B328u);
    ctx->pc = 0x21B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B320u;
    // 0x21b324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B320u, 0x21B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B328u;
label_21b328:
    // 0x21b328: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21B328u;
    SET_GPR_U32(ctx, 31, 0x21B330u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21B328u, 0x21B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B330u;
label_21b330:
    // 0x21b330: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b334: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21B334u;
    {
        const bool branch_taken_0x21b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b334) {
            ctx->pc = 0x21B3D0u;
            goto label_21b3d0;
        }
    }
    ctx->pc = 0x21B33Cu;
    // 0x21b33c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b340: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21b344: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b34c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21b350: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b354: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21b358: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21b360: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b364: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21b368: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b36c: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21b370: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21b374: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21b378: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b37c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b384: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21b388: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21b38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b390: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21b394: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b398: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b39c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b3a0: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3a8: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b3ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b3b0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b3b4: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b3b8: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b3bc: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b3c0: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21b3c4: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21b3c8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B3C8u;
    SET_GPR_U32(ctx, 31, 0x21B3D0u);
    ctx->pc = 0x21B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3C8u;
    // 0x21b3cc: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B3C8u, 0x21B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3D0u;
label_21b3d0:
    // 0x21b3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b3d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b3d8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b3dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b3e0: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21b3e4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b3e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3f0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b400: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b404: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B404u;
    SET_GPR_U32(ctx, 31, 0x21B40Cu);
    ctx->pc = 0x21B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B404u;
    // 0x21b408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B404u, 0x21B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21B40Cu;
    SET_GPR_U32(ctx, 31, 0x21B414u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21B40Cu, 0x21B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B414u;
label_21b414:
    // 0x21b414: 0xc04e120  jal         func_138480
    ctx->pc = 0x21B414u;
    SET_GPR_U32(ctx, 31, 0x21B41Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B414u, 0x21B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B41Cu;
label_21b41c:
    // 0x21b41c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21B41Cu;
    SET_GPR_U32(ctx, 31, 0x21B424u);
    ctx->pc = 0x21B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B41Cu;
    // 0x21b420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B41Cu, 0x21B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B424u;
label_21b424:
    // 0x21b424: 0xc060258  jal         func_180960
    ctx->pc = 0x21B424u;
    SET_GPR_U32(ctx, 31, 0x21B42Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21B424u, 0x21B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B42Cu;
label_21b42c:
    // 0x21b42c: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21b430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B430u;
    {
        const bool branch_taken_0x21b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b430) {
            ctx->pc = 0x21B440u;
            return;
        }
    }
    ctx->pc = 0x21B438u;
    // 0x21b438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b43c: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
    ctx->pc = 0x21b440u;
}
