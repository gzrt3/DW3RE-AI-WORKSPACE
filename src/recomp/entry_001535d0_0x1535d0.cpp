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

// Function: entry_001535d0
// Address: 0x1535d0 - 0x153608
void entry_001535d0_0x1535d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535d0_0x1535d0");
#endif

    switch (ctx->pc) {
        case 0x153600u: goto label_153600;
        default: break;
    }

    ctx->pc = 0x1535d0u;

    // 0x1535d0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1535d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x1535d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1535d8: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1535d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x1535dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535e0: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x1535e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x1535e4: 0x240603f8  addiu       $a2, $zero, 0x3F8
    ctx->pc = 0x1535e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x1535e8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1535e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535ec: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535f0: 0x24070278  addiu       $a3, $zero, 0x278
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x1535f4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1535f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535f8: 0xc054dc8  jal         func_153720
    ctx->pc = 0x1535F8u;
    SET_GPR_U32(ctx, 31, 0x153600u);
    ctx->pc = 0x1535FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535F8u;
    // 0x1535fc: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x1535F8u, 0x153600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153600u;
label_153600:
    // 0x153600: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x153600u;
    {
        const bool branch_taken_0x153600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153600u;
        // 0x153604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153600) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x153608u;
}
