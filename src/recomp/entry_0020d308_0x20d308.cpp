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

// Function: entry_0020d308
// Address: 0x20d308 - 0x20d4b8
void entry_0020d308_0x20d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d308_0x20d308");
#endif

    switch (ctx->pc) {
        case 0x20d310u: goto label_20d310;
        case 0x20d318u: goto label_20d318;
        case 0x20d320u: goto label_20d320;
        case 0x20d360u: goto label_20d360;
        case 0x20d368u: goto label_20d368;
        case 0x20d434u: goto label_20d434;
        case 0x20d474u: goto label_20d474;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d484u: goto label_20d484;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d494u: goto label_20d494;
        case 0x20d49cu: goto label_20d49c;
        default: break;
    }

    ctx->pc = 0x20d308u;

    // 0x20d308: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x20D308u;
    SET_GPR_U32(ctx, 31, 0x20D310u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20D308u, 0x20D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D310u;
label_20d310:
    // 0x20d310: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x20D310u;
    SET_GPR_U32(ctx, 31, 0x20D318u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x20D310u, 0x20D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D318u;
label_20d318:
    // 0x20d318: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x20D318u;
    SET_GPR_U32(ctx, 31, 0x20D320u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D318u, 0x20D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D320u;
label_20d320:
    // 0x20d320: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x20d324: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d328: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x20d32c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d334: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
    // 0x20d338: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d344: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d34c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d354: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d358: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D358u;
    SET_GPR_U32(ctx, 31, 0x20D360u);
    ctx->pc = 0x20D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D358u;
    // 0x20d35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D358u, 0x20D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D360u;
label_20d360:
    // 0x20d360: 0xc08372c  jal         func_20DCB0
    ctx->pc = 0x20D360u;
    SET_GPR_U32(ctx, 31, 0x20D368u);
    ctx->pc = 0x20DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCB0u, 0x20D360u, 0x20D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D368u;
label_20d368:
    // 0x20d368: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d36c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20D36Cu;
    {
        const bool branch_taken_0x20d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D36Cu;
        // 0x20d370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d36c) {
            ctx->pc = 0x20D434u;
            goto label_20d434;
        }
    }
    ctx->pc = 0x20D374u;
    // 0x20d374: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d378: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x20d37c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x20d380: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d384: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
    // 0x20d388: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d38c: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x20d390: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x20d394: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d398: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a0: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
    // 0x20d3a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a8: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x20d3ac: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d3b0: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x20d3b4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d3b8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x20d3bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d3c4: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x20d3c8: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d3cc: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d3d0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d3d4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d3d8: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d3dc: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d3e0: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d3e4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x20d3e8: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20d3ec: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d3f0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x20d3f4: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d3f8: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
    // 0x20d3fc: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d404: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d404u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
    // 0x20d408: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d40c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d40cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d410: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
    // 0x20d414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d418: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
    // 0x20d41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20d420: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20d424: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x20d428: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d42c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D42Cu;
    SET_GPR_U32(ctx, 31, 0x20D434u);
    ctx->pc = 0x20D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D42Cu;
    // 0x20d430: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D42Cu, 0x20D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D434u;
label_20d434:
    // 0x20d434: 0x0  nop
    ctx->pc = 0x20d434u;
    // NOP
    // 0x20d438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x20d43c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d440: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d444: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d448: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
    // 0x20d44c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d458: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d46c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D46Cu, 0x20D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x20D474u, 0x20D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x20D47Cu;
    SET_GPR_U32(ctx, 31, 0x20D484u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x20D47Cu, 0x20D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D484u;
label_20d484:
    // 0x20d484: 0xc04e120  jal         func_138480
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x20D48Cu;
    SET_GPR_U32(ctx, 31, 0x20D494u);
    ctx->pc = 0x20D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D48Cu;
    // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D48Cu, 0x20D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0xc060258  jal         func_180960
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D494u, 0x20D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x8f839164  lw          $v1, -0x6E9C($gp)
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x20d4a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D4A0u;
    {
        const bool branch_taken_0x20d4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d4a0) {
            ctx->pc = 0x20D4B8u;
            return;
        }
    }
    ctx->pc = 0x20D4A8u;
    // 0x20d4a8: 0x8f838730  lw          $v1, -0x78D0($gp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x20d4ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D4ACu;
    {
        const bool branch_taken_0x20d4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4ACu;
        // 0x20d4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4ac) {
            ctx->pc = 0x20D4B8u;
            return;
        }
    }
    ctx->pc = 0x20D4B4u;
    // 0x20d4b4: 0xaf839168  sw          $v1, -0x6E98($gp)
    ctx->pc = 0x20d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 3));
    ctx->pc = 0x20d4b8u;
}
