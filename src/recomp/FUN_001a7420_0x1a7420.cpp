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

// Function: FUN_001a7420
// Address: 0x1a7420 - 0x1a7480
void FUN_001a7420_0x1a7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7420_0x1a7420");
#endif

    switch (ctx->pc) {
        case 0x1a7438u: goto label_1a7438;
        default: break;
    }

    ctx->pc = 0x1a7420u;

    // 0x1a7420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a742c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7430: 0xc069cbe  jal         func_1A72F8
    ctx->pc = 0x1A7430u;
    SET_GPR_U32(ctx, 31, 0x1A7438u);
    ctx->pc = 0x1A7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7430u;
    // 0x1a7434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72F8u, 0x1A7430u, 0x1A7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7438u;
label_1a7438:
    // 0x1a7438: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1a7438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a743c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7440: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a7444: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1a7444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x1a7448: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1a744c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7450: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1a7450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1a7454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7458: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1a7458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1a745c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a745cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7464: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a7464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1a7468: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a746c: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1a746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a7470: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a7474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7478: 0x8069b94  j           func_1A6E50
    ctx->pc = 0x1A7478u;
    ctx->pc = 0x1A747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7478u;
    // 0x1a747c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E50u;
    FUN_001a6e50_0x1a6e50(rdram, ctx, runtime); return;
    ctx->pc = 0x1A7480u;
}
