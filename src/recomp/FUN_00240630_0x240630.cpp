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

// Function: FUN_00240630
// Address: 0x240630 - 0x240688
void FUN_00240630_0x240630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240630_0x240630");
#endif

    switch (ctx->pc) {
        case 0x240658u: goto label_240658;
        case 0x24066cu: goto label_24066c;
        case 0x240674u: goto label_240674;
        default: break;
    }

    ctx->pc = 0x240630u;

    // 0x240630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240634: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x240638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24063c: 0x24421855  addiu       $v0, $v0, 0x1855
    ctx->pc = 0x24063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6229));
    // 0x240640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240648: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24064c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24064cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240650: 0xc056a20  jal         func_15A880
    ctx->pc = 0x240650u;
    SET_GPR_U32(ctx, 31, 0x240658u);
    ctx->pc = 0x240654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240650u;
    // 0x240654: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240650u, 0x240658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240658u;
label_240658:
    // 0x240658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240660: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x240664: 0xc056a04  jal         func_15A810
    ctx->pc = 0x240664u;
    SET_GPR_U32(ctx, 31, 0x24066Cu);
    ctx->pc = 0x240668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240664u;
    // 0x240668: 0x27a7002c  addiu       $a3, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240664u, 0x24066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24066Cu;
label_24066c:
    // 0x24066c: 0xc057138  jal         func_15C4E0
    ctx->pc = 0x24066Cu;
    SET_GPR_U32(ctx, 31, 0x240674u);
    ctx->pc = 0x240670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24066Cu;
    // 0x240670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x24066Cu, 0x240674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240674u;
label_240674:
    // 0x240674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240678: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x24067c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x24067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x240680: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x240684: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x240684u;
    SET_GPR_U32(ctx, 31, 0x24068Cu);
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240684u, 0x24068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24068Cu;
}
