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

// Function: FUN_001582e0
// Address: 0x1582e0 - 0x1583b8
void FUN_001582e0_0x1582e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001582e0_0x1582e0");
#endif

    switch (ctx->pc) {
        case 0x1582f0u: goto label_1582f0;
        case 0x1582f8u: goto label_1582f8;
        case 0x158300u: goto label_158300;
        case 0x158308u: goto label_158308;
        case 0x158310u: goto label_158310;
        case 0x158318u: goto label_158318;
        case 0x158320u: goto label_158320;
        case 0x158328u: goto label_158328;
        case 0x158330u: goto label_158330;
        case 0x158338u: goto label_158338;
        case 0x158340u: goto label_158340;
        case 0x158350u: goto label_158350;
        case 0x158358u: goto label_158358;
        case 0x158368u: goto label_158368;
        case 0x158374u: goto label_158374;
        case 0x15837cu: goto label_15837c;
        case 0x158384u: goto label_158384;
        case 0x15838cu: goto label_15838c;
        case 0x158394u: goto label_158394;
        case 0x15839cu: goto label_15839c;
        case 0x1583a4u: goto label_1583a4;
        case 0x1583acu: goto label_1583ac;
        case 0x1583b4u: goto label_1583b4;
        default: break;
    }

    ctx->pc = 0x1582e0u;

    // 0x1582e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1582e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1582e8: 0xc05ffa8  jal         func_17FEA0
    ctx->pc = 0x1582E8u;
    SET_GPR_U32(ctx, 31, 0x1582F0u);
    ctx->pc = 0x17FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEA0u, 0x1582E8u, 0x1582F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582F0u;
label_1582f0:
    // 0x1582f0: 0xc0602a0  jal         func_180A80
    ctx->pc = 0x1582F0u;
    SET_GPR_U32(ctx, 31, 0x1582F8u);
    ctx->pc = 0x180A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A80u, 0x1582F0u, 0x1582F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582F8u;
label_1582f8:
    // 0x1582f8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1582F8u;
    SET_GPR_U32(ctx, 31, 0x158300u);
    ctx->pc = 0x181A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181A00u, 0x1582F8u, 0x158300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158300u;
label_158300:
    // 0x158300: 0xc041790  jal         func_105E40
    ctx->pc = 0x158300u;
    SET_GPR_U32(ctx, 31, 0x158308u);
    ctx->pc = 0x105E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E40u, 0x158300u, 0x158308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158308u;
label_158308:
    // 0x158308: 0xc054c34  jal         func_1530D0
    ctx->pc = 0x158308u;
    SET_GPR_U32(ctx, 31, 0x158310u);
    ctx->pc = 0x15830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158308u;
    // 0x15830c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530D0u, 0x158308u, 0x158310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158310u;
label_158310:
    // 0x158310: 0xc070798  jal         func_1C1E60
    ctx->pc = 0x158310u;
    SET_GPR_U32(ctx, 31, 0x158318u);
    ctx->pc = 0x158314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158310u;
    // 0x158314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1E60u, 0x158310u, 0x158318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158318u;
label_158318:
    // 0x158318: 0xc07a784  jal         func_1E9E10
    ctx->pc = 0x158318u;
    SET_GPR_U32(ctx, 31, 0x158320u);
    ctx->pc = 0x1E9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9E10u, 0x158318u, 0x158320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158320u;
label_158320:
    // 0x158320: 0xc077f30  jal         func_1DFCC0
    ctx->pc = 0x158320u;
    SET_GPR_U32(ctx, 31, 0x158328u);
    ctx->pc = 0x1DFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCC0u, 0x158320u, 0x158328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158328u;
label_158328:
    // 0x158328: 0xc083cb4  jal         func_20F2D0
    ctx->pc = 0x158328u;
    SET_GPR_U32(ctx, 31, 0x158330u);
    ctx->pc = 0x20F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2D0u, 0x158328u, 0x158330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158330u;
label_158330:
    // 0x158330: 0xc0449ec  jal         func_1127B0
    ctx->pc = 0x158330u;
    SET_GPR_U32(ctx, 31, 0x158338u);
    ctx->pc = 0x1127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B0u, 0x158330u, 0x158338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158338u;
label_158338:
    // 0x158338: 0xc066998  jal         func_19A660
    ctx->pc = 0x158338u;
    SET_GPR_U32(ctx, 31, 0x158340u);
    ctx->pc = 0x15833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158338u;
    // 0x15833c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x158338u, 0x158340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158340u;
label_158340:
    // 0x158340: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x158344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x158344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158348: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x158348u;
    SET_GPR_U32(ctx, 31, 0x158350u);
    ctx->pc = 0x15834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158348u;
    // 0x15834c: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x158348u, 0x158350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158350u;
label_158350:
    // 0x158350: 0xc066998  jal         func_19A660
    ctx->pc = 0x158350u;
    SET_GPR_U32(ctx, 31, 0x158358u);
    ctx->pc = 0x158354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158350u;
    // 0x158354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x158350u, 0x158358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158358u;
label_158358:
    // 0x158358: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x15835c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158360: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x158360u;
    SET_GPR_U32(ctx, 31, 0x158368u);
    ctx->pc = 0x158364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158360u;
    // 0x158364: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x158360u, 0x158368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158368u;
label_158368:
    // 0x158368: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15836c: 0xc066440  jal         func_199100
    ctx->pc = 0x15836Cu;
    SET_GPR_U32(ctx, 31, 0x158374u);
    ctx->pc = 0x158370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15836Cu;
    // 0x158370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x15836Cu, 0x158374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158374u;
label_158374:
    // 0x158374: 0xc05cd8c  jal         func_173630
    ctx->pc = 0x158374u;
    SET_GPR_U32(ctx, 31, 0x15837Cu);
    ctx->pc = 0x173630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173630u, 0x158374u, 0x15837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15837Cu;
label_15837c:
    // 0x15837c: 0xc064f80  jal         func_193E00
    ctx->pc = 0x15837Cu;
    SET_GPR_U32(ctx, 31, 0x158384u);
    ctx->pc = 0x193E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E00u, 0x15837Cu, 0x158384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158384u;
label_158384:
    // 0x158384: 0xc04d5d4  jal         func_135750
    ctx->pc = 0x158384u;
    SET_GPR_U32(ctx, 31, 0x15838Cu);
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x158384u, 0x15838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15838Cu;
label_15838c:
    // 0x15838c: 0xc088e04  jal         func_223810
    ctx->pc = 0x15838Cu;
    SET_GPR_U32(ctx, 31, 0x158394u);
    ctx->pc = 0x223810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223810u, 0x15838Cu, 0x158394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158394u;
label_158394:
    // 0x158394: 0xc059264  jal         func_164990
    ctx->pc = 0x158394u;
    SET_GPR_U32(ctx, 31, 0x15839Cu);
    ctx->pc = 0x164990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164990u, 0x158394u, 0x15839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15839Cu;
label_15839c:
    // 0x15839c: 0xc04e0bc  jal         func_1382F0
    ctx->pc = 0x15839Cu;
    SET_GPR_U32(ctx, 31, 0x1583A4u);
    ctx->pc = 0x1382F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1382F0u, 0x15839Cu, 0x1583A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A4u;
label_1583a4:
    // 0x1583a4: 0xc080fd8  jal         func_203F60
    ctx->pc = 0x1583A4u;
    SET_GPR_U32(ctx, 31, 0x1583ACu);
    ctx->pc = 0x203F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F60u, 0x1583A4u, 0x1583ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583ACu;
label_1583ac:
    // 0x1583ac: 0xc08ff48  jal         func_23FD20
    ctx->pc = 0x1583ACu;
    SET_GPR_U32(ctx, 31, 0x1583B4u);
    ctx->pc = 0x23FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FD20u, 0x1583ACu, 0x1583B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583B4u;
label_1583b4:
    // 0x1583b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1583b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1583b8u;
}
