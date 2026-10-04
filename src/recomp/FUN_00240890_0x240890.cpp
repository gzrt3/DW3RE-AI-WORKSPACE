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

// Function: FUN_00240890
// Address: 0x240890 - 0x240954
void FUN_00240890_0x240890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240890_0x240890");
#endif

    switch (ctx->pc) {
        case 0x2408acu: goto label_2408ac;
        case 0x2408ecu: goto label_2408ec;
        case 0x240900u: goto label_240900;
        case 0x240908u: goto label_240908;
        case 0x240920u: goto label_240920;
        default: break;
    }

    ctx->pc = 0x240890u;

    // 0x240890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24089c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x24089cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x2408a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2408a8: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x2408a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_2408ac:
    // 0x2408ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x2408b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2408b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2408b4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x2408b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x2408b8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2408b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2408bc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2408bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2408c0: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2408C0u;
    {
        const bool branch_taken_0x2408c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2408c0) {
            ctx->pc = 0x24093Cu;
            goto label_24093c;
        }
    }
    ctx->pc = 0x2408C8u;
    // 0x2408c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2408cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2408d0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2408d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x2408d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2408d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2408d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2408d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2408dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2408dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408e0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2408e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2408e4: 0xc056a20  jal         func_15A880
    ctx->pc = 0x2408E4u;
    SET_GPR_U32(ctx, 31, 0x2408ECu);
    ctx->pc = 0x2408E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408E4u;
    // 0x2408e8: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2408E4u, 0x2408ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408ECu;
label_2408ec:
    // 0x2408ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2408ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2408f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408f4: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2408f8: 0xc056a04  jal         func_15A810
    ctx->pc = 0x2408F8u;
    SET_GPR_U32(ctx, 31, 0x240900u);
    ctx->pc = 0x2408FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408F8u;
    // 0x2408fc: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2408F8u, 0x240900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240900u;
label_240900:
    // 0x240900: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x240900u;
    SET_GPR_U32(ctx, 31, 0x240908u);
    ctx->pc = 0x240904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240900u;
    // 0x240904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x240900u, 0x240908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240908u;
label_240908:
    // 0x240908: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x24090c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x24090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x240910: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240914: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x240918: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x240918u;
    SET_GPR_U32(ctx, 31, 0x240920u);
    ctx->pc = 0x24091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240918u;
    // 0x24091c: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240918u, 0x240920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240920u;
label_240920:
    // 0x240920: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x240924: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x240928: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x24092c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240930: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240934: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x240938: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240938u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_24093c:
    // 0x24093c: 0x0  nop
    ctx->pc = 0x24093cu;
    // NOP
    // 0x240940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240944: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x240948: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x240948u;
    {
        const bool branch_taken_0x240948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240948) {
            ctx->pc = 0x2408ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2408ac;
        }
    }
    ctx->pc = 0x240950u;
    // 0x240950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x240954u;
}
