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

// Function: FUN_00173690
// Address: 0x173690 - 0x173734
void FUN_00173690_0x173690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173690_0x173690");
#endif

    switch (ctx->pc) {
        case 0x1736dcu: goto label_1736dc;
        case 0x1736fcu: goto label_1736fc;
        case 0x173708u: goto label_173708;
        case 0x173718u: goto label_173718;
        case 0x17372cu: goto label_17372c;
        default: break;
    }

    ctx->pc = 0x173690u;

    // 0x173690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173694: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x173698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17369c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1736a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1736a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1736a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1736a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1736a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1736a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1736ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736b0: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1736b0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1736b4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1736b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1736b8: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1736b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x1736bc: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x1736c0: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x1736c4: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    // 0x1736c8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1736cc: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1736d0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1736d4: 0xc066e2a  jal         func_19B8A8
    ctx->pc = 0x1736D4u;
    SET_GPR_U32(ctx, 31, 0x1736DCu);
    ctx->pc = 0x1736D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736D4u;
    // 0x1736d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8A8u, 0x1736D4u, 0x1736DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736DCu;
label_1736dc:
    // 0x1736dc: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x1736e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1736e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1736e8: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
    // 0x1736ec: 0x24844620  addiu       $a0, $a0, 0x4620
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    // 0x1736f0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1736f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1736f4: 0xc066e2a  jal         func_19B8A8
    ctx->pc = 0x1736F4u;
    SET_GPR_U32(ctx, 31, 0x1736FCu);
    ctx->pc = 0x1736F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736F4u;
    // 0x1736f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8A8u, 0x1736F4u, 0x1736FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736FCu;
label_1736fc:
    // 0x1736fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1736fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173700: 0xc066c5c  jal         func_19B170
    ctx->pc = 0x173700u;
    SET_GPR_U32(ctx, 31, 0x173708u);
    ctx->pc = 0x173704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173700u;
    // 0x173704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x173700u, 0x173708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173708u;
label_173708:
    // 0x173708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17370c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173710: 0xc066d10  jal         func_19B440
    ctx->pc = 0x173710u;
    SET_GPR_U32(ctx, 31, 0x173718u);
    ctx->pc = 0x173714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173710u;
    // 0x173714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x173710u, 0x173718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173718u;
label_173718:
    // 0x173718: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x17371c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173720: 0x24a545d0  addiu       $a1, $a1, 0x45D0
    ctx->pc = 0x173720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17872));
    // 0x173724: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x173724u;
    SET_GPR_U32(ctx, 31, 0x17372Cu);
    ctx->pc = 0x173728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173724u;
    // 0x173728: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x173724u, 0x17372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17372Cu;
label_17372c:
    // 0x17372c: 0xc066c46  jal         func_19B118
    ctx->pc = 0x17372Cu;
    SET_GPR_U32(ctx, 31, 0x173734u);
    ctx->pc = 0x173730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17372Cu;
    // 0x173730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x17372Cu, 0x173734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173734u;
}
