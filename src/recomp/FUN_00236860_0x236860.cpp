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

// Function: FUN_00236860
// Address: 0x236860 - 0x236894
void FUN_00236860_0x236860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236860_0x236860");
#endif

    switch (ctx->pc) {
        case 0x236878u: goto label_236878;
        case 0x236888u: goto label_236888;
        default: break;
    }

    ctx->pc = 0x236860u;

    // 0x236860: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23686c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236870: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236870u;
    SET_GPR_U32(ctx, 31, 0x236878u);
    ctx->pc = 0x236874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236870u;
    // 0x236874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236870u, 0x236878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236878u;
label_236878:
    // 0x236878: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x23687c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236880: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236880u;
    SET_GPR_U32(ctx, 31, 0x236888u);
    ctx->pc = 0x236884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236880u;
    // 0x236884: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236880u, 0x236888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236888u;
label_236888:
    // 0x236888: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x23688c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23688Cu;
    SET_GPR_U32(ctx, 31, 0x236894u);
    ctx->pc = 0x236890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23688Cu;
    // 0x236890: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23688Cu, 0x236894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236894u;
}
