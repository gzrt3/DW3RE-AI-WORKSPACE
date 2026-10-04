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

// Function: FUN_00240a30
// Address: 0x240a30 - 0x240aec
void FUN_00240a30_0x240a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240a30_0x240a30");
#endif

    switch (ctx->pc) {
        case 0x240a4cu: goto label_240a4c;
        case 0x240a88u: goto label_240a88;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa4u: goto label_240aa4;
        case 0x240abcu: goto label_240abc;
        default: break;
    }

    ctx->pc = 0x240a30u;

    // 0x240a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240a3c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x240a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x240a40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x240a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x240a48: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x240a48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_240a4c:
    // 0x240a4c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x240a50: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x240a54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x240a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x240a58: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x240a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240a5c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x240A5Cu;
    {
        const bool branch_taken_0x240a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a5c) {
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x240A64u;
    // 0x240a64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x240a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x240a6c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x240a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240a74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x240a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a7c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x240a80: 0xc056a20  jal         func_15A880
    ctx->pc = 0x240A80u;
    SET_GPR_U32(ctx, 31, 0x240A88u);
    ctx->pc = 0x240A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A80u;
    // 0x240a84: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240A80u, 0x240A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A88u;
label_240a88:
    // 0x240a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a90: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x240a94: 0xc056a04  jal         func_15A810
    ctx->pc = 0x240A94u;
    SET_GPR_U32(ctx, 31, 0x240A9Cu);
    ctx->pc = 0x240A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A94u;
    // 0x240a98: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240A94u, 0x240A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A9Cu;
label_240a9c:
    // 0x240a9c: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x240A9Cu;
    SET_GPR_U32(ctx, 31, 0x240AA4u);
    ctx->pc = 0x240AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A9Cu;
    // 0x240aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x240A9Cu, 0x240AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AA4u;
label_240aa4:
    // 0x240aa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x240aa8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x240aac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240ab0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x240ab4: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x240AB4u;
    SET_GPR_U32(ctx, 31, 0x240ABCu);
    ctx->pc = 0x240AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AB4u;
    // 0x240ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240AB4u, 0x240ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240ABCu;
label_240abc:
    // 0x240abc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x240ac0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x240ac4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x240ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240ad0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x240ad4: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240ad8:
    // 0x240ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240adc: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x240ae0: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240a4c;
        }
    }
    ctx->pc = 0x240AE8u;
    // 0x240ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x240aecu;
}
