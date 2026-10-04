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

// Function: FUN_00240960
// Address: 0x240960 - 0x240a1c
void FUN_00240960_0x240960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240960_0x240960");
#endif

    switch (ctx->pc) {
        case 0x24097cu: goto label_24097c;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409ecu: goto label_2409ec;
        default: break;
    }

    ctx->pc = 0x240960u;

    // 0x240960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24096c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x24096cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x240970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240974: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x240974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x240978: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x240978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_24097c:
    // 0x24097c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x240980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240984: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x240984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x240988: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x240988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x24098c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x24098cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240990: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x240990u;
    {
        const bool branch_taken_0x240990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x240990) {
            ctx->pc = 0x240A08u;
            goto label_240a08;
        }
    }
    ctx->pc = 0x240998u;
    // 0x240998: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x24099c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2409a0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x2409a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2409a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2409ac: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2409b0: 0xc056a20  jal         func_15A880
    ctx->pc = 0x2409B0u;
    SET_GPR_U32(ctx, 31, 0x2409B8u);
    ctx->pc = 0x2409B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409B0u;
    // 0x2409b4: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2409B0u, 0x2409B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B8u;
label_2409b8:
    // 0x2409b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2409bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409c0: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2409c4: 0xc056a04  jal         func_15A810
    ctx->pc = 0x2409C4u;
    SET_GPR_U32(ctx, 31, 0x2409CCu);
    ctx->pc = 0x2409C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409C4u;
    // 0x2409c8: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2409C4u, 0x2409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x2409CCu;
    SET_GPR_U32(ctx, 31, 0x2409D4u);
    ctx->pc = 0x2409D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409CCu;
    // 0x2409d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x2409CCu, 0x2409D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409D4u;
label_2409d4:
    // 0x2409d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2409d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2409d8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2409dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2409e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2409e4: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x2409E4u;
    SET_GPR_U32(ctx, 31, 0x2409ECu);
    ctx->pc = 0x2409E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E4u;
    // 0x2409e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x2409E4u, 0x2409ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409ECu;
label_2409ec:
    // 0x2409ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2409f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2409f4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x2409f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2409fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2409fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240a00: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x240a04: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240a04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240a08:
    // 0x240a08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240a0c: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x240a10: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x240A10u;
    {
        const bool branch_taken_0x240a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a10) {
            ctx->pc = 0x24097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24097c;
        }
    }
    ctx->pc = 0x240A18u;
    // 0x240a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x240a1cu;
}
